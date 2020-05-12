/* Algebraic */
#include "TrainCrossing.Car_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_18(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_24(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_25(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_26(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_28(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_29(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_30(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Car_eqFunction_17(data, threadData);

    TrainCrossing_Car_eqFunction_18(data, threadData);

    TrainCrossing_Car_eqFunction_22(data, threadData);

    TrainCrossing_Car_eqFunction_23(data, threadData);

    TrainCrossing_Car_eqFunction_24(data, threadData);

    TrainCrossing_Car_eqFunction_25(data, threadData);

    TrainCrossing_Car_eqFunction_26(data, threadData);

    TrainCrossing_Car_eqFunction_27(data, threadData);

    TrainCrossing_Car_eqFunction_28(data, threadData);

    TrainCrossing_Car_eqFunction_29(data, threadData);

    TrainCrossing_Car_eqFunction_34(data, threadData);

    TrainCrossing_Car_eqFunction_33(data, threadData);

    TrainCrossing_Car_eqFunction_32(data, threadData);

    TrainCrossing_Car_eqFunction_31(data, threadData);

    TrainCrossing_Car_eqFunction_30(data, threadData);
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
