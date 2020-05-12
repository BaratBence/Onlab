/* Algebraic */
#include "TrainCrossing_Car_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_21(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_28(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_30(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_29(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Car_eqFunction_19(data, threadData);

    TrainCrossing_Car_eqFunction_20(data, threadData);

    TrainCrossing_Car_eqFunction_21(data, threadData);

    TrainCrossing_Car_eqFunction_22(data, threadData);

    TrainCrossing_Car_eqFunction_23(data, threadData);

    TrainCrossing_Car_eqFunction_27(data, threadData);

    TrainCrossing_Car_eqFunction_28(data, threadData);

    TrainCrossing_Car_eqFunction_32(data, threadData);

    TrainCrossing_Car_eqFunction_31(data, threadData);

    TrainCrossing_Car_eqFunction_30(data, threadData);

    TrainCrossing_Car_eqFunction_29(data, threadData);
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
