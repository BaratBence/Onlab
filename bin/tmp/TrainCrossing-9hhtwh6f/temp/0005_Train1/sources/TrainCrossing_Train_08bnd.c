/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainCrossing_Train_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 4
type: SIMPLE_ASSIGN
$START.distance = distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_Train_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->modelData->realVarsData[0].attribute /* distance STATE(1,maxSpeed) */.start = data->simulationInfo->realParameter[1] /* distanceStart PARAM */;
    data->localData[0]->realVars[0] /* distance STATE(1,maxSpeed) */ = data->modelData->realVarsData[0].attribute /* distance STATE(1,maxSpeed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* distance */.name, (modelica_real) data->localData[0]->realVars[0] /* distance STATE(1,maxSpeed) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_Train_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  TrainCrossing_Train_eqFunction_4(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TrainCrossing_Train_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

