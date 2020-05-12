/* Algebraic */
#include "TrainCrossing_Sensors_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Sensors_eqFunction_61(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_40(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_41(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_44(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_45(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_47(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_48(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_49(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_50(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_51(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_52(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_53(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_54(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_55(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_56(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_57(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_60(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
    TrainCrossing_Sensors_eqFunction_61(data, threadData);

    TrainCrossing_Sensors_eqFunction_34(data, threadData);

    TrainCrossing_Sensors_eqFunction_35(data, threadData);

    TrainCrossing_Sensors_eqFunction_36(data, threadData);

    TrainCrossing_Sensors_eqFunction_37(data, threadData);

    TrainCrossing_Sensors_eqFunction_38(data, threadData);

    TrainCrossing_Sensors_eqFunction_39(data, threadData);

    TrainCrossing_Sensors_eqFunction_40(data, threadData);

    TrainCrossing_Sensors_eqFunction_41(data, threadData);

    TrainCrossing_Sensors_eqFunction_42(data, threadData);

    TrainCrossing_Sensors_eqFunction_43(data, threadData);

    TrainCrossing_Sensors_eqFunction_44(data, threadData);

    TrainCrossing_Sensors_eqFunction_45(data, threadData);

    TrainCrossing_Sensors_eqFunction_46(data, threadData);

    TrainCrossing_Sensors_eqFunction_47(data, threadData);

    TrainCrossing_Sensors_eqFunction_48(data, threadData);

    TrainCrossing_Sensors_eqFunction_49(data, threadData);

    TrainCrossing_Sensors_eqFunction_50(data, threadData);

    TrainCrossing_Sensors_eqFunction_51(data, threadData);

    TrainCrossing_Sensors_eqFunction_52(data, threadData);

    TrainCrossing_Sensors_eqFunction_53(data, threadData);

    TrainCrossing_Sensors_eqFunction_54(data, threadData);

    TrainCrossing_Sensors_eqFunction_55(data, threadData);

    TrainCrossing_Sensors_eqFunction_56(data, threadData);

    TrainCrossing_Sensors_eqFunction_57(data, threadData);

    TrainCrossing_Sensors_eqFunction_60(data, threadData);
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
