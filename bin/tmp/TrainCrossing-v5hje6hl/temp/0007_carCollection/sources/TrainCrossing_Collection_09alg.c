/* Algebraic */
#include "TrainCrossing_Collection_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TrainCrossing_Collection_eqFunction_40(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_30(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_29(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_28(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_26(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_25(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_24(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_22(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Collection_eqFunction_21(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
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
