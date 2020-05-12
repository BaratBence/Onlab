/* Initialization */
#include "TrainCrossing_TrainIntersectionController_model.h"
#include "TrainCrossing_TrainIntersectionController_11mix.h"
#include "TrainCrossing_TrainIntersectionController_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_TrainIntersectionController_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
$PRE.Sensor2Output = $START.Sensor2Output
*/
void TrainCrossing_TrainIntersectionController_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */ = data->modelData->integerVarsData[1].attribute /* Sensor2Output DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
$PRE.Sensor1Input = $START.Sensor1Input
*/
void TrainCrossing_TrainIntersectionController_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */ = data->modelData->integerVarsData[0].attribute /* Sensor1Input DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
Sensor1Input = $PRE.Sensor1Input
*/
void TrainCrossing_TrainIntersectionController_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
Sensor2Output = $PRE.Sensor2Output
*/
void TrainCrossing_TrainIntersectionController_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  TRACE_POP
}
extern void TrainCrossing_TrainIntersectionController_eqFunction_14(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
$PRE.Sensor1_Active = Sensor1_Active
*/
void TrainCrossing_TrainIntersectionController_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->booleanVarsPre[3] /* Sensor1_Active variable */ = data->localData[0]->booleanVars[3] /* Sensor1_Active variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
$whenCondition1 = Sensor1_Active and not $PRE.Sensor1_Active
*/
void TrainCrossing_TrainIntersectionController_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[3] /* Sensor1_Active variable */ && (!data->simulationInfo->booleanVarsPre[3] /* Sensor1_Active variable */));
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$PRE.Sensor2_Active = Sensor2_Active
*/
void TrainCrossing_TrainIntersectionController_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active variable */ = data->localData[0]->booleanVars[4] /* Sensor2_Active variable */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$whenCondition2 = Sensor2_Active <> $PRE.Sensor2_Active and not Sensor2_Active and $PRE.Sensor2_Active
*/
void TrainCrossing_TrainIntersectionController_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (((!data->localData[0]->booleanVars[4] /* Sensor2_Active variable */ && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active variable */) || (data->localData[0]->booleanVars[4] /* Sensor2_Active variable */ && !data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active variable */)) && ((!data->localData[0]->booleanVars[4] /* Sensor2_Active variable */) && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active variable */));
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_TrainIntersectionController_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_TrainIntersectionController_eqFunction_1(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_2(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_3(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_4(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_14(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_6(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_7(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_8(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_9(data, threadData);
  TRACE_POP
}


int TrainCrossing_TrainIntersectionController_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainIntersectionController_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainIntersectionController_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainIntersectionController_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

