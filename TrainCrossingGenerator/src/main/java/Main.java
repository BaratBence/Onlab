import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) throws IOException {
        ArrayList<Train> train=new ArrayList<Train>();
        ArrayList<Car> car=new ArrayList<Car>();
        Scanner myInput = new Scanner( System.in );
        Sensor sensor=new Sensor();
        System.out.println("Train Intersection(from car perspective): ");
        Float Intersection=myInput.nextFloat();
        System.out.println("Simulatons Train Count: ");
        Integer TrainCount = myInput.nextInt();
        System.out.println("Simulatons Car Count: ");
        Integer CarCount= myInput.nextInt();

        read(TrainCount,CarCount,sensor,train,car);
        generate(TrainCount,CarCount,sensor,train,car,Intersection);
    }
    public static void read(Integer TrainCount,Integer CarCount,Sensor sensor,ArrayList<Train> train,ArrayList<Car> car) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String tmp;
        for(int i=1;i<TrainCount+1;i++)
        {
            Train traintmp=new Train();
            System.out.println("Train" +i+ " StartDistance: ");
            tmp = reader.readLine();
            traintmp.setTrainDistanceStart(tmp);
            System.out.println("Train" +i+ " Length: ");
            tmp = reader.readLine();
            traintmp.setTrainLength(tmp);
            train.add(traintmp);
        }
        for(int i=1;i<CarCount+1;i++)
        {
            Car cartmp=new Car();
            System.out.println("Car" +i+ " StartDistance: ");
            tmp = reader.readLine();
            cartmp.setCarDistanceStart(tmp);
            System.out.println("Car" +i+ " Length: ");
            tmp = reader.readLine();
            cartmp.setCarLength(tmp);
            System.out.println("Car" +i+ " is Clumsy?(true/false): ");
            tmp= reader.readLine();
            cartmp.setIsClumsy(tmp);
            car.add(cartmp);
        }
        System.out.println("Sensor Sensor1Position: ");
        tmp = reader.readLine();
        sensor.setSensor1Position(tmp);
        System.out.println("Sensor Sensor2Position: ");
        tmp = reader.readLine();
        sensor.setSensor2Position(tmp);
        sensor.setSize(TrainCount.toString());
    }
    public static void generate(Integer TrainCount,Integer CarCount,Sensor sensor,ArrayList<Train> train,ArrayList<Car> car,Float Intersection) {
        File file = new File("E:/Onlab/TrainCrossingDemo.lua");
        try {
            if (file.createNewFile()) System.out.println("File created: " + file.getName());
            else System.out.println("File already exists.");
        } catch (IOException ex) {
            System.out.println("An error occurred.");
            ex.printStackTrace();
        }
        try {
            FileWriter writer = new FileWriter("TrainCrossingDemo.lua");
            writer.write("oms_setTempDirectory(\"./tmp\")\n");
            writer.write( "oms_newModel(\"TrainCrossing\")\n");
            writer.write( "oms_addSystem(\"TrainCrossing.root\", oms_system_wc)\n\n");
            for(int i=1;i<CarCount+1;i++) writer.write("oms_addSubModel(\"TrainCrossing.root.Car" +i + "\", \"/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu\")\n");
            for(int i=1; i<TrainCount+1;i++) writer.write("oms_addSubModel(\"TrainCrossing.root.Train"+i +"\", \"/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu\")\n");
            
            writer.write("oms_addSubModel(\"TrainCrossing.root.carCollection\", \"/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu\")\n");
            writer.write("oms_addSubModel(\"TrainCrossing.root.trainCollection\", \"/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu\")\n");
            writer.write("oms_addSubModel(\"TrainCrossing.root.TrainLight\", \"/Onlab/TrainCrossing/TrainCrossing.TrainLight/TrainCrossing.TrainLight.fmu\")\n");
            writer.write("oms_addSubModel(\"TrainCrossing.root.Sensors\", \"/Onlab/TrainCrossing/TrainCrossing.Sensors/TrainCrossing.Sensors.fmu\")\n");
            writer.write("\noms_instantiate(\"TrainCrossing\")\n\n");
            writer.write("--Making the connection between variables \n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.Train"+i+".Distance\", \"TrainCrossing.root.trainCollection.Distance"+i+"\")\n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.Train"+i+".Length\", \"TrainCrossing.root.trainCollection.Length"+i+"\")\n");
            writer.write("\n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.Car"+i+".Distance\", \"TrainCrossing.root.carCollection.Distance"+i+"\")\n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.Car"+i+".Length\", \"TrainCrossing.root.carCollection.Length"+i+"\")\n");
            writer.write("\n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.trainCollection.LengthVec["+i+ "]\", \"TrainCrossing.root.Sensors.LengthVec["+i+"]\")\n");
            for(int i=1;i<TrainCount+1;i++)  writer.write("oms_addConnection(\"TrainCrossing.root.trainCollection.DistanceVec["+i+"]\", \"TrainCrossing.root.Sensors.DistanceVec["+i+"]\")\n");
            writer.write("\n");
            writer.write("oms_addConnection(\"TrainCrossing.root.TrainLight.Safe_Passage\", \"TrainCrossing.root.Sensors.Safe_Passage\")\n");
            writer.write("\n");
            for(int i=1;i<CarCount+1;i++)
            {
                writer.write("oms_addConnection(\"TrainCrossing.root.Car"+i+".LightColor\", \"TrainCrossing.root.TrainLight.ColorState_output\")\n");
                writer.write("oms_addConnection(\"TrainCrossing.root.Car"+i+".Gate_Angle\",\"TrainCrossing.root.TrainLight.Gate_Angle_output\")\n");
                writer.write("oms_addConnection(\"TrainCrossing.root.Car"+i+".Target\", \"TrainCrossing.root.TrainLight.Intersection_output\")\n");
                for(int j=1;j<TrainCount+1;j++) writer.write("oms_addConnection(\"TrainCrossing.root.carCollection.LengthVec["+j+"]\", \"TrainCrossing.root.Car"+i+".LengthVec["+j+"]\")\n");
                for(int j=1;j<TrainCount+1;j++) writer.write("oms_addConnection(\"TrainCrossing.root.carCollection.DistanceVec["+j+"]\", \"TrainCrossing.root.Car"+i+".DistanceVec["+j+"]\")\n");
                writer.write("\n");
            }
            writer.write("\n");
            writer.write("simulationEnd=40.0 \n");
            writer.write("stepsize=0.01 \n");
            writer.write("oms_setResultFile(\"TrainCrossing\", \"/Onlab/TrainCrossing/TrainCrossing.mat\")\n");
            writer.write("oms_setStopTime(\"TrainCrossing\", simulationEnd) \n");
            writer.write("oms_setFixedStepSize(\"TrainCrossing.root\",stepsize) \n");
            writer.write("time=0.0 \n");
            writer.write("critical=false \n");
            writer.write("crashed=false\n");
            writer.write("prevcrash=false\n\n");
            writer.write("--Making the starting parameters \n");

            for(int i=1;i<TrainCount+1;i++){
                writer.write("oms_setReal(\"TrainCrossing.root.Train"+i+".Length\","+ train.get(i-1).getTrainLength()+")\n");
                writer.write("oms_setReal(\"TrainCrossing.root.Train"+i+".distanceStart\","+train.get(i-1).getTrainDistanceStart()+")\n");
                writer.write("\n");
            }
            for(int i=1;i<CarCount+1;i++){
                writer.write("oms_setReal(\"TrainCrossing.root.Car"+i+".Length\","+car.get(i-1).getCarLength()+")\n");
                writer.write("oms_setReal(\"TrainCrossing.root.Car"+i+".distanceStart\","+car.get(i-1).getCarDistanceStart()+")\n");
                if(car.get(i-1).getIsClumsy().equals("true")) writer.write("oms_setReal(\"TrainCrossing.root.Car"+i+".isClumsy\",1)\n");
                else writer.write("oms_setReal(\"TrainCrossing.root.Car"+i+".isClumsy\",0)\n");
                writer.write("\n");
            }
            writer.write("oms_setReal(\"TrainCrossing.root.TrainLight.Intersection\","+Intersection.toString()+")\n");
            writer.write("oms_setReal(\"TrainCrossing.root.Sensors.Sensor1Position\","+sensor.getSensor1Position()+")\n");
            writer.write("oms_setReal(\"TrainCrossing.root.Sensors.Sensor2Position\","+sensor.getSensor2Position()+")\n");
            writer.write("\noms_initialize(\"TrainCrossing\")\n");
            writer.write("\n");
            writer.write("function crash()\n");
            writer.write("  trainDanger = false\n");
            writer.write("  carDanger=false\n");
            writer.write("  car = 0 \n");
            writer.write("  train = 0 \n");
            writer.write("  for i=1,3 do \n");
            writer.write("      if oms_getReal(\"TrainCrossing.root.trainCollection.DistanceVec[\".. i ..\"]\")>=oms_getReal(\"TrainCrossing.root.Sensors.Intersection\") and oms_getReal(\"TrainCrossing.root.trainCollection.DistanceVec[\".. i ..\"]\")-oms_getReal(\"TrainCrossing.root.trainCollection.LengthVec[\".. i ..\"]\")<oms_getReal(\"TrainCrossing.root.Sensors.Intersection\")\n");
            writer.write("      then \n");
            writer.write("          trainDanger=true\n");
            writer.write("          train=i \n");
            writer.write("      end \n");
            writer.write("  end \n");
            writer.write("  for i=1,3 do\n");
            writer.write("      if oms_getReal(\"TrainCrossing.root.carCollection.DistanceVec[\".. i ..\"]\")>=oms_getReal(\"TrainCrossing.root.TrainLight.Intersection\") and  oms_getReal(\"TrainCrossing.root.carCollection.DistanceVec[\".. i ..\"]\")-oms_getReal(\"TrainCrossing.root.carCollection.LengthVec[\".. i ..\"]\")<oms_getReal(\"TrainCrossing.root.TrainLight.Intersection\")\n");
            writer.write("      then \n");
            writer.write("          carDanger=true \n");
            writer.write("          car=i \n");
            writer.write("      end \n");
            writer.write("  end \n");
            writer.write("  if trainDanger and carDanger then crashed=true end\n");
            writer.write("  if prevcrash ~= crashed then print(\"Crash happend at \" .. time .. \" between train number \" .. train .. \" and car number \" .. car) prevcrash=true end \n");
            writer.write("end \n");
            writer.write("happend = false \n");
            writer.write("function fail() \n");
            writer.write("  if time>30.0 then \n");
            writer.write("      oms_faultInjection(\"TrainCrossing.root.Sensors.Safe_Passage\", oms_fault_type_const, 1.0)\n");
            writer.write("      if not happend then print(\"Sensor 1 Failed\") happend=true end\n");
            writer.write("  end\n");
            writer.write("end \n");
            writer.write("\n");
            writer.write("while(time<simulationEnd)\n");
            writer.write("  do\n");
            writer.write("      crash()\n");
            writer.write("      fail()\n");
            writer.write("      if oms_getInteger(\"TrainCrossing.root.Sensors.Sensor1Input\") == oms_getInteger(\"TrainCrossing.root.Sensors.Sensor2Output\") then\n");
            writer.write("          if critical==true then\n");
            writer.write("              critical=false\n");
            writer.write("              print(\"Normal section reached at \" ..time)\n");
            writer.write("          end\n");
            writer.write("      else\n");
            writer.write("          if critical==false then\n");
            writer.write("              critical=true\n");
            writer.write("              print(\"Critical section reached at \" ..time)\n");
            writer.write("          end\n");
            writer.write("      end\n");
            writer.write("      if critical==true then\n");
            writer.write("          stepsize=0.001\n");
            writer.write("          oms_setFixedStepSize(\"TrainCrossing.root\",stepsize)\n");
            writer.write("          time=time+stepsize\n");
            writer.write("          oms_stepUntil(\"TrainCrossing\",time)\n");
            writer.write("      else\n");
            writer.write("          stepsize=0.01\n");
            writer.write("          oms_setFixedStepSize(\"TrainCrossing.root\",stepsize)\n");
            writer.write("          time=time+stepsize\n");
            writer.write("          oms_stepUntil(\"TrainCrossing\",time)\n");
            writer.write("      end\n");
            writer.write("end\n");
            writer.write("\n");
            writer.write("oms_terminate(\"TrainCrossing\")\n");
            writer.write("oms_delete(\"TrainCrossing\")\n");
            writer.close();
        } catch (IOException ex) {
            System.out.println("An error occurred.");
            ex.printStackTrace();
        }
    }
}
