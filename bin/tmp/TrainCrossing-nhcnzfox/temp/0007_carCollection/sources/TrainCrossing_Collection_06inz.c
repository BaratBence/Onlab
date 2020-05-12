/* Initialization */
#include "TrainCrossing_Collection_model.h"
#include "TrainCrossing_Collection_11mix.h"
#include "TrainCrossing_Collection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_38(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_37(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_35(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_31(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_30(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_29(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_28(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_27(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_21(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Collection_eqFunction_40(data, threadData);
  TrainCrossing_Collection_eqFunction_39(data, threadData);
  TrainCrossing_Collection_eqFunction_38(data, threadData);
  TrainCrossing_Collection_eqFunction_37(data, threadData);
  TrainCrossing_Collection_eqFunction_36(data, threadData);
  TrainCrossing_Collection_eqFunction_35(data, threadData);
  TrainCrossing_Collection_eqFunction_34(data, threadData);
  TrainCrossing_Collection_eqFunction_33(data, threadData);
  TrainCrossing_Collection_eqFunction_32(data, threadData);
  TrainCrossing_Collection_eqFunction_31(data, threadData);
  TrainCrossing_Collection_eqFunction_30(data, threadData);
  TrainCrossing_Collection_eqFunction_29(data, threadData);
  TrainCrossing_Collection_eqFunction_28(data, threadData);
  TrainCrossing_Collection_eqFunction_27(data, threadData);
  TrainCrossing_Collection_eqFunction_26(data, threadData);
  TrainCrossing_Collection_eqFunction_25(data, threadData);
  TrainCrossing_Collection_eqFunction_24(data, threadData);
  TrainCrossing_Collection_eqFunction_23(data, threadData);
  TrainCrossing_Collection_eqFunction_22(data, threadData);
  TrainCrossing_Collection_eqFunction_21(data, threadData);
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

