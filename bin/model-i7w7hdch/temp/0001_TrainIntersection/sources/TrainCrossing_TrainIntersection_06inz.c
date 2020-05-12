/* Initialization */
#include "TrainCrossing_TrainIntersection_model.h"
#include "TrainCrossing_TrainIntersection_11mix.h"
#include "TrainCrossing_TrainIntersection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_TrainIntersection_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.subgraphStatePort.activeStepsDummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[54] /* trainlight.stateGraphRoot.subgraphStatePort.activeStepsDummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
trainlight.OnToRed.t_start = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[45] /* trainlight.OnToRed.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
trainlight.OnToRed.t_dummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[44] /* trainlight.OnToRed.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
trainlight.OnToRed.t = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[43] /* trainlight.OnToRed.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
trainlight.OnToOff.t_start = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[42] /* trainlight.OnToOff.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
trainlight.OnToOff.t_dummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[41] /* trainlight.OnToOff.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
trainlight.OnToOff.t = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[40] /* trainlight.OnToOff.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
trainlight.OffToOn.t_start = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[38] /* trainlight.OffToOn.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
trainlight.OffToOn.t_dummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[37] /* trainlight.OffToOn.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
trainlight.OffToOn.t = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[36] /* trainlight.OffToOn.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
trainlight.RedToOn.t_start = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[52] /* trainlight.RedToOn.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
trainlight.RedToOn.t_dummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[51] /* trainlight.RedToOn.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
trainlight.RedToOn.t = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[50] /* trainlight.RedToOn.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
trainlight.RedToOff.t_start = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[49] /* trainlight.RedToOff.t_start variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
trainlight.RedToOff.t_dummy = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[48] /* trainlight.RedToOff.t_dummy variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
trainlight.RedToOff.t = 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[47] /* trainlight.RedToOff.t variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
sensors.Intersection = 0.5 * (sensors.Sensor1Position + sensors.Sensor2Position)
*/
void TrainCrossing_TrainIntersection_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[34] /* sensors.Intersection variable */ = (0.5) * (data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.suspend = false
*/
void TrainCrossing_TrainIntersection_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->booleanVars[56] /* trainlight.stateGraphRoot.suspend DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.resume = false
*/
void TrainCrossing_TrainIntersection_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->booleanVars[55] /* trainlight.stateGraphRoot.resume DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
train.distance = $START.train.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ = data->modelData->realVarsData[9].attribute /* train.distance STATE(1,train.maxSpeed) */.start;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
train1.distance = $START.train1.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ = data->modelData->realVarsData[10].attribute /* train1.distance STATE(1,train1.maxSpeed) */.start;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
train2.distance = $START.train2.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ = data->modelData->realVarsData[11].attribute /* train2.distance STATE(1,train2.maxSpeed) */.start;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
$PRE.tic.Sensor1_Active = $START.tic.Sensor1_Active
*/
void TrainCrossing_TrainIntersection_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->booleanVarsPre[31] /* tic.Sensor1_Active DISCRETE */ = data->modelData->booleanVarsData[31].attribute /* tic.Sensor1_Active DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$PRE.tic.Sensor2_Active = $START.tic.Sensor2_Active
*/
void TrainCrossing_TrainIntersection_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */ = data->modelData->booleanVarsData[32].attribute /* tic.Sensor2_Active DISCRETE */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_130(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_131(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_132(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_133(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_134(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_135(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_138(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_139(DATA *data, threadData_t *threadData);


/*
equation index: 33
type: SIMPLE_ASSIGN
$whenCondition1 = tic.Sensor1_Active and not $PRE.tic.Sensor1_Active
*/
void TrainCrossing_TrainIntersection_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->booleanVars[6] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[31] /* tic.Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[31] /* tic.Sensor1_Active DISCRETE */));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$whenCondition2 = tic.Sensor2_Active <> $PRE.tic.Sensor2_Active and not tic.Sensor2_Active and $PRE.tic.Sensor2_Active
*/
void TrainCrossing_TrainIntersection_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->booleanVars[17] /* $whenCondition2 DISCRETE */ = (((!data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */)) && ((!data->localData[0]->booleanVars[32] /* tic.Sensor2_Active DISCRETE */) && data->simulationInfo->booleanVarsPre[32] /* tic.Sensor2_Active DISCRETE */));
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$PRE.tic.Sensor2Output = $START.tic.Sensor2Output
*/
void TrainCrossing_TrainIntersection_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->integerVarsPre[5] /* tic.Sensor2Output DISCRETE */ = data->modelData->integerVarsData[5].attribute /* tic.Sensor2Output DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$PRE.tic.Sensor1Input = $START.tic.Sensor1Input
*/
void TrainCrossing_TrainIntersection_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->integerVarsPre[4] /* tic.Sensor1Input DISCRETE */ = data->modelData->integerVarsData[4].attribute /* tic.Sensor1Input DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
trainlight.Gate_Angle = $START.trainlight.Gate_Angle
*/
void TrainCrossing_TrainIntersection_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */ = data->modelData->realVarsData[12].attribute /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */.start;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
car2.speed = $START.car2.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ = data->modelData->realVarsData[8].attribute /* car2.speed STATE(1,car2.acceleration) */.start;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
car.distance = $START.car.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ = data->modelData->realVarsData[1].attribute /* car.distance STATE(1,car.speed) */.start;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
car.speed = $START.car.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ = data->modelData->realVarsData[2].attribute /* car.speed STATE(1,car.acceleration) */.start;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
car1.distance = $START.car1.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ = data->modelData->realVarsData[4].attribute /* car1.distance STATE(1,car1.speed) */.start;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
car1.speed = $START.car1.speed
*/
void TrainCrossing_TrainIntersection_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ = data->modelData->realVarsData[5].attribute /* car1.speed STATE(1,car1.acceleration) */.start;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
car2.distance = $START.car2.distance
*/
void TrainCrossing_TrainIntersection_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ = data->modelData->realVarsData[7].attribute /* car2.distance STATE(1,car2.speed) */.start;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
car2.BreakingDistance = 0.5 * (car2.speed / car2.breakingDeceleration) ^ 2.0 * car2.breakingDeceleration + TrainCrossing.TrainIntersection.car2.BreakCheck(3, car2.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_real tmp1;
  real_array tmp2;
  real_array tmp3;
  tmp1 = DIVISION_SIM(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */,data->simulationInfo->realParameter[11] /* car2.breakingDeceleration PARAM */,"car2.breakingDeceleration",equationIndexes);
  array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp3, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ = (0.5) * (((tmp1 * tmp1)) * (data->simulationInfo->realParameter[11] /* car2.breakingDeceleration PARAM */)) + omc_TrainCrossing_TrainIntersection_car2_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp2, tmp3);
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_188(DATA *data, threadData_t *threadData);


/*
equation index: 46
type: SIMPLE_ASSIGN
car1.BreakingDistance = 0.5 * (car1.speed / car1.breakingDeceleration) ^ 2.0 * car1.breakingDeceleration + TrainCrossing.TrainIntersection.car1.BreakCheck(3, car1.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_real tmp4;
  real_array tmp5;
  real_array tmp6;
  tmp4 = DIVISION_SIM(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */,data->simulationInfo->realParameter[6] /* car1.breakingDeceleration PARAM */,"car1.breakingDeceleration",equationIndexes);
  array_alloc_scalar_real_array(&tmp5, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ = (0.5) * (((tmp4 * tmp4)) * (data->simulationInfo->realParameter[6] /* car1.breakingDeceleration PARAM */)) + omc_TrainCrossing_TrainIntersection_car1_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp5, tmp6);
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_191(DATA *data, threadData_t *threadData);


/*
equation index: 48
type: SIMPLE_ASSIGN
car.BreakingDistance = 0.5 * (car.speed / car.breakingDeceleration) ^ 2.0 * car.breakingDeceleration + TrainCrossing.TrainIntersection.car.BreakCheck(3, car.distance, trainlight.Intersection, {car.distance, car1.distance, car2.distance}, {car.Length, car1.Length, car2.Length})
*/
void TrainCrossing_TrainIntersection_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_real tmp7;
  real_array tmp8;
  real_array tmp9;
  tmp7 = DIVISION_SIM(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */,data->simulationInfo->realParameter[1] /* car.breakingDeceleration PARAM */,"car.breakingDeceleration",equationIndexes);
  array_alloc_scalar_real_array(&tmp8, 3, (modelica_real)data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, (modelica_real)data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, (modelica_real)data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)data->simulationInfo->realParameter[0] /* car.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[5] /* car1.Length PARAM */, (modelica_real)data->simulationInfo->realParameter[10] /* car2.Length PARAM */);
  data->localData[0]->realVars[31] /* car.BreakingDistance variable */ = (0.5) * (((tmp7 * tmp7)) * (data->simulationInfo->realParameter[1] /* car.breakingDeceleration PARAM */)) + omc_TrainCrossing_TrainIntersection_car_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, tmp8, tmp9);
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_194(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_199(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_200(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_201(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_202(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_203(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_204(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_205(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_206(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_207(DATA *data, threadData_t *threadData);


/*
equation index: 59
type: SIMPLE_ASSIGN
tic.Sensor1Input = $PRE.tic.Sensor1Input
*/
void TrainCrossing_TrainIntersection_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->integerVars[4] /* tic.Sensor1Input DISCRETE */ = data->simulationInfo->integerVarsPre[4] /* tic.Sensor1Input DISCRETE */;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
tic.Sensor2Output = $PRE.tic.Sensor2Output
*/
void TrainCrossing_TrainIntersection_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->integerVars[5] /* tic.Sensor2Output DISCRETE */ = data->simulationInfo->integerVarsPre[5] /* tic.Sensor2Output DISCRETE */;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_142(DATA *data, threadData_t *threadData);


/*
equation index: 62
type: SIMPLE_ASSIGN
trainlight.Off.active = false
*/
void TrainCrossing_TrainIntersection_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->booleanVars[33] /* trainlight.Off.active DISCRETE */ = 0;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_148(DATA *data, threadData_t *threadData);


/*
equation index: 64
type: SIMPLE_ASSIGN
trainlight.Off.outerStatePort.subgraphStatePort.activeSteps = if trainlight.Off.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[35] /* trainlight.Off.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
$PRE.trainlight.Off.newActive = trainlight.Off.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->simulationInfo->booleanVarsPre[36] /* trainlight.Off.newActive DISCRETE */ = data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$PRE.trainlight.Off.localActive = $PRE.trainlight.Off.newActive
*/
void TrainCrossing_TrainIntersection_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->booleanVarsPre[35] /* trainlight.Off.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[36] /* trainlight.Off.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$PRE.trainlight.Off.oldActive = $PRE.trainlight.Off.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->simulationInfo->booleanVarsPre[37] /* trainlight.Off.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[35] /* trainlight.Off.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
trainlight.Off.oldActive = $PRE.trainlight.Off.oldActive
*/
void TrainCrossing_TrainIntersection_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->booleanVars[37] /* trainlight.Off.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[37] /* trainlight.Off.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
trainlight.Red.active = false
*/
void TrainCrossing_TrainIntersection_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->booleanVars[47] /* trainlight.Red.active DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$whenCondition16 = trainlight.Red.active
*/
void TrainCrossing_TrainIntersection_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->booleanVars[13] /* $whenCondition16 DISCRETE */ = data->localData[0]->booleanVars[47] /* trainlight.Red.active DISCRETE */;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
trainlight.Red.localActive = trainlight.Red.active
*/
void TrainCrossing_TrainIntersection_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */ = data->localData[0]->booleanVars[47] /* trainlight.Red.active DISCRETE */;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
trainlight.Red.outerStatePort.subgraphStatePort.activeSteps = if trainlight.Red.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[46] /* trainlight.Red.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
$PRE.trainlight.Red.newActive = trainlight.Red.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->simulationInfo->booleanVarsPre[49] /* trainlight.Red.newActive DISCRETE */ = data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
$PRE.trainlight.Red.localActive = $PRE.trainlight.Red.newActive
*/
void TrainCrossing_TrainIntersection_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->simulationInfo->booleanVarsPre[48] /* trainlight.Red.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[49] /* trainlight.Red.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$PRE.trainlight.Red.oldActive = $PRE.trainlight.Red.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->simulationInfo->booleanVarsPre[50] /* trainlight.Red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[48] /* trainlight.Red.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
trainlight.Red.oldActive = $PRE.trainlight.Red.oldActive
*/
void TrainCrossing_TrainIntersection_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->booleanVars[50] /* trainlight.Red.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[50] /* trainlight.Red.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
trainlight.On.active = true
*/
void TrainCrossing_TrainIntersection_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */ = 1;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_158(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_186(DATA *data, threadData_t *threadData);


/*
equation index: 80
type: SIMPLE_ASSIGN
trainlight.On.outerStatePort.subgraphStatePort.activeSteps = if trainlight.On.localActive then 1.0 else 0.0
*/
void TrainCrossing_TrainIntersection_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[39] /* trainlight.On.outerStatePort.subgraphStatePort.activeSteps variable */ = (data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */?1.0:0.0);
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_156(DATA *data, threadData_t *threadData);


/*
equation index: 82
type: SIMPLE_ASSIGN
trainlight.stateGraphRoot.activeSteps = -integer(trainlight.stateGraphRoot.subgraphStatePort.activeSteps)
*/
void TrainCrossing_TrainIntersection_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->integerVars[7] /* trainlight.stateGraphRoot.activeSteps DISCRETE */ = (-((modelica_integer)floor(data->localData[0]->realVars[53] /* trainlight.stateGraphRoot.subgraphStatePort.activeSteps variable */)));
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$PRE.trainlight.On.newActive = trainlight.On.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->simulationInfo->booleanVarsPre[42] /* trainlight.On.newActive DISCRETE */ = data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$PRE.trainlight.On.localActive = $PRE.trainlight.On.newActive
*/
void TrainCrossing_TrainIntersection_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->simulationInfo->booleanVarsPre[41] /* trainlight.On.localActive DISCRETE */ = data->simulationInfo->booleanVarsPre[42] /* trainlight.On.newActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$PRE.trainlight.On.oldActive = $PRE.trainlight.On.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->simulationInfo->booleanVarsPre[43] /* trainlight.On.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[41] /* trainlight.On.localActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
trainlight.On.oldActive = $PRE.trainlight.On.oldActive
*/
void TrainCrossing_TrainIntersection_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->booleanVars[43] /* trainlight.On.oldActive DISCRETE */ = data->simulationInfo->booleanVarsPre[43] /* trainlight.On.oldActive DISCRETE */;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
trainlight.OnToRed.enableFire = not trainlight.RedToOn.condition and trainlight.On.localActive and not trainlight.Red.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */ = (((!data->localData[0]->booleanVars[53] /* trainlight.RedToOn.condition DISCRETE */) && data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */) && (!data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
trainlight.On.outPort[2].available = trainlight.On.localActive and not trainlight.OnToRed.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->booleanVars[44] /* trainlight.On.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */ && (!data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */));
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
trainlight.OnToOff.enableFire = trainlight.Failure and trainlight.On.outPort[2].available and not trainlight.Off.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */ = ((data->simulationInfo->booleanParameter[4] /* trainlight.Failure PARAM */ && data->localData[0]->booleanVars[44] /* trainlight.On.outPort[2].available DISCRETE */) && (!data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
trainlight.Off.inPort[2].occupied = trainlight.Off.localActive or trainlight.OnToOff.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->booleanVars[34] /* trainlight.Off.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */ || data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */);
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
trainlight.RedToOn.enableFire = trainlight.RedToOn.condition and trainlight.Red.localActive and not trainlight.On.localActive
*/
void TrainCrossing_TrainIntersection_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */ = ((data->localData[0]->booleanVars[53] /* trainlight.RedToOn.condition DISCRETE */ && data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */) && (!data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */));
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
trainlight.On.inPort[2].occupied = trainlight.On.localActive or trainlight.RedToOn.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->booleanVars[40] /* trainlight.On.inPort[2].occupied DISCRETE */ = (data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */ || data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */);
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
trainlight.OffToOn.enableFire = not trainlight.Failure and trainlight.Off.localActive and not trainlight.On.inPort[2].occupied
*/
void TrainCrossing_TrainIntersection_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */ = (((!data->simulationInfo->booleanParameter[4] /* trainlight.Failure PARAM */) && data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */) && (!data->localData[0]->booleanVars[40] /* trainlight.On.inPort[2].occupied DISCRETE */));
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
trainlight.On.newActive = Modelica.StateGraph.Temporary.anyTrue({trainlight.RedToOn.enableFire, trainlight.OffToOn.enableFire}) or trainlight.On.localActive and not Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToRed.enableFire, trainlight.OnToOff.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  boolean_array tmp10;
  boolean_array tmp11;
  array_alloc_scalar_boolean_array(&tmp10, 2, (modelica_boolean)data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp11, 2, (modelica_boolean)data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[42] /* trainlight.On.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp10) || (data->localData[0]->booleanVars[41] /* trainlight.On.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp11))));
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
trainlight.Red.outPort[2].available = trainlight.Red.localActive and not trainlight.RedToOn.enableFire
*/
void TrainCrossing_TrainIntersection_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->booleanVars[51] /* trainlight.Red.outPort[2].available DISCRETE */ = (data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */ && (!data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */));
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_178(DATA *data, threadData_t *threadData);


/*
equation index: 97
type: SIMPLE_ASSIGN
trainlight.Red.newActive = Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToRed.enableFire}) or trainlight.Red.localActive and not Modelica.StateGraph.Temporary.anyTrue({trainlight.RedToOn.enableFire, trainlight.RedToOff.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  boolean_array tmp12;
  boolean_array tmp13;
  array_alloc_scalar_boolean_array(&tmp12, 1, (modelica_boolean)data->localData[0]->booleanVars[46] /* trainlight.OnToRed.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp13, 2, (modelica_boolean)data->localData[0]->booleanVars[54] /* trainlight.RedToOn.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[52] /* trainlight.RedToOff.enableFire DISCRETE */);
  data->localData[0]->booleanVars[49] /* trainlight.Red.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp12) || (data->localData[0]->booleanVars[48] /* trainlight.Red.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp13))));
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
trainlight.Off.newActive = Modelica.StateGraph.Temporary.anyTrue({trainlight.OnToOff.enableFire, trainlight.RedToOff.enableFire}) or trainlight.Off.localActive and not Modelica.StateGraph.Temporary.anyTrue({trainlight.OffToOn.enableFire})
*/
void TrainCrossing_TrainIntersection_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  boolean_array tmp14;
  boolean_array tmp15;
  array_alloc_scalar_boolean_array(&tmp14, 2, (modelica_boolean)data->localData[0]->booleanVars[45] /* trainlight.OnToOff.enableFire DISCRETE */, (modelica_boolean)data->localData[0]->booleanVars[52] /* trainlight.RedToOff.enableFire DISCRETE */);
  array_alloc_scalar_boolean_array(&tmp15, 1, (modelica_boolean)data->localData[0]->booleanVars[38] /* trainlight.OffToOn.enableFire DISCRETE */);
  data->localData[0]->booleanVars[36] /* trainlight.Off.newActive DISCRETE */ = (omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp14) || (data->localData[0]->booleanVars[35] /* trainlight.Off.localActive DISCRETE */ && (!omc_Modelica_StateGraph_Temporary_anyTrue(threadData, tmp15))));
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
trainlight.state = if trainlight.Red.active then TrainCrossing.TrainLightColor.red else if trainlight.On.active then TrainCrossing.TrainLightColor.on else TrainCrossing.TrainLightColor.off
*/
void TrainCrossing_TrainIntersection_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */ = (data->localData[0]->booleanVars[47] /* trainlight.Red.active DISCRETE */?2:(data->localData[0]->booleanVars[39] /* trainlight.On.active DISCRETE */?1:3));
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_160(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_165(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_166(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_210(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_163(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_164(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_213(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_161(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_162(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_216(DATA *data, threadData_t *threadData);


/*
equation index: 110
type: SIMPLE_ASSIGN
trainlight.Gate_Rotation = $START.trainlight.Gate_Rotation
*/
void TrainCrossing_TrainIntersection_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[13] /* trainlight.Gate_Rotation STATE(1) */ = data->modelData->realVarsData[13].attribute /* trainlight.Gate_Rotation STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_143(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_144(DATA *data, threadData_t *threadData);


/*
equation index: 113
type: SIMPLE_ASSIGN
car2.acceleration = $START.car2.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[6] /* car2.acceleration STATE(1) */ = data->modelData->realVarsData[6].attribute /* car2.acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_187(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_189(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
car1.acceleration = $START.car1.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[3] /* car1.acceleration STATE(1) */ = data->modelData->realVarsData[3].attribute /* car1.acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_190(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_192(DATA *data, threadData_t *threadData);


/*
equation index: 119
type: SIMPLE_ASSIGN
car.acceleration = $START.car.acceleration
*/
void TrainCrossing_TrainIntersection_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[0] /* car.acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* car.acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersection_eqFunction_193(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_195(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_196(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_197(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_198(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: SIMPLE_ASSIGN
$PRE.trainlight.RedToOff.enableFire = false
*/
void TrainCrossing_TrainIntersection_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->booleanVarsPre[52] /* trainlight.RedToOff.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
$PRE.trainlight.RedToOn.enableFire = false
*/
void TrainCrossing_TrainIntersection_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->booleanVarsPre[54] /* trainlight.RedToOn.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
$PRE.trainlight.OffToOn.enableFire = false
*/
void TrainCrossing_TrainIntersection_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->booleanVarsPre[38] /* trainlight.OffToOn.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
$PRE.trainlight.OnToOff.enableFire = false
*/
void TrainCrossing_TrainIntersection_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->booleanVarsPre[45] /* trainlight.OnToOff.enableFire DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
$PRE.trainlight.OnToRed.enableFire = false
*/
void TrainCrossing_TrainIntersection_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->booleanVarsPre[46] /* trainlight.OnToRed.enableFire DISCRETE */ = 0;
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_TrainIntersection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_TrainIntersection_eqFunction_1(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_2(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_3(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_4(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_5(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_6(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_7(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_8(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_9(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_10(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_11(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_12(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_13(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_14(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_15(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_16(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_17(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_18(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_19(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_20(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_21(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_22(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_23(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_24(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_130(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_131(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_132(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_133(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_134(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_135(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_138(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_139(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_33(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_34(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_35(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_36(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_37(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_38(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_39(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_40(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_41(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_42(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_43(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_44(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_188(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_46(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_191(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_48(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_194(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_199(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_200(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_201(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_202(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_203(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_204(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_205(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_206(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_207(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_59(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_60(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_142(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_62(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_148(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_64(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_65(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_66(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_67(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_68(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_69(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_70(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_71(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_72(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_73(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_74(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_75(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_76(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_77(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_158(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_186(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_80(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_156(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_82(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_83(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_84(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_85(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_86(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_87(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_88(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_89(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_90(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_91(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_92(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_93(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_94(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_95(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_178(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_97(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_98(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_99(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_160(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_165(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_166(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_210(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_163(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_164(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_213(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_161(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_162(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_216(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_110(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_143(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_144(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_113(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_187(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_189(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_116(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_190(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_192(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_119(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_193(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_195(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_196(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_197(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_198(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_125(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_126(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_127(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_128(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_129(data, threadData);
  TRACE_POP
}


int TrainCrossing_TrainIntersection_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainIntersection_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainIntersection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainIntersection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

