/* Initialization */
#include "TrainCrossing_Car_model.h"
#include "TrainCrossing_Car_11mix.h"
#include "TrainCrossing_Car_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainCrossing_Car_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
speed = $START.speed
*/
void TrainCrossing_Car_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_19(DATA *data, threadData_t *threadData);


/*
equation index: 5
type: SIMPLE_ASSIGN
BreakingDistance = 0.5 * (speed / breakingDeceleration) ^ 2.0 * breakingDeceleration + TrainCrossing.Car.BreakCheck(10, distance, Target, DistanceVec, LengthVec)
*/
void TrainCrossing_Car_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  modelica_real tmp0;
  real_array tmp1;
  real_array tmp2;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */,"breakingDeceleration",equationIndexes);
  real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[9] /* DistanceVec[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  real_array_create(&tmp2, ((modelica_real*)&((&data->localData[0]->realVars[21] /* LengthVec[1] variable */)[calc_base_index_dims_subs(1, 10, ((modelica_integer) 1))])), 1, 10);
  data->localData[0]->realVars[7] /* BreakingDistance variable */ = (0.5) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */)) + omc_TrainCrossing_Car_BreakCheck(threadData, ((modelica_integer) 10), data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[31] /* Target variable */, tmp1, tmp2);
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_28(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_18(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
acceleration = $START.acceleration
*/
void TrainCrossing_Car_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_20(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Car_eqFunction_1(data, threadData);
  TrainCrossing_Car_eqFunction_2(data, threadData);
  TrainCrossing_Car_eqFunction_16(data, threadData);
  TrainCrossing_Car_eqFunction_19(data, threadData);
  TrainCrossing_Car_eqFunction_5(data, threadData);
  TrainCrossing_Car_eqFunction_21(data, threadData);
  TrainCrossing_Car_eqFunction_23(data, threadData);
  TrainCrossing_Car_eqFunction_24(data, threadData);
  TrainCrossing_Car_eqFunction_28(data, threadData);
  TrainCrossing_Car_eqFunction_17(data, threadData);
  TrainCrossing_Car_eqFunction_25(data, threadData);
  TrainCrossing_Car_eqFunction_22(data, threadData);
  TrainCrossing_Car_eqFunction_18(data, threadData);
  TrainCrossing_Car_eqFunction_14(data, threadData);
  TrainCrossing_Car_eqFunction_20(data, threadData);
  TRACE_POP
}


int TrainCrossing_Car_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Car_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_Car_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_Car_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

