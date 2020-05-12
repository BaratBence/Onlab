/* Initialization */
#include "TrainCrossing.Car_model.h"
#include "TrainCrossing.Car_11mix.h"
#include "TrainCrossing.Car_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
tmp = 2.0 * isClumsy
*/
void TrainCrossing_Car_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[18] /* tmp variable */ = (2.0) * (data->simulationInfo->realParameter[2] /* isClumsy PARAM */);
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainCrossing_Car_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
speed = $START.speed
*/
void TrainCrossing_Car_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_20(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
BreakingDistance = 0.5 * (speed / breakingDeceleration) ^ 2.0 * breakingDeceleration + TrainCrossing.Car.BreakCheck(3, distance, Target, DistanceVec, LengthVec)
*/
void TrainCrossing_Car_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  modelica_real tmp0;
  real_array tmp1;
  real_array tmp2;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */,data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */,"breakingDeceleration",equationIndexes);
  real_array_create(&tmp1, ((modelica_real*)&((&data->localData[0]->realVars[9] /* DistanceVec[1] variable */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  real_array_create(&tmp2, ((modelica_real*)&((&data->localData[0]->realVars[14] /* LengthVec[1] variable */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->realVars[7] /* BreakingDistance variable */ = (0.5) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[0] /* breakingDeceleration PARAM */)) + omc_TrainCrossing_Car_BreakCheck(threadData, ((modelica_integer) 3), data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, tmp1, tmp2);
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_29(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Car_eqFunction_19(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
acceleration = $START.acceleration
*/
void TrainCrossing_Car_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[0] /* acceleration STATE(1) */ = data->modelData->realVarsData[0].attribute /* acceleration STATE(1) */.start;
  TRACE_POP
}
extern void TrainCrossing_Car_eqFunction_21(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Car_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Car_eqFunction_1(data, threadData);
  TrainCrossing_Car_eqFunction_2(data, threadData);
  TrainCrossing_Car_eqFunction_3(data, threadData);
  TrainCrossing_Car_eqFunction_17(data, threadData);
  TrainCrossing_Car_eqFunction_20(data, threadData);
  TrainCrossing_Car_eqFunction_6(data, threadData);
  TrainCrossing_Car_eqFunction_22(data, threadData);
  TrainCrossing_Car_eqFunction_23(data, threadData);
  TrainCrossing_Car_eqFunction_25(data, threadData);
  TrainCrossing_Car_eqFunction_29(data, threadData);
  TrainCrossing_Car_eqFunction_18(data, threadData);
  TrainCrossing_Car_eqFunction_26(data, threadData);
  TrainCrossing_Car_eqFunction_24(data, threadData);
  TrainCrossing_Car_eqFunction_19(data, threadData);
  TrainCrossing_Car_eqFunction_15(data, threadData);
  TrainCrossing_Car_eqFunction_21(data, threadData);
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

