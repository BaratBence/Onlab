oms_setTempDirectory("./tmp")
oms_newModel("TrainCrossing")
oms_addSystem("TrainCrossing.root", oms_system_wc)

oms_addSubModel("TrainCrossing.root.Car0", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Car1", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Car2", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Train0", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.Train1", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.Train2", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.carCollection", "/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu")
oms_addSubModel("TrainCrossing.root.trainCollection", "/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu")
oms_addSubModel("TrainCrossing.root.TrainLight", "/Onlab/TrainCrossing/TrainCrossing.TrainLight/TrainCrossing.TrainLight.fmu")
oms_addSubModel("TrainCrossing.root.CrashMonitor", "/Onlab/TrainCrossing/TrainCrossing.CrashMonitor/TrainCrossing.CrashMonitor.fmu")
oms_addSubModel("TrainCrossing.root.TrainIntersectionController", "/Onlab/TrainCrossing/TrainCrossing.TrainIntersectionController/TrainCrossing.TrainIntersectionController.fmu")
oms_addSubModel("TrainCrossing.root.Sensors", "/Onlab/TrainCrossing/TrainCrossing.Sensors/TrainCrossing.Sensors.fmu")
oms_addSubModel("TrainCrossing.root.SensorFailInjector", "/Onlab/TrainCrossing/TrainCrossing.SensorFailInjector/TrainCrossing.SensorFailInjector.fmu")

oms_instantiate("TrainCrossing")

--Making the connection between variables 
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[1]", "TrainCrossing.root.Sensors.LengthVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[2]", "TrainCrossing.root.Sensors.LengthVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[3]", "TrainCrossing.root.Sensors.LengthVec[3]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[1]", "TrainCrossing.root.Sensors.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[2]", "TrainCrossing.root.Sensors.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[3]", "TrainCrossing.root.Sensors.DistanceVec[3]")

oms_addConnection("TrainCrossing.root.TrainIntersectionController.Sensor1_Active", "TrainCrossing.root.Sensors.Sensor1_Active")
oms_addConnection("TrainCrossing.root.TrainIntersectionController.Sensor2_Active", "TrainCrossing.root.Sensors.Sensor2_Active")
oms_addConnection("TrainCrossing.root.TrainLight.Safe_Passage", "TrainCrossing.root.TrainIntersectionController.Safe_Passage")

oms_addConnection("TrainCrossing.root.Car0.LightColor", "TrainCrossing.root.TrainLight.ColorState_output")
oms_addConnection("TrainCrossing.root.Car0.Gate_Angle","TrainCrossing.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainCrossing.root.Car0.Target", "TrainCrossing.root.TrainLight.Intersection_output")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[1]", "TrainCrossing.root.Car0.LengthVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[2]", "TrainCrossing.root.Car0.LengthVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[3]", "TrainCrossing.root.Car0.LengthVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[1]", "TrainCrossing.root.Car0.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[2]", "TrainCrossing.root.Car0.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[3]", "TrainCrossing.root.Car0.DistanceVec[3]")

oms_addConnection("TrainCrossing.root.Car1.LightColor", "TrainCrossing.root.TrainLight.ColorState_output")
oms_addConnection("TrainCrossing.root.Car1.Gate_Angle","TrainCrossing.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainCrossing.root.Car1.Target", "TrainCrossing.root.TrainLight.Intersection_output")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[1]", "TrainCrossing.root.Car1.LengthVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[2]", "TrainCrossing.root.Car1.LengthVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[3]", "TrainCrossing.root.Car1.LengthVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[1]", "TrainCrossing.root.Car1.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[2]", "TrainCrossing.root.Car1.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[3]", "TrainCrossing.root.Car1.DistanceVec[3]")

oms_addConnection("TrainCrossing.root.Car2.LightColor", "TrainCrossing.root.TrainLight.ColorState_output")
oms_addConnection("TrainCrossing.root.Car2.Gate_Angle","TrainCrossing.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainCrossing.root.Car2.Target", "TrainCrossing.root.TrainLight.Intersection_output")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[1]", "TrainCrossing.root.Car2.LengthVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[2]", "TrainCrossing.root.Car2.LengthVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[3]", "TrainCrossing.root.Car2.LengthVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[1]", "TrainCrossing.root.Car2.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[2]", "TrainCrossing.root.Car2.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[3]", "TrainCrossing.root.Car2.DistanceVec[3]")

oms_addConnection("TrainCrossing.root.SensorFailInjector.Sensorfail", "TrainCrossing.root.Sensors.SensorFail")

oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[1]","TrainCrossing.root.CrashMonitor.TrainLengthVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[2]","TrainCrossing.root.CrashMonitor.TrainLengthVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[3]","TrainCrossing.root.CrashMonitor.TrainLengthVec[3]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[1]","TrainCrossing.root.CrashMonitor.TrainDistanceVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[2]","TrainCrossing.root.CrashMonitor.TrainDistanceVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[3]","TrainCrossing.root.CrashMonitor.TrainDistanceVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[1]","TrainCrossing.root.CrashMonitor.CarLengthVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[2]","TrainCrossing.root.CrashMonitor.CarLengthVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[3]","TrainCrossing.root.CrashMonitor.CarLengthVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[1]","TrainCrossing.root.CrashMonitor.CarDistanceVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[2]","TrainCrossing.root.CrashMonitor.CarDistanceVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[3]","TrainCrossing.root.CrashMonitor.CarDistanceVec[3]")

oms_addConnection("TrainCrossing.root.Sensors.Intersection","TrainCrossing.root.CrashMonitor.CarIntersection")
oms_addConnection("TrainCrossing.root.TrainLight.Intersection_output","TrainCrossing.root.CrashMonitor.TrainIntersection")
oms_addConnection("TrainCrossing.root.CrashMonitor.Failure","TrainCrossing.root.TrainLight.Failure_input")

simulationEnd=40.0 
stepsize=0.01 
oms_setResultFile("TrainCrossing", "/Onlab/TrainCrossing/TrainCrossing.mat")
oms_setStopTime("TrainCrossing", simulationEnd) 
oms_setFixedStepSize("TrainCrossing.root",stepsize) 
time=0.0 
critical=false 

--Making the starting parameters 
oms_setReal("TrainCrossing.root.Train0.Length",50)
oms_setReal("TrainCrossing.root.Train0.distanceStart",100)

oms_setReal("TrainCrossing.root.Train1.Length",50)
oms_setReal("TrainCrossing.root.Train1.distanceStart",0)

oms_setReal("TrainCrossing.root.Train2.Length",50)
oms_setReal("TrainCrossing.root.Train2.distanceStart",-2000)

oms_setReal("TrainCrossing.root.Car0.Length",90)
oms_setReal("TrainCrossing.root.Car0.distanceStart",90)
oms_setInteger("TrainCrossing.root.Car0.size",3)

oms_setReal("TrainCrossing.root.Car1.Length",40)
oms_setReal("TrainCrossing.root.Car1.distanceStart",40)
oms_setInteger("TrainCrossing.root.Car1.size",3)

oms_setReal("TrainCrossing.root.Car2.Length",0)
oms_setReal("TrainCrossing.root.Car2.distanceStart",0)
oms_setInteger("TrainCrossing.root.Car2.size",3)

oms_setReal("TrainCrossing.root.TrainLight.Intersection",3.0)
oms_setReal("TrainCrossing.root.Sensors.Sensor1Position",200)
oms_setReal("TrainCrossing.root.Sensors.Sensor2Position",700)
oms_setInteger("TrainCrossing.root.CrashMonitor.carsize",3)
oms_setInteger("TrainCrossing.root.CrashMonitor.trainsize",3)

oms_initialize("TrainCrossing")
oms_setBoolean("TrainCrossing.root.Car0.isClumsy",0)
oms_setBoolean("TrainCrossing.root.Car1.isClumsy",0)
oms_setBoolean("TrainCrossing.root.Car2.isClumsy",1)

tmp=oms_getReal("TrainCrossing.root.Car0.Length")
oms_setReal("TrainCrossing.root.carCollection.lengthVec[1]",tmp)
tmp=oms_getReal("TrainCrossing.root.Car1.Length")
oms_setReal("TrainCrossing.root.carCollection.lengthVec[2]",tmp)
tmp=oms_getReal("TrainCrossing.root.Car2.Length")
oms_setReal("TrainCrossing.root.carCollection.lengthVec[3]",tmp)
tmp=oms_getReal("TrainCrossing.root.Train0.Length")
oms_setReal("TrainCrossing.root.trainCollection.lengthVec[1]",tmp)
tmp=oms_getReal("TrainCrossing.root.Train1.Length")
oms_setReal("TrainCrossing.root.trainCollection.lengthVec[2]",tmp)
tmp=oms_getReal("TrainCrossing.root.Train2.Length")
oms_setReal("TrainCrossing.root.trainCollection.lengthVec[3]",tmp)

function update() 
  tmp=oms_getReal("TrainCrossing.root.Train0.distance")
  oms_setReal("TrainCrossing.root.trainCollection.distanceVec[1]",tmp)
  tmp=oms_getReal("TrainCrossing.root.Train1.distance")
  oms_setReal("TrainCrossing.root.trainCollection.distanceVec[2]",tmp)
  tmp=oms_getReal("TrainCrossing.root.Train2.distance")
  oms_setReal("TrainCrossing.root.trainCollection.distanceVec[3]",tmp)
  tmp=oms_getReal("TrainCrossing.root.Car0.distance")
  oms_setReal("TrainCrossing.root.carCollection.distanceVec[1]",tmp)
  tmp=oms_getReal("TrainCrossing.root.Car1.distance")
  oms_setReal("TrainCrossing.root.carCollection.distanceVec[2]",tmp)
  tmp=oms_getReal("TrainCrossing.root.Car2.distance")
  oms_setReal("TrainCrossing.root.carCollection.distanceVec[3]",tmp)
end 

while(time<simulationEnd)
  do
      update()
      if oms_getBoolean("TrainCrossing.root.TrainIntersectionController.Safe_Passage") then
          if critical==true then
              critical=false
              print("Normal section reached at " ..time)
          end
      else
          if critical==false then
              critical=true
              print("Critical section reached at " ..time)
          end
      end
      if critical==true then
          stepsize=0.001
          oms_setFixedStepSize("TrainCrossing.root",stepsize)
          time=time+stepsize
          oms_stepUntil("TrainCrossing",time)
      else
          stepsize=0.01
          oms_setFixedStepSize("TrainCrossing.root",stepsize)
          time=time+stepsize
          oms_stepUntil("TrainCrossing",time)
      end
end

oms_terminate("TrainCrossing")
oms_delete("TrainCrossing")
