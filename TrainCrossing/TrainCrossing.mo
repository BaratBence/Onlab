package TrainCrossing
  class Car
    Modelica.Blocks.Interfaces.IntegerInput LightColor;
    Modelica.Blocks.Interfaces.RealInput Gate_Angle;
    Modelica.Blocks.Interfaces.RealInput Target;
    Modelica.Blocks.Interfaces.RealVectorInput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorInput DistanceVec[size];
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    TrainLightColor state(start = TrainLightColor.on);
    //real data based on the 2019 Mclaren Senna specs
    parameter Real breakingDeceleration(unit = "m/s2") = 13.14;
    parameter Real maxSpeed(unit = "m/s") = 16.7;
    parameter Real maxAcceleration(unit = "m/s") = 8.76;
    parameter Real length(unit = "m") = 4.74;
    parameter Real distanceStart(unit = "m") = 0.0;
    parameter Real isClumsy(unit = "boolean") =0.0;
    parameter Integer size = 10;
    
    Real BreakingDistance;
    Real distance(start=distanceStart);
    Real speed(start=maxSpeed);
    Real acceleration(start=0.0);
  
  function BreakCheck
    input Integer size;
    input Real ThisCarDistance;
    input Real Target;
    input Real CarDistance[size];
    input Real CarLength[size];
  output Real Distance(start=0.0);
  algorithm
    for i in 1:size loop
      if(CarDistance[i]>ThisCarDistance and CarDistance[i]<=Target) then Distance := Distance + CarLength[i] + 2; end if;
    end for;
   
  end BreakCheck;
  equation
    Length=length;
    Distance=distance;
    Integer(state) = LightColor;
    der(acceleration) = 0.0;
    der(distance) = speed;
    der(speed) = acceleration;
  //distance for the car to stop
    BreakingDistance = 1 / 2 * (speed / breakingDeceleration) ^ 2 * breakingDeceleration +BreakCheck(size,distance,Target,DistanceVec,LengthVec);
  //car can not acceed the speed limit
    when speed >= maxSpeed then
      reinit(acceleration, 0.0);
    end when;
  //car reaches light + its breaking distance and if its speed is not 0 than the car will slow down
    when distance + BreakingDistance +5 >= Target and distance + BreakingDistance -5 <= Target  and speed > 0 and state == TrainLightColor.red then
      reinit(acceleration, -breakingDeceleration);
    end when;
  //the accelerates when the light turn to on
    when distance < Target and state == TrainLightColor.on and Gate_Angle>=90 and speed<maxSpeed then
      reinit(acceleration, maxAcceleration);
    end when;
  //car stop and wait
    when speed <= 0 then
      reinit(acceleration, 0.0);
    end when;
    when(isClumsy>=1.0 and (distance-Length <=Target and distance >= Target and speed>0)) then reinit(acceleration,-50);end when;
  end Car;

  class Train
    Modelica.Blocks.Interfaces.RealOutput Distance;
    Modelica.Blocks.Interfaces.RealOutput Length;
    //maximal speed that the train can maintain
    parameter Real maxSpeed(unit = "m/s") = 70;
    //length of the train
    parameter Real length(unit = "m")=50;
    //train enters the road traintracks intersection
    parameter Real distanceStart(unit="m") = 0;
    Real distance(start=distanceStart);
    Real speed(unit = "m");
  equation
    Length=length;
    Distance=distance;
    speed = maxSpeed;
    der(distance) = speed;
  end Train;

  class TrainLight 
    Modelica.Blocks.Interfaces.RealInput Safe_Passage;
    Modelica.Blocks.Interfaces.IntegerOutput ColorState_output;
    Modelica.Blocks.Interfaces.RealOutput Gate_Angle_output;
    Modelica.Blocks.Interfaces.RealOutput Intersection_output;
    
    //statechart of the trainlamp
    inner Modelica.StateGraph.StateGraphRoot stateGraphRoot;
    Modelica.StateGraph.InitialStep On(nOut=2,nIn=2);
    Modelica.StateGraph.Step Red(nOut=2);
    Modelica.StateGraph.Step Off(nIn=2);
    Modelica.StateGraph.Transition OnToRed(condition = Safe_Passage < 0.9);
    Modelica.StateGraph.Transition OnToOff(condition = Failure);
    Modelica.StateGraph.Transition OffToOn(condition = not Failure);
    Modelica.StateGraph.Transition RedToOn(condition = Safe_Passage >= 0.9);
    Modelica.StateGraph.Transition RedToOff(condition= Failure);
    
    TrainLightColor state(start = TrainLightColor.on);
    
    parameter Real Intersection(unit = "m") = 50;
    Real Gate_Angle(start=90.0);
    Real Gate_Rotation(start=0.0);  
    parameter Boolean Failure =false;
  equation
    Intersection_output=Intersection;
    der(Gate_Rotation)=0.0;
    der(Gate_Angle)=Gate_Rotation;
    Gate_Angle_output = Gate_Angle;
    ColorState_output = Integer(state);
    
    if Red.active then state = TrainLightColor.red;
    elseif (On.active) then state = TrainLightColor.on;
    else state = TrainLightColor.off;
    end if;
    
    //trainlight state transitions
    connect(On.outPort[1], OnToRed.inPort);
    connect(OnToRed.outPort, Red.inPort[1]);
    connect(Red.outPort[1], RedToOn.inPort);
    connect(RedToOn.outPort, On.inPort[1]);
    connect(On.outPort[2], OnToOff.inPort);
    connect(OnToOff.outPort, Off.inPort[1]);
    connect(Off.outPort[1], OffToOn.inPort);
    connect(OffToOn.outPort, On.inPort[2]);
    connect(Red.outPort[2], RedToOff.inPort);
    connect(RedToOff.outPort, Off.inPort[2]);
    
    //Rail intersections gate controlls
    when(Red.active) then reinit(Gate_Rotation,-50); end when;
    when(Gate_Angle<=0) then reinit(Gate_Rotation,0.0); end when;
    when(On.active or Off.active) then reinit(Gate_Rotation,50); end when;
    when(Gate_Angle>=90) then reinit(Gate_Rotation, 0.0); end when;
  end TrainLight;

  type TrainLightColor = enumeration(on, red, off);

  model TrainIntersection
    Train train(length=50, distanceStart=100);
    Train train1(length=50);
    Train train2(length=50, distanceStart=-2000);
    Car car(distanceStart=90,size=3);
    Car car1(distanceStart=40, size=3);
    Car car2(isClumsy=1, size=3);
    
    Collection trainCollection(size=3);
    Collection carCollection(size=3);
    TrainLight trainlight(Intersection=100);
    Sensors sensors(Sensor1Position=200 ,Sensor2Position=700, size=3);
    
  equation  
    connect(trainCollection.LengthVec,sensors.LengthVec);
    connect(trainCollection.DistanceVec,sensors.DistanceVec);
    
    
    connect(trainlight.Safe_Passage,sensors.Safe_Passage);
    
    connect(car.LightColor, trainlight.ColorState_output);
    connect(car.Gate_Angle, trainlight.Gate_Angle_output);
    connect(car.Target, trainlight.Intersection_output);
    connect(carCollection.LengthVec, car.LengthVec);
    connect(carCollection.DistanceVec, car.DistanceVec);
    
    connect(car1.LightColor, trainlight.ColorState_output);
    connect(car1.Gate_Angle, trainlight.Gate_Angle_output);
    connect(car1.Target, trainlight.Intersection_output);
    connect(carCollection.LengthVec, car1.LengthVec);
    connect(carCollection.DistanceVec, car1.DistanceVec);
   
    connect(car2.LightColor, trainlight.ColorState_output);
    connect(car2.Gate_Angle, trainlight.Gate_Angle_output);
    connect(car2.Target, trainlight.Intersection_output);
    connect(carCollection.LengthVec, car2.LengthVec);
    connect(carCollection.DistanceVec, car2.DistanceVec);
   
    connect(car.Distance,carCollection.Distance1);
    connect(car1.Distance,carCollection.Distance2);
    connect(car2.Distance,carCollection.Distance3);
    connect(car.Length,carCollection.Length1);
    connect(car1.Length,carCollection.Length2);  
    connect(car2.Length,carCollection.Length3);
    
    connect(train.Distance,trainCollection.Distance1);
    connect(train1.Distance,trainCollection.Distance2);
    connect(train2.Distance,trainCollection.Distance3);
    connect(train.Length,trainCollection.Length1);
    connect(train1.Length,trainCollection.Length2);
    connect(train2.Length,trainCollection.Length3);
    
  end TrainIntersection;

  class Sensors
    Modelica.Blocks.Interfaces.RealVectorInput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorInput DistanceVec[size];
    Modelica.Blocks.Interfaces.RealOutput Intersection;
    Modelica.Blocks.Interfaces.RealOutput Safe_Passage;
    parameter Real Sensor1Position(unit ="m") = 100;
    parameter Real Sensor2Position(unit= "m") = 500;
    Boolean Train_Detected1[size];
    Boolean Train_Detected2[size];
    parameter Integer size = 10;
    Boolean Sensor1_Active;
    Boolean Sensor2_Active;
    
    Integer Sensor1Input(start=0);
    Integer Sensor2Output(start=0);
  function Active
    input Integer size;
    input Boolean Train_Detected[size];
    output Boolean Activated(start=false);
  algorithm
    for i in 1:size loop
      Activated := Train_Detected[i] or Activated;
    end for;
   
  end Active;
  
  equation
    Intersection=(Sensor1Position+Sensor2Position)/2; 
    for i in 1:size loop
      if (DistanceVec[i] >= Sensor1Position  and DistanceVec[i] - LengthVec[i] <= Sensor1Position + 1) then
        Train_Detected1[i] = true;
      else
        Train_Detected1[i] = false;
      end if;
  
       if (DistanceVec[i] >= Sensor2Position + 1   and DistanceVec[i] - LengthVec[i] <= Sensor2Position) then
        Train_Detected2[i] = true;
      else
        Train_Detected2[i] = false;
      end if;
    end for;
    Sensor1_Active = Active(size , Train_Detected1);
    Sensor2_Active = Active(size , Train_Detected2);
    
    when(Sensor1_Active and not pre(Sensor1_Active)) then Sensor1Input = pre(Sensor1Input) +1; end when;
    when((change(Sensor2_Active)) and (not Sensor2_Active and pre(Sensor2_Active))) then Sensor2Output=pre(Sensor2Output) +1 ; end when; 
    
    if(Sensor1Input == Sensor2Output) then Safe_Passage=1.0;
    else Safe_Passage=0.0; end if;
  end Sensors;

  class Collection
    Modelica.Blocks.Interfaces.RealInput Distance1;
    Modelica.Blocks.Interfaces.RealInput Distance2;
    Modelica.Blocks.Interfaces.RealInput Distance3; 
    Modelica.Blocks.Interfaces.RealInput Distance4;
    Modelica.Blocks.Interfaces.RealInput Distance5;
    Modelica.Blocks.Interfaces.RealInput Distance6;
    Modelica.Blocks.Interfaces.RealInput Distance7;
    Modelica.Blocks.Interfaces.RealInput Distance8;
    Modelica.Blocks.Interfaces.RealInput Distance9;
    Modelica.Blocks.Interfaces.RealInput Distance10;
    
    Modelica.Blocks.Interfaces.RealInput Length1;
    Modelica.Blocks.Interfaces.RealInput Length2;
    Modelica.Blocks.Interfaces.RealInput Length3;
    Modelica.Blocks.Interfaces.RealInput Length4;
    Modelica.Blocks.Interfaces.RealInput Length5;
    Modelica.Blocks.Interfaces.RealInput Length6;
    Modelica.Blocks.Interfaces.RealInput Length7;
    Modelica.Blocks.Interfaces.RealInput Length8;
    Modelica.Blocks.Interfaces.RealInput Length9;  
    Modelica.Blocks.Interfaces.RealInput Length10;
    
    Modelica.Blocks.Interfaces.RealVectorOutput LengthVec[size];
    Modelica.Blocks.Interfaces.RealVectorOutput DistanceVec[size];
    parameter Integer size =10;
    Real lengthVec[size] = { Length1,Length2,Length3,Length4,Length5,Length6,Length7,Length8,Length9,Length10};
    Real distanceVec[size]= { Distance1,Distance2,Distance3,Distance4,Distance5,Distance6,Distance7,Distance8,Distance9,Distance10};
  equation
    LengthVec=lengthVec;
    DistanceVec=distanceVec;
    
  end Collection;
  annotation(
    uses(Modelica(version = "3.2.3")));
end TrainCrossing;
