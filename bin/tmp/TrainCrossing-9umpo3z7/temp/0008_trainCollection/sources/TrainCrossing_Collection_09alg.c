/* Algebraic */
#include "TrainCrossing_Collection_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Collection_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_16(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_15(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_14(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_13(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Collection_eqFunction_18(data, threadData);

    TrainCrossing_Collection_eqFunction_17(data, threadData);

    TrainCrossing_Collection_eqFunction_16(data, threadData);

    TrainCrossing_Collection_eqFunction_15(data, threadData);

    TrainCrossing_Collection_eqFunction_14(data, threadData);

    TrainCrossing_Collection_eqFunction_13(data, threadData);
}
/* for continuous time variables */
int TrainCrossing_Collection_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainCrossing_Collection_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
