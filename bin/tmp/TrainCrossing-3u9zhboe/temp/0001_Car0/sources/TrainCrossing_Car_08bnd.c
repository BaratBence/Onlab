/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainCrossing_Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 27
type: SIMPLE_ASSIGN
$START.speed = maxSpeed
*/
OMC_DISABLE_OPT
static void TrainCrossing_Car_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start = data->simulationInfo->realParameter[4] /* maxSpeed PARAM */;
    data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ = data->modelData->realVarsData[2].attribute /* speed STATE(1,acceleration) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* speed */.name, (modelica_real) data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
$START.distance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_Car_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start = data->simulationInfo->realParameter[2] /* distanceStart PARAM */;
    data->localData[0]->realVars[1] /* distance STATE(1,speed) */ = data->modelData->realVarsData[1].attribute /* distance STATE(1,speed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* distance */.name, (modelica_real) data->localData[0]->realVars[1] /* distance STATE(1,speed) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_Car_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  TrainCrossing_Car_eqFunction_27(data, threadData);

  TrainCrossing_Car_eqFunction_28(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TrainCrossing_Car_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* isClumsy PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

