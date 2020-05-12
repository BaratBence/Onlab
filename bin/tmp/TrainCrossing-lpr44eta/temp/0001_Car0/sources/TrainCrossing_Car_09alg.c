/* Algebraic */
#include "TrainCrossing_Car_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_13(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_14(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_15(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_16(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_21(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_26(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_25(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_24(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_23(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Car_eqFunction_13(data, threadData);

    TrainCrossing_Car_eqFunction_14(data, threadData);

    TrainCrossing_Car_eqFunction_15(data, threadData);

    TrainCrossing_Car_eqFunction_16(data, threadData);

    TrainCrossing_Car_eqFunction_20(data, threadData);

    TrainCrossing_Car_eqFunction_21(data, threadData);

    TrainCrossing_Car_eqFunction_22(data, threadData);

    TrainCrossing_Car_eqFunction_26(data, threadData);

    TrainCrossing_Car_eqFunction_25(data, threadData);

    TrainCrossing_Car_eqFunction_24(data, threadData);

    TrainCrossing_Car_eqFunction_23(data, threadData);
}
/* for continuous time variables */
int TrainCrossing_Car_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainCrossing_Car_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
