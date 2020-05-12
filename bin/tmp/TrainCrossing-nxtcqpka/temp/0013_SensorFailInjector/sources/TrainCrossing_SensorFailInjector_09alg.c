/* Algebraic */
#include "TrainCrossing_SensorFailInjector_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_SensorFailInjector_eqFunction_5(DATA* data, threadData_t *threadData);
extern void TrainCrossing_SensorFailInjector_eqFunction_7(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_SensorFailInjector_eqFunction_5(data, threadData);

    TrainCrossing_SensorFailInjector_eqFunction_7(data, threadData);
}
/* for continuous time variables */
int TrainCrossing_SensorFailInjector_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainCrossing_SensorFailInjector_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
