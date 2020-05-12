/* Initialization */
#include "TrainCrossing_TrainLight_model.h"
#include "TrainCrossing_TrainLight_11mix.h"
#include "TrainCrossing_TrainLight_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_TrainLight_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
stateGraphRoot.subgraphStatePort.activeStepsDummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[25] /* stateGraphRoot.subgraphStatePort.activeStepsDummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
OnToRed.t_start = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[16] /* OnToRed.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
OnToRed.t_dummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[15] /* OnToRed.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
OnToRed.t = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[14] /* OnToRed.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
OnToOff.t_start = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[13] /* OnToOff.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
OnToOff.t_dummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[12] /* OnToOff.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
OnToOff.t = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[11] /* OnToOff.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
OffToOn.t_start = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[9] /* OffToOn.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
OffToOn.t_dummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[8] /* OffToOn.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
OffToOn.t = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[7] /* OffToOn.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
RedToOn.t_start = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[23] /* RedToOn.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
RedToOn.t_dummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[22] /* RedToOn.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
RedToOn.t = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[21] /* RedToOn.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
RedToOff.t_start = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[20] /* RedToOff.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
RedToOff.t_dummy = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[19] /* RedToOff.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
RedToOff.t = 0.0
*/
void TrainCrossing_TrainLight_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[18] /* RedToOff.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
stateGraphRoot.suspend = false
*/
void TrainCrossing_TrainLight_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->booleanVars[33] /* stateGraphRoot.suspend DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
stateGraphRoot.resume = false
*/
void TrainCrossing_TrainLight_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->booleanVars[32] /* stateGraphRoot.resume DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
Off.active = false
*/
void TrainCrossing_TrainLight_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->booleanVars[10] /* Off.active DISCRETE */ = 0;
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_77(DATA *data, threadData_t *threadData);


/*
equation index: 21
type: SIMPLE_ASSIGN
Off.outerStatePort.subgraphStatePort.activeSteps = if Off.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[6] /* Off.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$PRE.Off.newActive = Off.localActive
*/
void TrainCrossing_TrainLight_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->simulationInfo->booleanVarsPre[13] /* Off.newActive DISCRETE */ = data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
$PRE.Off.localActive = $PRE.Off.newActive
*/
void TrainCrossing_TrainLight_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->booleanVarsPre[12] /* Off.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[13] /* Off.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$PRE.Off.oldActive = $PRE.Off.localActive
*/
void TrainCrossing_TrainLight_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->booleanVarsPre[14] /* Off.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[12] /* Off.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
Off.oldActive = $PRE.Off.oldActive
*/
void TrainCrossing_TrainLight_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->booleanVars[14] /* Off.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[14] /* Off.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
Red.active = false
*/
void TrainCrossing_TrainLight_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->booleanVars[24] /* Red.active DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
$whenCondition1 = Red.active
*/
void TrainCrossing_TrainLight_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ = data->localData[0]->booleanVars[24] /* Red.active DISCRETE */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
Red.localActive = Red.active
*/
void TrainCrossing_TrainLight_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */ = data->localData[0]->booleanVars[24] /* Red.active DISCRETE */;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
Red.outerStatePort.subgraphStatePort.activeSteps = if Red.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[17] /* Red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$PRE.Red.newActive = Red.localActive
*/
void TrainCrossing_TrainLight_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->booleanVarsPre[26] /* Red.newActive DISCRETE */ = data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
$PRE.Red.localActive = $PRE.Red.newActive
*/
void TrainCrossing_TrainLight_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->booleanVarsPre[25] /* Red.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[26] /* Red.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
$PRE.Red.oldActive = $PRE.Red.localActive
*/
void TrainCrossing_TrainLight_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->booleanVarsPre[27] /* Red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[25] /* Red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
Red.oldActive = $PRE.Red.oldActive
*/
void TrainCrossing_TrainLight_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->booleanVars[27] /* Red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[27] /* Red.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
On.active = true
*/
void TrainCrossing_TrainLight_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->booleanVars[16] /* On.active DISCRETE */ = 1;
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_87(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_109(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: SIMPLE_ASSIGN
On.outerStatePort.subgraphStatePort.activeSteps = if On.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainLight_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[10] /* On.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_85(DATA *data, threadData_t *threadData);


/*
equation index: 39
type: SIMPLE_ASSIGN
stateGraphRoot.activeSteps = -integer(stateGraphRoot.subgraphStatePort.activeSteps)
*/
void TrainCrossing_TrainLight_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->integerVars[2] /* stateGraphRoot.activeSteps DISCRETE */ = (-((modelica_integer)floor(data->localData[0]->realVars[24] /* stateGraphRoot.subgraphStatePort.activeSteps variable */)));
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
$PRE.On.newActive = On.localActive
*/
void TrainCrossing_TrainLight_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->booleanVarsPre[19] /* On.newActive DISCRETE */ = data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
$PRE.On.localActive = $PRE.On.newActive
*/
void TrainCrossing_TrainLight_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->booleanVarsPre[18] /* On.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[19] /* On.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
$PRE.On.oldActive = $PRE.On.localActive
*/
void TrainCrossing_TrainLight_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->booleanVarsPre[20] /* On.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[18] /* On.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
On.oldActive = $PRE.On.oldActive
*/
void TrainCrossing_TrainLight_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->booleanVars[20] /* On.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[20] /* On.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
OnToRed.enableFire = not Safe_Passage and On.localActive and not Red.localActive
*/
void TrainCrossing_TrainLight_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->booleanVars[23] /* OnToRed.enableFire DISCRETE */ = (((!data->localData[0]->booleanVars[31] /* Safe_Passage variable */) && data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */) && (!data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
On.outPort[2].available = On.localActive and not OnToRed.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->booleanVars[21] /* On.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */ && (!data->localData[0]->booleanVars[23] /* OnToRed.enableFire DISCRETE */));
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
OnToOff.enableFire = Failure and On.outPort[2].available and not Off.localActive
*/
void TrainCrossing_TrainLight_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[0] /* Failure PARAM */ && data->localData[0]->booleanVars[21] /* On.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
Off.inPort[2].occupied = Off.localActive or OnToOff.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->booleanVars[11] /* Off.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */ || data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
RedToOn.enableFire = Safe_Passage and Red.localActive and not On.localActive
*/
void TrainCrossing_TrainLight_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->booleanVars[30] /* RedToOn.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[31] /* Safe_Passage variable */ && data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */) && (!data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
On.inPort[2].occupied = On.localActive or RedToOn.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->booleanVars[17] /* On.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */ || data->localData[0]->booleanVars[30] /* RedToOn.enableFire DISCRETE */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
OffToOn.enableFire = not Failure and Off.localActive and not On.inPort[2].occupied
*/
void TrainCrossing_TrainLight_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */ = (((!data->simulationInfo->booleanParameter[0] /* Failure PARAM */) && data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */) && (!data->localData[0]->booleanVars[17] /* On.inPort[2].occupied DISCRETE */));
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
On.newActive = Modelica.StateGraph.Temporary.anyTrue({RedToOn.enableFire, OffToOn.enableFire}) or On.localActive and not Modelica.StateGraph.Temporary.anyTrue({OnToRed.enableFire, OnToOff.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  boolean_array tmp0;
  boolean_array tmp1;
  array_alloc_scalar_boolean_array(&tmp0, 2, (modelica_boolean)data->localData[0]->booleanVars[30] /* RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp1, 2, (modelica_boolean)data->localData[0]->booleanVars[23] /* OnToRed.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[19] /* On.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp0) || (data->localData[0]->booleanVars[18] /* On.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp1))));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
Red.outPort[2].available = Red.localActive and not RedToOn.enableFire
*/
void TrainCrossing_TrainLight_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->booleanVars[28] /* Red.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */ && (!data->localData[0]->booleanVars[30] /* RedToOn.enableFire DISCRETE */));
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_96(DATA *data, threadData_t *threadData);


/*
equation index: 54
type: SIMPLE_ASSIGN
Red.newActive = Modelica.StateGraph.Temporary.anyTrue({OnToRed.enableFire}) or Red.localActive and not Modelica.StateGraph.Temporary.anyTrue({RedToOn.enableFire, RedToOff.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  boolean_array tmp2;
  boolean_array tmp3;
  array_alloc_scalar_boolean_array(&tmp2, 1, (modelica_boolean)data->localData[0]->booleanVars[23] /* OnToRed.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp3, 2, (modelica_boolean)data->localData[0]->booleanVars[30] /* RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[29] /* RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[26] /* Red.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp2) || (data->localData[0]->booleanVars[25] /* Red.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp3))));
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
Off.newActive = Modelica.StateGraph.Temporary.anyTrue({OnToOff.enableFire, RedToOff.enableFire}) or Off.localActive and not Modelica.StateGraph.Temporary.anyTrue({OffToOn.enableFire})
*/
void TrainCrossing_TrainLight_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  boolean_array tmp4;
  boolean_array tmp5;
  array_alloc_scalar_boolean_array(&tmp4, 2, (modelica_boolean)data->localData[0]->booleanVars[22] /* OnToOff.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[29] /* RedToOff.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp5, 1, (modelica_boolean)data->localData[0]->booleanVars[15] /* OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[13] /* Off.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp4) || (data->localData[0]->booleanVars[12] /* Off.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp5))));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
state = if Red.active then TrainCrossing.TrainLightColor.red else if On.active then TrainCrossing.TrainLightColor.on else TrainCrossing.TrainLightColor.off
*/
void TrainCrossing_TrainLight_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->integerVars[1] /* state DISCRETE */ = (data->localData[0]->booleanVars[24] /* Red.active DISCRETE */?2:(data->localData[0]->booleanVars[16] /* On.active DISCRETE */?1:3));
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_107(DATA *data, threadData_t *threadData);


/*
equation index: 58
type: SIMPLE_ASSIGN
Gate_Rotation = $START.Gate_Rotation
*/
void TrainCrossing_TrainLight_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[1] /* Gate_Rotation STATE(1) */ = data->modelData->realVarsData[1].attribute /* Gate_Rotation STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_72(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_73(DATA *data, threadData_t *threadData);


/*
equation index: 61
type: SIMPLE_ASSIGN
Gate_Angle = $START.Gate_Angle
*/
void TrainCrossing_TrainLight_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */ = data->modelData->realVarsData[0].attribute /* Gate_Angle STATE(1,Gate_Rotation) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainLight_eqFunction_110(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_111(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_112(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_71(DATA *data, threadData_t *threadData);


/*
equation index: 66
type: SIMPLE_ASSIGN
$PRE.RedToOff.enableFire = false
*/
void TrainCrossing_TrainLight_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->booleanVarsPre[29] /* RedToOff.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$PRE.RedToOn.enableFire = false
*/
void TrainCrossing_TrainLight_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->simulationInfo->booleanVarsPre[30] /* RedToOn.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
$PRE.OffToOn.enableFire = false
*/
void TrainCrossing_TrainLight_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->simulationInfo->booleanVarsPre[15] /* OffToOn.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$PRE.OnToOff.enableFire = false
*/
void TrainCrossing_TrainLight_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->booleanVarsPre[22] /* OnToOff.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$PRE.OnToRed.enableFire = false
*/
void TrainCrossing_TrainLight_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->simulationInfo->booleanVarsPre[23] /* OnToRed.enableFire DISCRETE */ = 0;
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_TrainLight_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_TrainLight_eqFunction_1(data, threadData);
  TrainCrossing_TrainLight_eqFunction_2(data, threadData);
  TrainCrossing_TrainLight_eqFunction_3(data, threadData);
  TrainCrossing_TrainLight_eqFunction_4(data, threadData);
  TrainCrossing_TrainLight_eqFunction_5(data, threadData);
  TrainCrossing_TrainLight_eqFunction_6(data, threadData);
  TrainCrossing_TrainLight_eqFunction_7(data, threadData);
  TrainCrossing_TrainLight_eqFunction_8(data, threadData);
  TrainCrossing_TrainLight_eqFunction_9(data, threadData);
  TrainCrossing_TrainLight_eqFunction_10(data, threadData);
  TrainCrossing_TrainLight_eqFunction_11(data, threadData);
  TrainCrossing_TrainLight_eqFunction_12(data, threadData);
  TrainCrossing_TrainLight_eqFunction_13(data, threadData);
  TrainCrossing_TrainLight_eqFunction_14(data, threadData);
  TrainCrossing_TrainLight_eqFunction_15(data, threadData);
  TrainCrossing_TrainLight_eqFunction_16(data, threadData);
  TrainCrossing_TrainLight_eqFunction_17(data, threadData);
  TrainCrossing_TrainLight_eqFunction_18(data, threadData);
  TrainCrossing_TrainLight_eqFunction_19(data, threadData);
  TrainCrossing_TrainLight_eqFunction_77(data, threadData);
  TrainCrossing_TrainLight_eqFunction_21(data, threadData);
  TrainCrossing_TrainLight_eqFunction_22(data, threadData);
  TrainCrossing_TrainLight_eqFunction_23(data, threadData);
  TrainCrossing_TrainLight_eqFunction_24(data, threadData);
  TrainCrossing_TrainLight_eqFunction_25(data, threadData);
  TrainCrossing_TrainLight_eqFunction_26(data, threadData);
  TrainCrossing_TrainLight_eqFunction_27(data, threadData);
  TrainCrossing_TrainLight_eqFunction_28(data, threadData);
  TrainCrossing_TrainLight_eqFunction_29(data, threadData);
  TrainCrossing_TrainLight_eqFunction_30(data, threadData);
  TrainCrossing_TrainLight_eqFunction_31(data, threadData);
  TrainCrossing_TrainLight_eqFunction_32(data, threadData);
  TrainCrossing_TrainLight_eqFunction_33(data, threadData);
  TrainCrossing_TrainLight_eqFunction_34(data, threadData);
  TrainCrossing_TrainLight_eqFunction_87(data, threadData);
  TrainCrossing_TrainLight_eqFunction_109(data, threadData);
  TrainCrossing_TrainLight_eqFunction_37(data, threadData);
  TrainCrossing_TrainLight_eqFunction_85(data, threadData);
  TrainCrossing_TrainLight_eqFunction_39(data, threadData);
  TrainCrossing_TrainLight_eqFunction_40(data, threadData);
  TrainCrossing_TrainLight_eqFunction_41(data, threadData);
  TrainCrossing_TrainLight_eqFunction_42(data, threadData);
  TrainCrossing_TrainLight_eqFunction_43(data, threadData);
  TrainCrossing_TrainLight_eqFunction_44(data, threadData);
  TrainCrossing_TrainLight_eqFunction_45(data, threadData);
  TrainCrossing_TrainLight_eqFunction_46(data, threadData);
  TrainCrossing_TrainLight_eqFunction_47(data, threadData);
  TrainCrossing_TrainLight_eqFunction_48(data, threadData);
  TrainCrossing_TrainLight_eqFunction_49(data, threadData);
  TrainCrossing_TrainLight_eqFunction_50(data, threadData);
  TrainCrossing_TrainLight_eqFunction_51(data, threadData);
  TrainCrossing_TrainLight_eqFunction_52(data, threadData);
  TrainCrossing_TrainLight_eqFunction_96(data, threadData);
  TrainCrossing_TrainLight_eqFunction_54(data, threadData);
  TrainCrossing_TrainLight_eqFunction_55(data, threadData);
  TrainCrossing_TrainLight_eqFunction_56(data, threadData);
  TrainCrossing_TrainLight_eqFunction_107(data, threadData);
  TrainCrossing_TrainLight_eqFunction_58(data, threadData);
  TrainCrossing_TrainLight_eqFunction_72(data, threadData);
  TrainCrossing_TrainLight_eqFunction_73(data, threadData);
  TrainCrossing_TrainLight_eqFunction_61(data, threadData);
  TrainCrossing_TrainLight_eqFunction_110(data, threadData);
  TrainCrossing_TrainLight_eqFunction_111(data, threadData);
  TrainCrossing_TrainLight_eqFunction_112(data, threadData);
  TrainCrossing_TrainLight_eqFunction_71(data, threadData);
  TrainCrossing_TrainLight_eqFunction_66(data, threadData);
  TrainCrossing_TrainLight_eqFunction_67(data, threadData);
  TrainCrossing_TrainLight_eqFunction_68(data, threadData);
  TrainCrossing_TrainLight_eqFunction_69(data, threadData);
  TrainCrossing_TrainLight_eqFunction_70(data, threadData);
  TRACE_POP
}


int TrainCrossing_TrainLight_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainLight_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainLight_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainLight_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

