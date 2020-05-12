/* Initialization */
#include "TrainCrossing_SensorFailInjector_model.h"
#include "TrainCrossing_SensorFailInjector_11mix.h"
#include "TrainCrossing_SensorFailInjector_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_SensorFailInjector_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
$PRE.$outputAlias_Sensorfail = $START.$outputAlias_Sensorfail
*/
void TrainCrossing_SensorFailInjector_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->simulationInfo->booleanVarsPre[0] /* $outputAlias_Sensorfail DISCRETE */ = data->modelData->booleanVarsData[0].attribute /* $outputAlias_Sensorfail DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
$outputAlias_Sensorfail = $PRE.$outputAlias_Sensorfail
*/
void TrainCrossing_SensorFailInjector_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[0] /* $outputAlias_Sensorfail DISCRETE */ = data->simulationInfo->booleanVarsPre[0] /* $outputAlias_Sensorfail DISCRETE */;
  TRACE_POP
}
extern void TrainCrossing_SensorFailInjector_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainCrossing_SensorFailInjector_eqFunction_5(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_SensorFailInjector_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_SensorFailInjector_eqFunction_1(data, threadData);
  TrainCrossing_SensorFailInjector_eqFunction_2(data, threadData);
  TrainCrossing_SensorFailInjector_eqFunction_7(data, threadData);
  TrainCrossing_SensorFailInjector_eqFunction_5(data, threadData);
  TRACE_POP
}


int TrainCrossing_SensorFailInjector_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_SensorFailInjector_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_SensorFailInjector_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_SensorFailInjector_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

