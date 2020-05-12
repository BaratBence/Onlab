/* Initialization */
#include "TrainCrossing_Sensors_model.h"
#include "TrainCrossing_Sensors_11mix.h"
#include "TrainCrossing_Sensors_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Sensors_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
$outputAlias_Intersection = 0.5 * (Sensor1Position + Sensor2Position)
*/
void TrainCrossing_Sensors_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* $outputAlias_Intersection variable */ = (0.5) * (data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_11(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Sensors_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Sensors_eqFunction_1(data, threadData);
  TrainCrossing_Sensors_eqFunction_15(data, threadData);
  TrainCrossing_Sensors_eqFunction_13(data, threadData);
  TrainCrossing_Sensors_eqFunction_12(data, threadData);
  TrainCrossing_Sensors_eqFunction_14(data, threadData);
  TrainCrossing_Sensors_eqFunction_10(data, threadData);
  TrainCrossing_Sensors_eqFunction_9(data, threadData);
  TrainCrossing_Sensors_eqFunction_11(data, threadData);
  TRACE_POP
}


int TrainCrossing_Sensors_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Sensors_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_Sensors_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_Sensors_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

