/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainCrossing_Sensors_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainCrossing_Sensors_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainCrossing_Sensors_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_Sensors_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_1(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Sensors_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Sensors_eqFunction_15(data, threadData);
  TrainCrossing_Sensors_eqFunction_14(data, threadData);
  TrainCrossing_Sensors_eqFunction_13(data, threadData);
  TrainCrossing_Sensors_eqFunction_12(data, threadData);
  TrainCrossing_Sensors_eqFunction_11(data, threadData);
  TrainCrossing_Sensors_eqFunction_10(data, threadData);
  TrainCrossing_Sensors_eqFunction_9(data, threadData);
  TrainCrossing_Sensors_eqFunction_7(data, threadData);
  TrainCrossing_Sensors_eqFunction_3(data, threadData);
  TrainCrossing_Sensors_eqFunction_6(data, threadData);
  TrainCrossing_Sensors_eqFunction_2(data, threadData);
  TrainCrossing_Sensors_eqFunction_5(data, threadData);
  TrainCrossing_Sensors_eqFunction_1(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_Sensors_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* SensorFail PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  TrainCrossing_Sensors_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

