/* Initialization */
#include "TrainCrossing_Train_model.h"
#include "TrainCrossing_Train_11mix.h"
#include "TrainCrossing_Train_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
distance = $START.distance
*/
void TrainCrossing_Train_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* distance STATE(1,maxSpeed) */ = data->modelData->realVarsData[0].attribute /* distance STATE(1,maxSpeed) */.start;
  TRACE_POP
}
extern void TrainCrossing_Train_eqFunction_3(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Train_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Train_eqFunction_1(data, threadData);
  TrainCrossing_Train_eqFunction_3(data, threadData);
  TRACE_POP
}


int TrainCrossing_Train_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Train_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_Train_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_Train_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

