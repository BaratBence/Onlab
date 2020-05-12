/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_TrainIntersection_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_TrainIntersection_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 130
type: SIMPLE_ASSIGN
sensors.Train_Detected2[3] = train2.distance >= sensors.Sensor2Position + 1.0 and train2.distance - train2.Length <= sensors.Sensor2Position
*/
void TrainCrossing_TrainIntersection_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, 35, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, 36, LessEq);
  data->localData[0]->booleanVars[30] /* sensors.Train_Detected2[3] DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
sensors.Train_Detected1[3] = train2.distance >= sensors.Sensor1Position and train2.distance - train2.Length <= sensors.Sensor1Position + 1.0
*/
void TrainCrossing_TrainIntersection_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, 33, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, 34, LessEq);
  data->localData[0]->booleanVars[27] /* sensors.Train_Detected1[3] DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
sensors.Train_Detected2[2] = train1.distance >= sensors.Sensor2Position + 1.0 and train1.distance - train1.Length <= sensors.Sensor2Position
*/
void TrainCrossing_TrainIntersection_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, 31, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, 32, LessEq);
  data->localData[0]->booleanVars[29] /* sensors.Train_Detected2[2] DISCRETE */ = (tmp4 && tmp5);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
sensors.Train_Detected1[2] = train1.distance >= sensors.Sensor1Position and train1.distance - train1.Length <= sensors.Sensor1Position + 1.0
*/
void TrainCrossing_TrainIntersection_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, 29, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, 30, LessEq);
  data->localData[0]->booleanVars[26] /* sensors.Train_Detected1[2] DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
sensors.Train_Detected2[1] = train.distance >= sensors.Sensor2Position + 1.0 and train.distance - train.Length <= sensors.Sensor2Position
*/
void TrainCrossing_TrainIntersection_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, 27, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, 28, LessEq);
  data->localData[0]->booleanVars[28] /* sensors.Train_Detected2[1] DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
tic.Sensor2_Active = TrainCrossing.TrainIntersection.sensors.Active(3, sensors.Train_Detected2)
*/
void TrainCrossing_TrainIntersection_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  boolean_array tmp10;
  boolean_array_create(&tmp10, ((modelica_boolean*)&((&data->localData[0]->booleanVars[28] /* sensors.Train_Detected2[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */ = omc_TrainCrossing_TrainIntersection_sensors_Active(threadData, ((modelica_integer) 3), tmp10);
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
$whenCondition2 = tic.Sensor2_Active <> pre(tic.Sensor2_Active) and not tic.Sensor2_Active and pre(tic.Sensor2_Active)
*/
void TrainCrossing_TrainIntersection_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->booleanVars[17] /* $whenCondition2 DISCRETE */ = (((!data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */)) && ((!data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */) && data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */));
  TRACE_POP
}
/*
equation index: 137
type: WHEN

when {$whenCondition2} then
  tic.Sensor2Output = 1 + pre(tic.Sensor2Output);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  if((data->localData[0]->booleanVars[17] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[17] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[5] /* tic.Sensor2Output DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[5] /* tic.Sensor2Output DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
sensors.Train_Detected1[1] = train.distance >= sensors.Sensor1Position and train.distance - train.Length <= sensors.Sensor1Position + 1.0
*/
void TrainCrossing_TrainIntersection_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, 25, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, 26, LessEq);
  data->localData[0]->booleanVars[25] /* sensors.Train_Detected1[1] DISCRETE */ = (tmp12 && tmp13);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
tic.Sensor1_Active = TrainCrossing.TrainIntersection.sensors.Active(3, sensors.Train_Detected1)
*/
void TrainCrossing_TrainIntersection_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  boolean_array tmp14;
  boolean_array_create(&tmp14, ((modelica_boolean*)&((&data->localData[0]->booleanVars[25] /* sensors.Train_Detected1[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[31] /* tic.Sensor1_Active DISCRETE */ = omc_TrainCrossing_TrainIntersection_sensors_Active(threadData, ((modelica_integer) 3), tmp14);
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
$whenCondition1 = tic.Sensor1_Active and not pre(tic.Sensor1_Active)
*/
void TrainCrossing_TrainIntersection_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[31] /* tic.Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[31] /* tic.Sensor1_Active DISCRETE */));
  TRACE_POP
}
/*
equation index: 141
type: WHEN

when {$whenCondition1} then
  tic.Sensor1Input = 1 + pre(tic.Sensor1Input);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  if((data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[6] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[4] /* tic.Sensor1Input DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[4] /* tic.Sensor1Input DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
trainlight.RedToOn.condition = tic.Sensor1Input == tic.Sensor2Output
*/
void TrainCrossing_TrainIntersection_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->booleanVars[53] /* trainlight.RedToOn.condition DISCRETE */ = (data->localData[0]->integerVars[4] /* tic.Sensor1Input DISCRETE */ == data->localData[0]->integerVars[5] /* tic.Sensor2Output DISCRETE */);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
$DER.trainlight.Gate_Angle = trainlight.Gate_Rotation
*/
void TrainCrossing_TrainIntersection_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[26] /* der(trainlight.Gate_Angle) STATE_DER */ = data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */;
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
$DER.trainlight.Gate_Rotation = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[27] /* der(trainlight.Gate_Rotation) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
trainlight.Off.active = pre(trainlight.Off.newActive)
*/
void TrainCrossing_TrainIntersection_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */ = data->simulationInfo->booleanVarsPre[36] /* trainlight.Off.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
trainlight.Off.outerStatePort.subgraphStatePort.activeSteps = if trainlight.Off.active then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[35] /* trainlight.Off.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 147
type: WHEN

when {} then
  trainlight.Off.oldActive = trainlight.Off.active;
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  if(0)
  {
    data->localData[0]->booleanVars[37] /* trainlight.Off.oldActive DISCRETE */ = data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
trainlight.Off.localActive = trainlight.Off.active
*/
void TrainCrossing_TrainIntersection_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */ = data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */;
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
$whenCondition16 = pre(trainlight.Red.newActive)
*/
void TrainCrossing_TrainIntersection_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */ = data->simulationInfo->booleanVarsPre[49] /* trainlight.Red.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
trainlight.Red.outerStatePort.subgraphStatePort.activeSteps = if $whenCondition16 then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[46] /* trainlight.Red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 151
type: WHEN

when {} then
  trainlight.Red.oldActive = $whenCondition16;
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  if(0)
  {
    data->localData[0]->booleanVars[50] /* trainlight.Red.oldActive DISCRETE */ = data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
trainlight.Red.localActive = $whenCondition16
*/
void TrainCrossing_TrainIntersection_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */ = data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */;
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
trainlight.Red.active = $whenCondition16
*/
void TrainCrossing_TrainIntersection_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->booleanVars[47] /* trainlight.Red.active DISCRETE */ = data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */;
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
trainlight.On.active = pre(trainlight.On.newActive)
*/
void TrainCrossing_TrainIntersection_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ = data->simulationInfo->booleanVarsPre[42] /* trainlight.On.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
trainlight.On.outerStatePort.subgraphStatePort.activeSteps = if trainlight.On.active then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[39] /* trainlight.On.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.subgraphStatePort.activeSteps = (-trainlight.Off.outerStatePort.subgraphStatePort.activeSteps) - trainlight.Red.outerStatePort.subgraphStatePort.activeSteps - trainlight.On.outerStatePort.subgraphStatePort.activeSteps
*/
void TrainCrossing_TrainIntersection_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[53] /* trainlight.stateGraphRoot.subgraphStatePort.activeSteps variable */ = (-data->localData[0]->realVars[35] /* trainlight.Off.outerStatePort.subgraphStatePort.activeSteps variable */) - data->localData[0]->realVars[46] /* trainlight.Red.outerStatePort.subgraphStatePort.activeSteps variable */ - data->localData[0]->realVars[39] /* trainlight.On.outerStatePort.subgraphStatePort.activeSteps variable */;
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.activeSteps = -integer(trainlight.stateGraphRoot.subgraphStatePort.activeSteps, 0)
*/
void TrainCrossing_TrainIntersection_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->integerVars[7] /* trainlight.stateGraphRoot.activeSteps DISCRETE */ = (-(_event_integer(data->localData[0]->realVars[53] /* trainlight.stateGraphRoot.subgraphStatePort.activeSteps variable */, ((modelica_integer) 0), data)));
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
$whenCondition18 = trainlight.On.active or trainlight.Off.active
*/
void TrainCrossing_TrainIntersection_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->booleanVars[15] /* $whenCondition18 DISCRETE */ = (data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ || data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
trainlight.state = if $whenCondition16 then TrainCrossing.TrainLightColor.red else if trainlight.On.active then TrainCrossing.TrainLightColor.on else TrainCrossing.TrainLightColor.off
*/
void TrainCrossing_TrainIntersection_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */ = (data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */?2:(data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */?1:3));
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
car2.LightColor = Integer(trainlight.state)
*/
void TrainCrossing_TrainIntersection_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->integerVars[2] /* car2.LightColor DISCRETE */ = ((modelica_integer)(data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */));
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
car2.state = (*TrainCrossing.TrainLightColor*)(car2.LightColor)
*/
void TrainCrossing_TrainIntersection_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->integerVars[3] /* car2.state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[2] /* car2.LightColor DISCRETE */);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
$whenCondition13 = car2.distance < trainlight.Intersection and car2.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car2.speed < car2.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  modelica_boolean tmp16;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 13, Less);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, 14, Less);
  data->localData[0]->booleanVars[10] /* $whenCondition13 DISCRETE */ = (((tmp16 && (data->localData[0]->integerVars[3] /* car2.state DISCRETE */ == 1)) && tmp18) && tmp19);
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
car1.state = (*TrainCrossing.TrainLightColor*)(car2.LightColor)
*/
void TrainCrossing_TrainIntersection_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->integerVars[1] /* car1.state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[2] /* car2.LightColor DISCRETE */);
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
$whenCondition9 = car1.distance < trainlight.Intersection and car1.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car1.speed < car1.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_boolean tmp20;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 18, Less);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, 19, Less);
  data->localData[0]->booleanVars[24] /* $whenCondition9 DISCRETE */ = (((tmp20 && (data->localData[0]->integerVars[1] /* car1.state DISCRETE */ == 1)) && tmp22) && tmp23);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
car.state = (*TrainCrossing.TrainLightColor*)(car2.LightColor)
*/
void TrainCrossing_TrainIntersection_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->integerVars[0] /* car.state DISCRETE */ = ((modelica_integer)data->localData[0]->integerVars[2] /* car2.LightColor DISCRETE */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
$whenCondition5 = car.distance < trainlight.Intersection and car.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car.speed < car.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp24;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 23, Less);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, 24, Less);
  data->localData[0]->booleanVars[20] /* $whenCondition5 DISCRETE */ = (((tmp24 && (data->localData[0]->integerVars[0] /* car.state DISCRETE */ == 1)) && tmp26) && tmp27);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
trainlight.RedToOn.enableFire = trainlight.RedToOn.condition and $whenCondition16 and not trainlight.On.active
*/
void TrainCrossing_TrainIntersection_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[53] /* trainlight.RedToOn.condition DISCRETE */ && data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */) && (!data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
trainlight.Red.outPort[2].available = $whenCondition16 and not trainlight.RedToOn.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->booleanVars[51] /* trainlight.Red.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */ && (!data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
trainlight.On.inPort[2].occupied = trainlight.On.active or trainlight.RedToOn.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->booleanVars[40] /* trainlight.On.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ || data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
trainlight.OffToOn.enableFire = not trainlight.Failure and trainlight.Off.active and not trainlight.On.inPort[2].occupied
*/
void TrainCrossing_TrainIntersection_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */ = (((!data->simulationInfo->booleanParameter[4] /* trainlight.Failure PARAM */) && data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */) && (!data->localData[0]->booleanVars[40] /* trainlight.On.inPort[2].occupied DISCRETE */));
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
$cse2 = Modelica.StateGraph.Temporary.anyTrue({trainlight.OffToOn.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  boolean_array tmp28;
  array_alloc_scalar_boolean_array(&tmp28, 1, (modelica_boolean)data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp28);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
$cse5 = Modelica.StateGraph.Temporary.anyTrue({trainlight.RedToOn.enableFire, trainlight.OffToOn.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  boolean_array tmp29;
  array_alloc_scalar_boolean_array(&tmp29, 2, (modelica_boolean)data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[4] /* $cse5 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp29);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
trainlight.OnToRed.enableFire = not trainlight.RedToOn.condition and trainlight.On.active and not $whenCondition16
*/
void TrainCrossing_TrainIntersection_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */ = (((!data->localData[0]->booleanVars[53] /* trainlight.RedToOn.condition DISCRETE */) && data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */) && (!data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */));
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
$cse3 = Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToRed.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  boolean_array tmp30;
  array_alloc_scalar_boolean_array(&tmp30, 1, (modelica_boolean)data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */);
  data->localData[0]->booleanVars[2] /* $cse3 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp30);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
trainlight.On.outPort[2].available = trainlight.On.active and not trainlight.OnToRed.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->booleanVars[44] /* trainlight.On.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ && (!data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */));
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
trainlight.OnToOff.enableFire = trainlight.Failure and trainlight.On.outPort[2].available and not trainlight.Off.active
*/
void TrainCrossing_TrainIntersection_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[4] /* trainlight.Failure PARAM */ && data->localData[0]->booleanVars[44] /* trainlight.On.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
trainlight.Off.inPort[2].occupied = trainlight.Off.active or trainlight.OnToOff.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->booleanVars[34] /* trainlight.Off.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */ || data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
trainlight.RedToOff.enableFire = trainlight.Failure and trainlight.Red.outPort[2].available and not trainlight.Off.inPort[2].occupied
*/
void TrainCrossing_TrainIntersection_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->booleanVars[52] /* trainlight.RedToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[4] /* trainlight.Failure PARAM */ && data->localData[0]->booleanVars[51] /* trainlight.Red.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[34] /* trainlight.Off.inPort[2].occupied DISCRETE */));
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
$cse4 = Modelica.StateGraph.Temporary.anyTrue({trainlight.RedToOn.enableFire, trainlight.RedToOff.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  boolean_array tmp31;
  array_alloc_scalar_boolean_array(&tmp31, 2, (modelica_boolean)data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[52] /* trainlight.RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[3] /* $cse4 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp31);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
trainlight.Red.newActive = $cse3 or $whenCondition16 and not $cse4
*/
void TrainCrossing_TrainIntersection_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->booleanVars[49] /* trainlight.Red.newActive DISCRETE */ = (data->localData[0]->booleanVars[2] /* $cse3 DISCRETE */ || (data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */ && (!data->localData[0]->booleanVars[3] /* $cse4 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
$cse1 = Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToOff.enableFire, trainlight.RedToOff.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  boolean_array tmp32;
  array_alloc_scalar_boolean_array(&tmp32, 2, (modelica_boolean)data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[52] /* trainlight.RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp32);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
trainlight.Off.newActive = $cse1 or trainlight.Off.active and not $cse2
*/
void TrainCrossing_TrainIntersection_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->booleanVars[36] /* trainlight.Off.newActive DISCRETE */ = (data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ || (data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */ && (!data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
$cse6 = Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToRed.enableFire, trainlight.OnToOff.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  boolean_array tmp33;
  array_alloc_scalar_boolean_array(&tmp33, 2, (modelica_boolean)data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[5] /* $cse6 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp33);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
trainlight.On.newActive = $cse5 or trainlight.On.active and not $cse6
*/
void TrainCrossing_TrainIntersection_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->booleanVars[42] /* trainlight.On.newActive DISCRETE */ = (data->localData[0]->booleanVars[4] /* $cse5 DISCRETE */ || (data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ && (!data->localData[0]->booleanVars[5] /* $cse6 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 185
type: WHEN

when {} then
  trainlight.On.oldActive = trainlight.On.active;
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  if(0)
  {
    data->localData[0]->booleanVars[43] /* trainlight.On.oldActive DISCRETE */ = data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
trainlight.On.localActive = trainlight.On.active
*/
void TrainCrossing_TrainIntersection_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */ = data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */;
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
$DER.car2.speed = car2.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[22] /* der(car2.speed) STATE_DER */ = data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
$DER.car2.distance = car2.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[21] /* der(car2.distance) STATE_DER */ = data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */;
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
$DER.car2.acceleration = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[20] /* der(car2.acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
$DER.car1.speed = car1.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[19] /* der(car1.speed) STATE_DER */ = data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
$DER.car1.distance = car1.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[18] /* der(car1.distance) STATE_DER */ = data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */;
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
$DER.car1.acceleration = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[17] /* der(car1.acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
$DER.car.speed = car.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[16] /* der(car.speed) STATE_DER */ = data->localData[0]->realVars[0] /* car.acceleration STATE(1) */;
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
$DER.car.distance = car.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[15] /* der(car.distance) STATE_DER */ = data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */;
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
$DER.car.acceleration = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[14] /* der(car.acceleration) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
$DER.train2.distance = train2.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[25] /* der(train2.distance) STATE_DER */ = data->simulationInfo->realParameter[25] /* train2.maxSpeed PARAM */;
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
$DER.train1.distance = train1.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[24] /* der(train1.distance) STATE_DER */ = data->simulationInfo->realParameter[22] /* train1.maxSpeed PARAM */;
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
$DER.train.distance = train.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[23] /* der(train.distance) STATE_DER */ = data->simulationInfo->realParameter[19] /* train.maxSpeed PARAM */;
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
$whenCondition3 = car.speed >= car.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp34;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, 9, GreaterEq);
  data->localData[0]->booleanVars[18] /* $whenCondition3 DISCRETE */ = tmp34;
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
$whenCondition6 = car.speed <= 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp35, data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, 8, LessEq);
  data->localData[0]->booleanVars[21] /* $whenCondition6 DISCRETE */ = tmp35;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
$whenCondition7 = car1.speed >= car1.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp36;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, 7, GreaterEq);
  data->localData[0]->booleanVars[22] /* $whenCondition7 DISCRETE */ = tmp36;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
$whenCondition10 = car1.speed <= 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp37, data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, 6, LessEq);
  data->localData[0]->booleanVars[7] /* $whenCondition10 DISCRETE */ = tmp37;
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
$whenCondition11 = car2.speed >= car2.maxSpeed
*/
void TrainCrossing_TrainIntersection_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  modelica_boolean tmp38;
  RELATIONHYSTERESIS(tmp38, data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, 5, GreaterEq);
  data->localData[0]->booleanVars[8] /* $whenCondition11 DISCRETE */ = tmp38;
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
$whenCondition14 = car2.speed <= 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp39;
  RELATIONHYSTERESIS(tmp39, data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, 4, LessEq);
  data->localData[0]->booleanVars[11] /* $whenCondition14 DISCRETE */ = tmp39;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
$whenCondition15 = car2.distance - car2.Length <= trainlight.Intersection and car2.distance >= trainlight.Intersection
*/
void TrainCrossing_TrainIntersection_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  RELATIONHYSTERESIS(tmp40, data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ - data->simulationInfo->realParameter[10] /* car2.Length PARAM */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 2, LessEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 3, GreaterEq);
  data->localData[0]->booleanVars[12] /* $whenCondition15 DISCRETE */ = (tmp40 && tmp41);
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
$whenCondition17 = trainlight.Gate_Angle <= 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp42;
  RELATIONHYSTERESIS(tmp42, data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 0.0, 1, LessEq);
  data->localData[0]->booleanVars[14] /* $whenCondition17 DISCRETE */ = tmp42;
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
$whenCondition19 = trainlight.Gate_Angle >= 90.0
*/
void TrainCrossing_TrainIntersection_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, 0, GreaterEq);
  data->localData[0]->booleanVars[16] /* $whenCondition19 DISCRETE */ = tmp43;
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
$cse9 = TrainCrossing.TrainIntersection.car.BreakCheck(3, car.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  real_array tmp44;
  real_array tmp45;
  array_alloc_scalar_real_array(&tmp44, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp45, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[30] /* $cse9 variable */ = omc_TrainCrossing_TrainIntersection_car_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp44, tmp45);
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
car.BreakingDistance = 0.5 * (car.speed / car.breakingDeceleration) ^ 2.0 * car.breakingDeceleration + $cse9
*/
void TrainCrossing_TrainIntersection_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  modelica_real tmp46;
  tmp46 = DIVISION_SIM(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */,data->simulationInfo->realParameter[1] /* car.breakingDeceleration PARAM */,"car.breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[31] /* car.BreakingDistance variable */ = (0.5) * (((tmp46 * tmp46)) * (data->simulationInfo->realParameter[1] /* car.breakingDeceleration PARAM */)) + data->localData[0]->realVars[30] /* $cse9 variable */;
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
$whenCondition4 = car.distance + car.BreakingDistance + 5.0 >= trainlight.Intersection and car.distance + car.BreakingDistance - 5.0 <= trainlight.Intersection and car.speed > 0.0 and car.state == TrainCrossing.TrainLightColor.red
*/
void TrainCrossing_TrainIntersection_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 21, LessEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, 22, Greater);
  data->localData[0]->booleanVars[19] /* $whenCondition4 DISCRETE */ = (((tmp47 && tmp48) && tmp49) && (data->localData[0]->integerVars[0] /* car.state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
$cse8 = TrainCrossing.TrainIntersection.car1.BreakCheck(3, car1.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  real_array tmp51;
  real_array tmp52;
  array_alloc_scalar_real_array(&tmp51, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp52, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[29] /* $cse8 variable */ = omc_TrainCrossing_TrainIntersection_car1_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp51, tmp52);
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
car1.BreakingDistance = 0.5 * (car1.speed / car1.breakingDeceleration) ^ 2.0 * car1.breakingDeceleration + $cse8
*/
void TrainCrossing_TrainIntersection_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  modelica_real tmp53;
  tmp53 = DIVISION_SIM(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */,data->simulationInfo->realParameter[6] /* car1.breakingDeceleration PARAM */,"car1.breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ = (0.5) * (((tmp53 * tmp53)) * (data->simulationInfo->realParameter[6] /* car1.breakingDeceleration PARAM */)) + data->localData[0]->realVars[29] /* $cse8 variable */;
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
$whenCondition8 = car1.distance + car1.BreakingDistance + 5.0 >= trainlight.Intersection and car1.distance + car1.BreakingDistance - 5.0 <= trainlight.Intersection and car1.speed > 0.0 and car1.state == TrainCrossing.TrainLightColor.red
*/
void TrainCrossing_TrainIntersection_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 15, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 16, LessEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, 17, Greater);
  data->localData[0]->booleanVars[23] /* $whenCondition8 DISCRETE */ = (((tmp54 && tmp55) && tmp56) && (data->localData[0]->integerVars[1] /* car1.state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
$cse7 = TrainCrossing.TrainIntersection.car2.BreakCheck(3, car2.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  real_array tmp58;
  real_array tmp59;
  array_alloc_scalar_real_array(&tmp58, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp59, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[28] /* $cse7 variable */ = omc_TrainCrossing_TrainIntersection_car2_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp58, tmp59);
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
car2.BreakingDistance = 0.5 * (car2.speed / car2.breakingDeceleration) ^ 2.0 * car2.breakingDeceleration + $cse7
*/
void TrainCrossing_TrainIntersection_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  modelica_real tmp60;
  tmp60 = DIVISION_SIM(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */,data->simulationInfo->realParameter[11] /* car2.breakingDeceleration PARAM */,"car2.breakingDeceleration",equationIndexes);
  data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ = (0.5) * (((tmp60 * tmp60)) * (data->simulationInfo->realParameter[11] /* car2.breakingDeceleration PARAM */)) + data->localData[0]->realVars[28] /* $cse7 variable */;
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
$whenCondition12 = car2.distance + car2.BreakingDistance + 5.0 >= trainlight.Intersection and car2.distance + car2.BreakingDistance - 5.0 <= trainlight.Intersection and car2.speed > 0.0 and car2.state == TrainCrossing.TrainLightColor.red
*/
void TrainCrossing_TrainIntersection_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, 11, LessEq);
  RELATIONHYSTERESIS(tmp63, data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, 12, Greater);
  data->localData[0]->booleanVars[9] /* $whenCondition12 DISCRETE */ = (((tmp61 && tmp62) && tmp63) && (data->localData[0]->integerVars[3] /* car2.state DISCRETE */ == 2));
  TRACE_POP
}
/*
equation index: 233
type: WHEN

when {$whenCondition3} then
  reinit(car.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  if((data->localData[0]->booleanVars[18] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[18] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* car.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car.acceleration = %g", data->localData[0]->realVars[0] /* car.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 232
type: WHEN

when {$whenCondition4} then
  reinit(car.acceleration,  -car.breakingDeceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  if((data->localData[0]->booleanVars[19] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[19] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* car.acceleration STATE(1) */ = (-data->simulationInfo->realParameter[1] /* car.breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit car.acceleration = %g", data->localData[0]->realVars[0] /* car.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 231
type: WHEN

when {$whenCondition5} then
  reinit(car.acceleration,  car.maxAcceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  if((data->localData[0]->booleanVars[20] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[20] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* car.acceleration STATE(1) */ = data->simulationInfo->realParameter[3] /* car.maxAcceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car.acceleration = %g", data->localData[0]->realVars[0] /* car.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 230
type: WHEN

when {$whenCondition6} then
  reinit(car.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  if((data->localData[0]->booleanVars[21] /* $whenCondition6 DISCRETE */ && !data->simulationInfo->booleanVarsPre[21] /* $whenCondition6 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[0] /* car.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car.acceleration = %g", data->localData[0]->realVars[0] /* car.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 229
type: WHEN

when {$whenCondition7} then
  reinit(car1.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  if((data->localData[0]->booleanVars[22] /* $whenCondition7 DISCRETE */ && !data->simulationInfo->booleanVarsPre[22] /* $whenCondition7 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car1.acceleration = %g", data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 228
type: WHEN

when {$whenCondition8} then
  reinit(car1.acceleration,  -car1.breakingDeceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  if((data->localData[0]->booleanVars[23] /* $whenCondition8 DISCRETE */ && !data->simulationInfo->booleanVarsPre[23] /* $whenCondition8 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */ = (-data->simulationInfo->realParameter[6] /* car1.breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit car1.acceleration = %g", data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 227
type: WHEN

when {$whenCondition9} then
  reinit(car1.acceleration,  car1.maxAcceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  if((data->localData[0]->booleanVars[24] /* $whenCondition9 DISCRETE */ && !data->simulationInfo->booleanVarsPre[24] /* $whenCondition9 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */ = data->simulationInfo->realParameter[8] /* car1.maxAcceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car1.acceleration = %g", data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 226
type: WHEN

when {$whenCondition10} then
  reinit(car1.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  if((data->localData[0]->booleanVars[7] /* $whenCondition10 DISCRETE */ && !data->simulationInfo->booleanVarsPre[7] /* $whenCondition10 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car1.acceleration = %g", data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 225
type: WHEN

when {$whenCondition11} then
  reinit(car2.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  if((data->localData[0]->booleanVars[8] /* $whenCondition11 DISCRETE */ && !data->simulationInfo->booleanVarsPre[8] /* $whenCondition11 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car2.acceleration = %g", data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 224
type: WHEN

when {$whenCondition12} then
  reinit(car2.acceleration,  -car2.breakingDeceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  if((data->localData[0]->booleanVars[9] /* $whenCondition12 DISCRETE */ && !data->simulationInfo->booleanVarsPre[9] /* $whenCondition12 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = (-data->simulationInfo->realParameter[11] /* car2.breakingDeceleration PARAM */);
    infoStreamPrint(LOG_EVENTS, 0, "reinit car2.acceleration = %g", data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 223
type: WHEN

when {$whenCondition13} then
  reinit(car2.acceleration,  car2.maxAcceleration);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  if((data->localData[0]->booleanVars[10] /* $whenCondition13 DISCRETE */ && !data->simulationInfo->booleanVarsPre[10] /* $whenCondition13 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = data->simulationInfo->realParameter[13] /* car2.maxAcceleration PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car2.acceleration = %g", data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 222
type: WHEN

when {$whenCondition14} then
  reinit(car2.acceleration,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  if((data->localData[0]->booleanVars[11] /* $whenCondition14 DISCRETE */ && !data->simulationInfo->booleanVarsPre[11] /* $whenCondition14 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car2.acceleration = %g", data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 221
type: WHEN

when {$whenCondition15} then
  reinit(car2.acceleration,  -100.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  if((data->localData[0]->booleanVars[12] /* $whenCondition15 DISCRETE */ && !data->simulationInfo->booleanVarsPre[12] /* $whenCondition15 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = -100.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit car2.acceleration = %g", data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 220
type: WHEN

when {$whenCondition16} then
  reinit(trainlight.Gate_Rotation,  -50.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  if((data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */ && !data->simulationInfo->booleanVarsPre[13] /* $whenCondition16 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */ = -50.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit trainlight.Gate_Rotation = %g", data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 219
type: WHEN

when {$whenCondition17} then
  reinit(trainlight.Gate_Rotation,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  if((data->localData[0]->booleanVars[14] /* $whenCondition17 DISCRETE */ && !data->simulationInfo->booleanVarsPre[14] /* $whenCondition17 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit trainlight.Gate_Rotation = %g", data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 218
type: WHEN

when {$whenCondition18} then
  reinit(trainlight.Gate_Rotation,  50.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  if((data->localData[0]->booleanVars[15] /* $whenCondition18 DISCRETE */ && !data->simulationInfo->booleanVarsPre[15] /* $whenCondition18 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */ = 50.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit trainlight.Gate_Rotation = %g", data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 217
type: WHEN

when {$whenCondition19} then
  reinit(trainlight.Gate_Rotation,  0.0);
end when;
*/
void TrainCrossing_TrainIntersection_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  if((data->localData[0]->booleanVars[16] /* $whenCondition19 DISCRETE */ && !data->simulationInfo->booleanVarsPre[16] /* $whenCondition19 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit trainlight.Gate_Rotation = %g", data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainIntersection_functionLocalKnownVars(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_130(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_131(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_132(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_133(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_134(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_135(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_136(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_137(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_138(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_139(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_140(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_141(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_142(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_143(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_144(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_145(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_146(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_147(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_148(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_149(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_150(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_151(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_152(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_153(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_154(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_155(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_156(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_157(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_158(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_159(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_160(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_161(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_162(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_163(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_164(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_165(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_166(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_167(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_168(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_169(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_170(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_171(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_172(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_173(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_174(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_175(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_176(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_177(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_178(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_179(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_180(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_181(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_182(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_183(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_184(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_185(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_186(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_187(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_188(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_189(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_190(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_191(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_192(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_193(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_194(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_195(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_196(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_197(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_198(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_199(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_200(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_201(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_202(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_203(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_204(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_205(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_206(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_207(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_208(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_209(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_210(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_211(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_212(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_213(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_214(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_215(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_216(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_233(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_232(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_231(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_230(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_229(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_228(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_227(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_226(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_225(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_224(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_223(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_222(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_221(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_220(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_219(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_218(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_217(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainIntersection_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TrainCrossing_TrainIntersection_eqFunction_143(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_144(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_187(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_188(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_189(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_190(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_191(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_192(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_193(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_194(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_195(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_196(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_197(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_198(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_TrainIntersection_eqFunction_143(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_144(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_187(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_188(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_189(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_190(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_191(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_192(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_193(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_194(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_195(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_196(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_197(data, threadData);

    TrainCrossing_TrainIntersection_eqFunction_198(data, threadData);
}

int TrainCrossing_TrainIntersection_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_TrainIntersection_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_TrainIntersection_12jac.h"
#include "TrainCrossing_TrainIntersection_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_TrainIntersection_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_TrainIntersection_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_TrainIntersection_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_TrainIntersection_initializeDAEmodeData,
   TrainCrossing_TrainIntersection_functionODE,
   TrainCrossing_TrainIntersection_functionAlgebraics,
   TrainCrossing_TrainIntersection_functionDAE,
   TrainCrossing_TrainIntersection_functionLocalKnownVars,
   TrainCrossing_TrainIntersection_input_function,
   TrainCrossing_TrainIntersection_input_function_init,
   TrainCrossing_TrainIntersection_input_function_updateStartValues,
   TrainCrossing_TrainIntersection_data_function,
   TrainCrossing_TrainIntersection_output_function,
   TrainCrossing_TrainIntersection_setc_function,
   TrainCrossing_TrainIntersection_function_storeDelayed,
   TrainCrossing_TrainIntersection_updateBoundVariableAttributes,
   TrainCrossing_TrainIntersection_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_TrainIntersection_functionInitialEquations_lambda0,
   TrainCrossing_TrainIntersection_functionRemovedInitialEquations,
   TrainCrossing_TrainIntersection_updateBoundParameters,
   TrainCrossing_TrainIntersection_checkForAsserts,
   TrainCrossing_TrainIntersection_function_ZeroCrossingsEquations,
   TrainCrossing_TrainIntersection_function_ZeroCrossings,
   TrainCrossing_TrainIntersection_function_updateRelations,
   TrainCrossing_TrainIntersection_zeroCrossingDescription,
   TrainCrossing_TrainIntersection_relationDescription,
   TrainCrossing_TrainIntersection_function_initSample,
   TrainCrossing_TrainIntersection_INDEX_JAC_A,
   TrainCrossing_TrainIntersection_INDEX_JAC_B,
   TrainCrossing_TrainIntersection_INDEX_JAC_C,
   TrainCrossing_TrainIntersection_INDEX_JAC_D,
   TrainCrossing_TrainIntersection_INDEX_JAC_F,
   TrainCrossing_TrainIntersection_initialAnalyticJacobianA,
   TrainCrossing_TrainIntersection_initialAnalyticJacobianB,
   TrainCrossing_TrainIntersection_initialAnalyticJacobianC,
   TrainCrossing_TrainIntersection_initialAnalyticJacobianD,
   TrainCrossing_TrainIntersection_initialAnalyticJacobianF,
   TrainCrossing_TrainIntersection_functionJacA_column,
   TrainCrossing_TrainIntersection_functionJacB_column,
   TrainCrossing_TrainIntersection_functionJacC_column,
   TrainCrossing_TrainIntersection_functionJacD_column,
   TrainCrossing_TrainIntersection_functionJacF_column,
   TrainCrossing_TrainIntersection_linear_model_frame,
   TrainCrossing_TrainIntersection_linear_model_datarecovery_frame,
   TrainCrossing_TrainIntersection_mayer,
   TrainCrossing_TrainIntersection_lagrange,
   TrainCrossing_TrainIntersection_pickUpBoundsForInputsInOptimization,
   TrainCrossing_TrainIntersection_setInputData,
   TrainCrossing_TrainIntersection_getTimeGrid,
   TrainCrossing_TrainIntersection_symbolicInlineSystem,
   TrainCrossing_TrainIntersection_function_initSynchronous,
   TrainCrossing_TrainIntersection_function_updateSynchronous,
   TrainCrossing_TrainIntersection_function_equationsSynchronous,
   TrainCrossing_TrainIntersection_inputNames,
   TrainCrossing_TrainIntersection_read_input_fmu,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "E:/Modelica/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,25,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "E:/Modelica/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,40,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_2_dir_data "E:/Modelica/lib/omlibrary/ModelicaReference"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,17,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,43,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "E:/Modelica/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,48,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "TrainCrossing"
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_TrainIntersection_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_TrainIntersection_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.TrainIntersection";
  data->modelData->modelFilePrefix = "TrainCrossing_TrainIntersection";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.0";
  data->modelData->modelGUID = "{05650d15-c8ce-4b51-a6df-54d69fa8c824}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 14;
  data->modelData->nVariablesReal = 55;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 8;
  data->modelData->nVariablesBoolean = 57;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 32;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 10;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 38;
  data->modelData->nAliasInteger = 3;
  data->modelData->nAliasBoolean = 65;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 22;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 37;
  data->modelData->nMathEvents = 1;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_TrainIntersection_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 5;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 296;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

