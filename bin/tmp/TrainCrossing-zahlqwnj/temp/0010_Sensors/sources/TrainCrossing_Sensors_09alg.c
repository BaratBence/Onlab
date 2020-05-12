/* Algebraic */
#include "TrainCrossing_Sensors_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Sensors_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_21(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_24(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_25(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_26(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_28(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_29(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_32(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Sensors_eqFunction_33(data, threadData);

    TrainCrossing_Sensors_eqFunction_20(data, threadData);

    TrainCrossing_Sensors_eqFunction_21(data, threadData);

    TrainCrossing_Sensors_eqFunction_22(data, threadData);

    TrainCrossing_Sensors_eqFunction_23(data, threadData);

    TrainCrossing_Sensors_eqFunction_24(data, threadData);

    TrainCrossing_Sensors_eqFunction_25(data, threadData);

    TrainCrossing_Sensors_eqFunction_26(data, threadData);

    TrainCrossing_Sensors_eqFunction_27(data, threadData);

    TrainCrossing_Sensors_eqFunction_28(data, threadData);

    TrainCrossing_Sensors_eqFunction_29(data, threadData);

    TrainCrossing_Sensors_eqFunction_32(data, threadData);
}
/* for continuous time variables */
int TrainCrossing_Sensors_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  functionAlg_system0(data, threadData);

  TrainCrossing_Sensors_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
