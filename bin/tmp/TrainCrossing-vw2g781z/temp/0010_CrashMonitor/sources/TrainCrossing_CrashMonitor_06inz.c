/* Initialization */
#include "TrainCrossing_CrashMonitor_model.h"
#include "TrainCrossing_CrashMonitor_11mix.h"
#include "TrainCrossing_CrashMonitor_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_CrashMonitor_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_CrashMonitor_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_CrashMonitor_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainCrossing_CrashMonitor_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainCrossing_CrashMonitor_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_CrashMonitor_eqFunction_15(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
$whenCondition1 = TrainCrossing.CrashMonitor.Danger(3, CarDanger) and TrainCrossing.CrashMonitor.Danger(2, TrainDanger)
*/
void TrainCrossing_CrashMonitor_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  boolean_array tmp0;
  boolean_array tmp1;
  boolean_array_create(&tmp0, ((modelica_boolean*)&((&data->localData[0]->booleanVars[4] /* CarDanger[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  boolean_array_create(&tmp1, ((modelica_boolean*)&((&data->localData[0]->booleanVars[8] /* TrainDanger[1] DISCRETE */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  data->localData[0]->booleanVars[3] /* $whenCondition1 DISCRETE */ = (omc_TrainCrossing_CrashMonitor_Danger(threadData, ((modelica_integer) 3), tmp0) && omc_TrainCrossing_CrashMonitor_Danger(threadData, ((modelica_integer) 2), tmp1));
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
$PRE.$outputAlias_Failure = $START.$outputAlias_Failure
*/
void TrainCrossing_CrashMonitor_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->booleanVarsPre[2] /* $outputAlias_Failure DISCRETE */ = data->modelData->booleanVarsData[2].attribute /* $outputAlias_Failure DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$outputAlias_Failure = $PRE.$outputAlias_Failure
*/
void TrainCrossing_CrashMonitor_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->booleanVars[2] /* $outputAlias_Failure DISCRETE */ = data->simulationInfo->booleanVarsPre[2] /* $outputAlias_Failure DISCRETE */;
  TRACE_POP
}
extern void TrainCrossing_CrashMonitor_eqFunction_19(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_CrashMonitor_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_CrashMonitor_eqFunction_10(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_11(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_13(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_14(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_15(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_6(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_7(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_8(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_19(data, threadData);
  TRACE_POP
}


int TrainCrossing_CrashMonitor_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_CrashMonitor_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_CrashMonitor_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_CrashMonitor_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

