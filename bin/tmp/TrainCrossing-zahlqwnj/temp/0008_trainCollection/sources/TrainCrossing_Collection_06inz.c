/* Initialization */
#include "TrainCrossing_Collection_model.h"
#include "TrainCrossing_Collection_11mix.h"
#include "TrainCrossing_Collection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_7(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Collection_eqFunction_12(data, threadData);
  TrainCrossing_Collection_eqFunction_11(data, threadData);
  TrainCrossing_Collection_eqFunction_10(data, threadData);
  TrainCrossing_Collection_eqFunction_9(data, threadData);
  TrainCrossing_Collection_eqFunction_8(data, threadData);
  TrainCrossing_Collection_eqFunction_7(data, threadData);
  TRACE_POP
}


int TrainCrossing_Collection_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Collection_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_Collection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_Collection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

