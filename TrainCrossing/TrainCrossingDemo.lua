oms_setTempDirectory("./tmp")
oms_newModel("TrainCrossing")
oms_addSystem("TrainCrossing.root", oms_system_wc)

oms_addSubModel("TrainCrossing.root.Car1", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Car2", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Car3", "/Onlab/TrainCrossing/TrainCrossing.Car/TrainCrossing.Car.fmu")
oms_addSubModel("TrainCrossing.root.Train1", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.Train2", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.Train3", "/Onlab/TrainCrossing/TrainCrossing.Train/TrainCrossing.Train.fmu")
oms_addSubModel("TrainCrossing.root.carCollection", "/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu")
oms_addSubModel("TrainCrossing.root.trainCollection", "/Onlab/TrainCrossing/TrainCrossing.Collection/TrainCrossing.Collection.fmu")
oms_addSubModel("TrainCrossing.root.TrainLight", "/Onlab/TrainCrossing/TrainCrossing.TrainLight/TrainCrossing.TrainLight.fmu")
oms_addSubModel("TrainCrossing.root.Sensors", "/Onlab/TrainCrossing/TrainCrossing.Sensors/TrainCrossing.Sensors.fmu")

oms_instantiate("TrainCrossing")

--Making the connection between variables
oms_addConnection("TrainCrossing.root.Train1.Distance","TrainCrossing.root.trainCollection.Distance1")
oms_addConnection("TrainCrossing.root.Train2.Distance","TrainCrossing.root.trainCollection.Distance2")
oms_addConnection("TrainCrossing.root.Train3.Distance","TrainCrossing.root.trainCollection.Distance3")

oms_addConnection("TrainCrossing.root.Train1.Length","TrainCrossing.root.trainCollection.Length1")
oms_addConnection("TrainCrossing.root.Train2.Length","TrainCrossing.root.trainCollection.Length2")
oms_addConnection("TrainCrossing.root.Train3.Length","TrainCrossing.root.trainCollection.Length3")

oms_addConnection("TrainCrossing.root.Car1.Distance","TrainCrossing.root.carCollection.Distance1")
oms_addConnection("TrainCrossing.root.Car2.Distance","TrainCrossing.root.carCollection.Distance2")
oms_addConnection("TrainCrossing.root.Car3.Distance","TrainCrossing.root.carCollection.Distance3")

oms_addConnection("TrainCrossing.root.Car1.Length","TrainCrossing.root.carCollection.Length1")
oms_addConnection("TrainCrossing.root.Car2.Length","TrainCrossing.root.carCollection.Length2")
oms_addConnection("TrainCrossing.root.Car3.Length","TrainCrossing.root.carCollection.Length3")

oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[1]", "TrainCrossing.root.Sensors.LengthVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[2]", "TrainCrossing.root.Sensors.LengthVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.LengthVec[3]", "TrainCrossing.root.Sensors.LengthVec[3]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[1]", "TrainCrossing.root.Sensors.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[2]", "TrainCrossing.root.Sensors.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.trainCollection.DistanceVec[3]", "TrainCrossing.root.Sensors.DistanceVec[3]")

oms_addConnection("TrainCrossing.root.TrainLight.Safe_Passage", "TrainCrossing.root.Sensors.Safe_Passage")

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

oms_addConnection("TrainCrossing.root.Car3.LightColor", "TrainCrossing.root.TrainLight.ColorState_output")
oms_addConnection("TrainCrossing.root.Car3.Gate_Angle","TrainCrossing.root.TrainLight.Gate_Angle_output")
oms_addConnection("TrainCrossing.root.Car3.Target", "TrainCrossing.root.TrainLight.Intersection_output")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[1]", "TrainCrossing.root.Car3.LengthVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[2]", "TrainCrossing.root.Car3.LengthVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.LengthVec[3]", "TrainCrossing.root.Car3.LengthVec[3]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[1]", "TrainCrossing.root.Car3.DistanceVec[1]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[2]", "TrainCrossing.root.Car3.DistanceVec[2]")
oms_addConnection("TrainCrossing.root.carCollection.DistanceVec[3]", "TrainCrossing.root.Car3.DistanceVec[3]")

simulationEnd=40.0 
stepsize=0.01 
oms_setResultFile("TrainCrossing", "/Onlab/TrainCrossing/TrainCrossing.mat")
oms_setStopTime("TrainCrossing", simulationEnd) 
oms_setFixedStepSize("TrainCrossing.root",stepsize) 
time=0.0 
critical=false
crashed=false
prevcrash=false 

--Making the starting parameters 
oms_setReal("TrainCrossing.root.Train1.length",50)
oms_setReal("TrainCrossing.root.Train1.distanceStart",100)

oms_setReal("TrainCrossing.root.Train2.length",50)
oms_setReal("TrainCrossing.root.Train2.distanceStart",0)

oms_setReal("TrainCrossing.root.Train3.length",50)
oms_setReal("TrainCrossing.root.Train3.distanceStart",-2000)

oms_setReal("TrainCrossing.root.Car1.distanceStart",90)

oms_setReal("TrainCrossing.root.Car2.length",4.74)
oms_setReal("TrainCrossing.root.Car2.distanceStart",40)

oms_setReal("TrainCrossing.root.Car3.length",4.74)
oms_setReal("TrainCrossing.root.Car3.distanceStart",0)
oms_setReal("TrainCrossing.root.Car3.isClumsy",1)

oms_setReal("TrainCrossing.root.TrainLight.Intersection",100)
oms_setReal("TrainCrossing.root.Sensors.Sensor1Position",200)
oms_setReal("TrainCrossing.root.Sensors.Sensor2Position",700)

oms_initialize("TrainCrossing")
function crash()
	trainDanger = false
	carDanger=false
	car = 0
	train = 0
	for i=1,3 do
	 if oms_getReal("TrainCrossing.root.trainCollection.DistanceVec[".. i .."]")>=oms_getReal("TrainCrossing.root.Sensors.Intersection") and 
	 oms_getReal("TrainCrossing.root.trainCollection.DistanceVec[".. i .."]")-oms_getReal("TrainCrossing.root.trainCollection.LengthVec[".. i .."]")<oms_getReal("TrainCrossing.root.Sensors.Intersection") 
	 then 
		trainDanger=true
		train=i
	 end
	end
	for i=1,3 do
	 if oms_getReal("TrainCrossing.root.carCollection.DistanceVec[".. i .."]")>=oms_getReal("TrainCrossing.root.TrainLight.Intersection") and 
	 oms_getReal("TrainCrossing.root.carCollection.DistanceVec[".. i .."]")-oms_getReal("TrainCrossing.root.carCollection.LengthVec[".. i .."]")<oms_getReal("TrainCrossing.root.TrainLight.Intersection") 
	 then 
		carDanger=true
		car=i
	 end
	end
	if trainDanger and carDanger then crashed=true end
	if prevcrash ~= crashed then print("Crash happend at " .. time .. " between train number " .. train .. " and car number " .. car) prevcrash=true end
	
end
happend = false
function fail()
	if time>30.0 then 
		oms_faultInjection("TrainCrossing.root.Sensors.Safe_Passage", oms_fault_type_const, 1.0)
		if not happend then print("Sensor 1 Failed") happend=true end
	end 
end
while(time<simulationEnd)
  do
      crash()
      fail()
      if oms_getInteger("TrainCrossing.root.Sensors.Sensor1Input")==oms_getInteger("TrainCrossing.root.Sensors.Sensor2Output") then
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
