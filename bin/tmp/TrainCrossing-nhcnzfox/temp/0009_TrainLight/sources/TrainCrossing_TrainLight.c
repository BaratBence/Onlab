/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_TrainLight_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_TrainLight_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[24] /* Safe_Passage variable */ = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[24].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[24].attribute.start = data->simulationInfo->inputVars[0];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[24].info.name;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[4] /* Gate_Angle_output variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[5] /* Intersection_output variable */;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 73
type: SIMPLE_ASSIGN
Intersection_output = Intersection
*/
void TrainCrossing_TrainLight_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[5] /* Intersection_output variable */ = data->simulationInfo->realParameter[0] /* Intersection PARAM */;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
RedToOn.condition = Safe_Passage >= 0.9
*/
void TrainCrossing_TrainLight_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, 3, GreaterEq);
  data->localData[0]->booleanVars[31] /* RedToOn.condition DISCRETE */ = tmp0;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
OnToRed.condition = Safe_Passage < 0.9
*/
void TrainCrossing_TrainLight_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, 2, Less);
  data->localData[0]->booleanVars[23] /* OnToRed.condition DISCRETE */ = tmp1;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
$DER.Gate_Angle = Gate_Rotation
*/
void TrainCrossing_TrainLight_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[2] /* der(Gate_Angle) STATE_DER */ = data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
$DER.Gate_Rotation = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[3] /* der(Gate_Rotation) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
Off.active = pre(Off.newActive)
*/
void TrainCrossing_TrainLight_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->booleanVars[10] /* Off.active DISCRETE */ = data->simulationInfo->booleanVarsPre[13] /* Off.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
Off.outerStatePort.subgraphStatePort.activeSteps = if Off.active then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[6] /* Off.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[10] /* Off.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 80
type: WHEN

when {} then
  Off.oldActive = Off.active;
end when;
*/
void TrainCrossing_TrainLight_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  if(0)
  {
    data->localData[0]->booleanVars[14] /* Off.oldActive DISCRETE */ = data->localData[0]->booleanVars[10] /* Off.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
Off.localActive = Off.active
*/
void TrainCrossing_TrainLight_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */ = data->localData[0]->booleanVars[10] /* Off.active DISCRETE */;
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
$whenCondition1 = pre(Red.newActive)
*/
void TrainCrossing_TrainLight_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ = data->simulationInfo->booleanVarsPre[27] /* Red.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
Red.outerStatePort.subgraphStatePort.activeSteps = if $whenCondition1 then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[17] /* Red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 84
type: WHEN

when {} then
  Red.oldActive = $whenCondition1;
end when;
*/
void TrainCrossing_TrainLight_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  if(0)
  {
    data->localData[0]->booleanVars[28] /* Red.oldActive DISCRETE */ = data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
Red.localActive = $whenCondition1
*/
void TrainCrossing_TrainLight_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->booleanVars[26] /* Red.localActive DISCRETE */ = data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */;
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
Red.active = $whenCondition1
*/
void TrainCrossing_TrainLight_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->booleanVars[25] /* Red.active DISCRETE */ = data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */;
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
On.active = pre(On.newActive)
*/
void TrainCrossing_TrainLight_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->booleanVars[16] /* On.active DISCRETE */ = data->simulationInfo->booleanVarsPre[19] /* On.newActive DISCRETE */;
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
On.outerStatePort.subgraphStatePort.activeSteps = if On.active then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[10] /* On.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[16] /* On.active DISCRETE */?1.0:0.0);
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
stateGraphRoot.subgraphStatePort.activeSteps = (-Off.outerStatePort.subgraphStatePort.activeSteps) - Red.outerStatePort.subgraphStatePort.activeSteps - On.outerStatePort.subgraphStatePort.activeSteps
*/
void TrainCrossing_TrainLight_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[25] /* stateGraphRoot.subgraphStatePort.activeSteps variable */ = (-data->localData[0]->realVars[6] /* Off.outerStatePort.subgraphStatePort.activeSteps variable */) - data->localData[0]->realVars[17] /* Red.outerStatePort.subgraphStatePort.activeSteps variable */ - data->localData[0]->realVars[10] /* On.outerStatePort.subgraphStatePort.activeSteps variable */;
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
stateGraphRoot.activeSteps = -integer(stateGraphRoot.subgraphStatePort.activeSteps, 0)
*/
void TrainCrossing_TrainLight_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->integerVars[2] /* stateGraphRoot.activeSteps DISCRETE */ = (-(_event_integer(data->localData[0]->realVars[25] /* stateGraphRoot.subgraphStatePort.activeSteps variable */, ((modelica_integer) 0), data)));
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
$whenCondition3 = On.active or Off.active
*/
void TrainCrossing_TrainLight_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->booleanVars[8] /* $whenCondition3 DISCRETE */ = (data->localData[0]->booleanVars[16] /* On.active DISCRETE */ || data->localData[0]->booleanVars[10] /* Off.active DISCRETE */);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
state = if $whenCondition1 then TrainCrossing.TrainLightColor.red else if On.active then TrainCrossing.TrainLightColor.on else TrainCrossing.TrainLightColor.off
*/
void TrainCrossing_TrainLight_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->integerVars[1] /* state DISCRETE */ = (data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */?2:(data->localData[0]->booleanVars[16] /* On.active DISCRETE */?1:3));
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
ColorState_output = Integer(state)
*/
void TrainCrossing_TrainLight_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->integerVars[0] /* ColorState_output variable */ = ((modelica_integer)(data->localData[0]->integerVars[1] /* state DISCRETE */));
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
OnToRed.enableFire = OnToRed.condition and On.active and not $whenCondition1
*/
void TrainCrossing_TrainLight_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->booleanVars[24] /* OnToRed.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[23] /* OnToRed.condition DISCRETE */ && data->localData[0]->booleanVars[16] /* On.active DISCRETE */) && (!data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */));
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
$cse3 = Modelica.StateGraph.Temporary.anyTrue({OnToRed.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  boolean_array tmp2;
  array_alloc_scalar_boolean_array(&tmp2, 1, (modelica_boolean)data->localData[0]->booleanVars[24] /* OnToRed.enableFire DISCRETE */);
  data->localData[0]->booleanVars[2] /* $cse3 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp2);
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
On.outPort[2].available = On.active and not OnToRed.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->booleanVars[21] /* On.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[16] /* On.active DISCRETE */ && (!data->localData[0]->booleanVars[24] /* OnToRed.enableFire DISCRETE */));
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
OnToOff.enableFire = Failure and On.outPort[2].available and not Off.active
*/
void TrainCrossing_TrainLight_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[0] /* Failure PARAM */ && data->localData[0]->booleanVars[21] /* On.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[10] /* Off.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
Off.inPort[2].occupied = Off.active or OnToOff.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->booleanVars[11] /* Off.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[10] /* Off.active DISCRETE */ || data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
$cse6 = Modelica.StateGraph.Temporary.anyTrue({OnToRed.enableFire, OnToOff.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  boolean_array tmp3;
  array_alloc_scalar_boolean_array(&tmp3, 2, (modelica_boolean)data->localData[0]->booleanVars[24] /* OnToRed.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[5] /* $cse6 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp3);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
RedToOn.enableFire = RedToOn.condition and $whenCondition1 and not On.active
*/
void TrainCrossing_TrainLight_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->booleanVars[32] /* RedToOn.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[31] /* RedToOn.condition DISCRETE */ && data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */) && (!data->localData[0]->booleanVars[16] /* On.active DISCRETE */));
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
Red.outPort[2].available = $whenCondition1 and not RedToOn.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->booleanVars[29] /* Red.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ && (!data->localData[0]->booleanVars[32] /* RedToOn.enableFire DISCRETE */));
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
RedToOff.enableFire = Failure and Red.outPort[2].available and not Off.inPort[2].occupied
*/
void TrainCrossing_TrainLight_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->booleanVars[30] /* RedToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[0] /* Failure PARAM */ && data->localData[0]->booleanVars[29] /* Red.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[11] /* Off.inPort[2].occupied DISCRETE */));
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
$cse1 = Modelica.StateGraph.Temporary.anyTrue({OnToOff.enableFire, RedToOff.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  boolean_array tmp4;
  array_alloc_scalar_boolean_array(&tmp4, 2, (modelica_boolean)data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[30] /* RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp4);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
$cse4 = Modelica.StateGraph.Temporary.anyTrue({RedToOn.enableFire, RedToOff.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  boolean_array tmp5;
  array_alloc_scalar_boolean_array(&tmp5, 2, (modelica_boolean)data->localData[0]->booleanVars[32] /* RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[30] /* RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[3] /* $cse4 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp5);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
Red.newActive = $cse3 or $whenCondition1 and not $cse4
*/
void TrainCrossing_TrainLight_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->booleanVars[27] /* Red.newActive DISCRETE */ = (data->localData[0]->booleanVars[2] /* $cse3 DISCRETE */ || (data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ && (!data->localData[0]->booleanVars[3] /* $cse4 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
On.inPort[2].occupied = On.active or RedToOn.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->booleanVars[17] /* On.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[16] /* On.active DISCRETE */ || data->localData[0]->booleanVars[32] /* RedToOn.enableFire DISCRETE */);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
OffToOn.enableFire = not Failure and Off.active and not On.inPort[2].occupied
*/
void TrainCrossing_TrainLight_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */ = (((!data->simulationInfo->booleanParameter[0] /* Failure PARAM */) && data->localData[0]->booleanVars[10] /* Off.active DISCRETE */) && (!data->localData[0]->booleanVars[17] /* On.inPort[2].occupied DISCRETE */));
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
$cse2 = Modelica.StateGraph.Temporary.anyTrue({OffToOn.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  boolean_array tmp6;
  array_alloc_scalar_boolean_array(&tmp6, 1, (modelica_boolean)data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp6);
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
Off.newActive = $cse1 or Off.active and not $cse2
*/
void TrainCrossing_TrainLight_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->booleanVars[13] /* Off.newActive DISCRETE */ = (data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ || (data->localData[0]->booleanVars[10] /* Off.active DISCRETE */ && (!data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
$cse5 = Modelica.StateGraph.Temporary.anyTrue({RedToOn.enableFire, OffToOn.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  boolean_array tmp7;
  array_alloc_scalar_boolean_array(&tmp7, 2, (modelica_boolean)data->localData[0]->booleanVars[32] /* RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[4] /* $cse5 DISCRETE */ = omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp7);
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
On.newActive = $cse5 or On.active and not $cse6
*/
void TrainCrossing_TrainLight_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->booleanVars[19] /* On.newActive DISCRETE */ = (data->localData[0]->booleanVars[4] /* $cse5 DISCRETE */ || (data->localData[0]->booleanVars[16] /* On.active DISCRETE */ && (!data->localData[0]->booleanVars[5] /* $cse6 DISCRETE */)));
  TRACE_POP
}
/*
equation index: 112
type: WHEN

when {} then
  On.oldActive = On.active;
end when;
*/
void TrainCrossing_TrainLight_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  if(0)
  {
    data->localData[0]->booleanVars[20] /* On.oldActive DISCRETE */ = data->localData[0]->booleanVars[16] /* On.active DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
On.localActive = On.active
*/
void TrainCrossing_TrainLight_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */ = data->localData[0]->booleanVars[16] /* On.active DISCRETE */;
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
Gate_Angle_output = Gate_Angle
*/
void TrainCrossing_TrainLight_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[4] /* Gate_Angle_output variable */ = data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */;
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
$whenCondition2 = Gate_Angle <= 0.0
*/
void TrainCrossing_TrainLight_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 0.0, 1, LessEq);
  data->localData[0]->booleanVars[7] /* $whenCondition2 DISCRETE */ = tmp8;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
$whenCondition4 = Gate_Angle >= 90.0
*/
void TrainCrossing_TrainLight_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 90.0, 0, GreaterEq);
  data->localData[0]->booleanVars[9] /* $whenCondition4 DISCRETE */ = tmp9;
  TRACE_POP
}
/*
equation index: 120
type: WHEN

when {$whenCondition1} then
  reinit(Gate_Rotation,  -50.0);
end when;
*/
void TrainCrossing_TrainLight_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  if((data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[6] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */ = -50.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit Gate_Rotation = %g", data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 119
type: WHEN

when {$whenCondition2} then
  reinit(Gate_Rotation,  0.0);
end when;
*/
void TrainCrossing_TrainLight_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  if((data->localData[0]->booleanVars[7] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[7] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit Gate_Rotation = %g", data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 118
type: WHEN

when {$whenCondition3} then
  reinit(Gate_Rotation,  50.0);
end when;
*/
void TrainCrossing_TrainLight_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  if((data->localData[0]->booleanVars[8] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[8] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */ = 50.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit Gate_Rotation = %g", data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 117
type: WHEN

when {$whenCondition4} then
  reinit(Gate_Rotation,  0.0);
end when;
*/
void TrainCrossing_TrainLight_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  if((data->localData[0]->booleanVars[9] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[9] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */ = 0.0;
    infoStreamPrint(LOG_EVENTS, 0, "reinit Gate_Rotation = %g", data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_TrainLight_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainLight_functionLocalKnownVars(data, threadData);
  TrainCrossing_TrainLight_eqFunction_73(data, threadData);

  TrainCrossing_TrainLight_eqFunction_74(data, threadData);

  TrainCrossing_TrainLight_eqFunction_75(data, threadData);

  TrainCrossing_TrainLight_eqFunction_76(data, threadData);

  TrainCrossing_TrainLight_eqFunction_77(data, threadData);

  TrainCrossing_TrainLight_eqFunction_78(data, threadData);

  TrainCrossing_TrainLight_eqFunction_79(data, threadData);

  TrainCrossing_TrainLight_eqFunction_80(data, threadData);

  TrainCrossing_TrainLight_eqFunction_81(data, threadData);

  TrainCrossing_TrainLight_eqFunction_82(data, threadData);

  TrainCrossing_TrainLight_eqFunction_83(data, threadData);

  TrainCrossing_TrainLight_eqFunction_84(data, threadData);

  TrainCrossing_TrainLight_eqFunction_85(data, threadData);

  TrainCrossing_TrainLight_eqFunction_86(data, threadData);

  TrainCrossing_TrainLight_eqFunction_87(data, threadData);

  TrainCrossing_TrainLight_eqFunction_88(data, threadData);

  TrainCrossing_TrainLight_eqFunction_89(data, threadData);

  TrainCrossing_TrainLight_eqFunction_90(data, threadData);

  TrainCrossing_TrainLight_eqFunction_91(data, threadData);

  TrainCrossing_TrainLight_eqFunction_92(data, threadData);

  TrainCrossing_TrainLight_eqFunction_93(data, threadData);

  TrainCrossing_TrainLight_eqFunction_94(data, threadData);

  TrainCrossing_TrainLight_eqFunction_95(data, threadData);

  TrainCrossing_TrainLight_eqFunction_96(data, threadData);

  TrainCrossing_TrainLight_eqFunction_97(data, threadData);

  TrainCrossing_TrainLight_eqFunction_98(data, threadData);

  TrainCrossing_TrainLight_eqFunction_99(data, threadData);

  TrainCrossing_TrainLight_eqFunction_100(data, threadData);

  TrainCrossing_TrainLight_eqFunction_101(data, threadData);

  TrainCrossing_TrainLight_eqFunction_102(data, threadData);

  TrainCrossing_TrainLight_eqFunction_103(data, threadData);

  TrainCrossing_TrainLight_eqFunction_104(data, threadData);

  TrainCrossing_TrainLight_eqFunction_105(data, threadData);

  TrainCrossing_TrainLight_eqFunction_106(data, threadData);

  TrainCrossing_TrainLight_eqFunction_107(data, threadData);

  TrainCrossing_TrainLight_eqFunction_108(data, threadData);

  TrainCrossing_TrainLight_eqFunction_109(data, threadData);

  TrainCrossing_TrainLight_eqFunction_110(data, threadData);

  TrainCrossing_TrainLight_eqFunction_111(data, threadData);

  TrainCrossing_TrainLight_eqFunction_112(data, threadData);

  TrainCrossing_TrainLight_eqFunction_113(data, threadData);

  TrainCrossing_TrainLight_eqFunction_114(data, threadData);

  TrainCrossing_TrainLight_eqFunction_115(data, threadData);

  TrainCrossing_TrainLight_eqFunction_116(data, threadData);

  TrainCrossing_TrainLight_eqFunction_120(data, threadData);

  TrainCrossing_TrainLight_eqFunction_119(data, threadData);

  TrainCrossing_TrainLight_eqFunction_118(data, threadData);

  TrainCrossing_TrainLight_eqFunction_117(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainLight_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TrainCrossing_TrainLight_eqFunction_76(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_77(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_TrainLight_eqFunction_76(data, threadData);

    TrainCrossing_TrainLight_eqFunction_77(data, threadData);
}

int TrainCrossing_TrainLight_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_TrainLight_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_TrainLight_12jac.h"
#include "TrainCrossing_TrainLight_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_TrainLight_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_TrainLight_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_TrainLight_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_TrainLight_initializeDAEmodeData,
   TrainCrossing_TrainLight_functionODE,
   TrainCrossing_TrainLight_functionAlgebraics,
   TrainCrossing_TrainLight_functionDAE,
   TrainCrossing_TrainLight_functionLocalKnownVars,
   TrainCrossing_TrainLight_input_function,
   TrainCrossing_TrainLight_input_function_init,
   TrainCrossing_TrainLight_input_function_updateStartValues,
   TrainCrossing_TrainLight_data_function,
   TrainCrossing_TrainLight_output_function,
   TrainCrossing_TrainLight_setc_function,
   TrainCrossing_TrainLight_function_storeDelayed,
   TrainCrossing_TrainLight_updateBoundVariableAttributes,
   TrainCrossing_TrainLight_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_TrainLight_functionInitialEquations_lambda0,
   TrainCrossing_TrainLight_functionRemovedInitialEquations,
   TrainCrossing_TrainLight_updateBoundParameters,
   TrainCrossing_TrainLight_checkForAsserts,
   TrainCrossing_TrainLight_function_ZeroCrossingsEquations,
   TrainCrossing_TrainLight_function_ZeroCrossings,
   TrainCrossing_TrainLight_function_updateRelations,
   TrainCrossing_TrainLight_zeroCrossingDescription,
   TrainCrossing_TrainLight_relationDescription,
   TrainCrossing_TrainLight_function_initSample,
   TrainCrossing_TrainLight_INDEX_JAC_A,
   TrainCrossing_TrainLight_INDEX_JAC_B,
   TrainCrossing_TrainLight_INDEX_JAC_C,
   TrainCrossing_TrainLight_INDEX_JAC_D,
   TrainCrossing_TrainLight_INDEX_JAC_F,
   TrainCrossing_TrainLight_initialAnalyticJacobianA,
   TrainCrossing_TrainLight_initialAnalyticJacobianB,
   TrainCrossing_TrainLight_initialAnalyticJacobianC,
   TrainCrossing_TrainLight_initialAnalyticJacobianD,
   TrainCrossing_TrainLight_initialAnalyticJacobianF,
   TrainCrossing_TrainLight_functionJacA_column,
   TrainCrossing_TrainLight_functionJacB_column,
   TrainCrossing_TrainLight_functionJacC_column,
   TrainCrossing_TrainLight_functionJacD_column,
   TrainCrossing_TrainLight_functionJacF_column,
   TrainCrossing_TrainLight_linear_model_frame,
   TrainCrossing_TrainLight_linear_model_datarecovery_frame,
   TrainCrossing_TrainLight_mayer,
   TrainCrossing_TrainLight_lagrange,
   TrainCrossing_TrainLight_pickUpBoundsForInputsInOptimization,
   TrainCrossing_TrainLight_setInputData,
   TrainCrossing_TrainLight_getTimeGrid,
   TrainCrossing_TrainLight_symbolicInlineSystem,
   TrainCrossing_TrainLight_function_initSynchronous,
   TrainCrossing_TrainLight_function_updateSynchronous,
   TrainCrossing_TrainLight_function_equationsSynchronous,
   TrainCrossing_TrainLight_inputNames,
   TrainCrossing_TrainLight_read_input_fmu,
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
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_TrainLight_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_TrainLight_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.TrainLight";
  data->modelData->modelFilePrefix = "TrainCrossing_TrainLight";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.2";
  data->modelData->modelGUID = "{3b005c6e-997a-4a0d-8b1b-80620b940822}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 2;
  data->modelData->nVariablesReal = 27;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 3;
  data->modelData->nVariablesBoolean = 35;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 6;
  data->modelData->nParametersInteger = 6;
  data->modelData->nParametersBoolean = 6;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 1;
  data->modelData->nOutputVars = 3;
  
  data->modelData->nAliasReal = 5;
  data->modelData->nAliasInteger = 1;
  data->modelData->nAliasBoolean = 60;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 5;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 4;
  data->modelData->nMathEvents = 1;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_TrainLight_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 162;
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

