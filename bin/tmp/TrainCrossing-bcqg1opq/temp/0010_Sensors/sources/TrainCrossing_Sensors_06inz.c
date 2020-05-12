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
extern void TrainCrossing_Sensors_eqFunction_33(DATA *data, threadData_t *threadData);


/*
equation index: 3
type: SIMPLE_ASSIGN
$PRE.Sensor2Output = $START.Sensor2Output
*/
void TrainCrossing_Sensors_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */ = data->modelData->integerVarsData[1].attribute /* Sensor2Output DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
$PRE.Sensor1Input = $START.Sensor1Input
*/
void TrainCrossing_Sensors_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */ = data->modelData->integerVarsData[0].attribute /* Sensor1Input DISCRETE */.start;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
Sensor1Input = $PRE.Sensor1Input
*/
void TrainCrossing_Sensors_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
Sensor2Output = $PRE.Sensor2Output
*/
void TrainCrossing_Sensors_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_32(DATA *data, threadData_t *threadData);


/*
equation index: 8
type: SIMPLE_ASSIGN
$PRE.Sensor2_Active = $START.Sensor2_Active
*/
void TrainCrossing_Sensors_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */ = data->modelData->booleanVarsData[4].attribute /* Sensor2_Active DISCRETE */.start;
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_27(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_28(DATA *data, threadData_t *threadData);


/*
equation index: 13
type: SIMPLE_ASSIGN
$whenCondition2 = Sensor2_Active <> $PRE.Sensor2_Active and not Sensor2_Active and $PRE.Sensor2_Active
*/
void TrainCrossing_Sensors_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (((!data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */)) && ((!data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */) && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$PRE.Sensor1_Active = $START.Sensor1_Active
*/
void TrainCrossing_Sensors_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->booleanVarsPre[3] /* Sensor1_Active DISCRETE */ = data->modelData->booleanVarsData[3].attribute /* Sensor1_Active DISCRETE */.start;
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Sensors_eqFunction_25(DATA *data, threadData_t *threadData);


/*
equation index: 19
type: SIMPLE_ASSIGN
$whenCondition1 = Sensor1_Active and not $PRE.Sensor1_Active
*/
void TrainCrossing_Sensors_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[3] /* Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[3] /* Sensor1_Active DISCRETE */));
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_Sensors_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Sensors_eqFunction_1(data, threadData);
  TrainCrossing_Sensors_eqFunction_33(data, threadData);
  TrainCrossing_Sensors_eqFunction_3(data, threadData);
  TrainCrossing_Sensors_eqFunction_4(data, threadData);
  TrainCrossing_Sensors_eqFunction_5(data, threadData);
  TrainCrossing_Sensors_eqFunction_6(data, threadData);
  TrainCrossing_Sensors_eqFunction_32(data, threadData);
  TrainCrossing_Sensors_eqFunction_8(data, threadData);
  TrainCrossing_Sensors_eqFunction_27(data, threadData);
  TrainCrossing_Sensors_eqFunction_23(data, threadData);
  TrainCrossing_Sensors_eqFunction_21(data, threadData);
  TrainCrossing_Sensors_eqFunction_28(data, threadData);
  TrainCrossing_Sensors_eqFunction_13(data, threadData);
  TrainCrossing_Sensors_eqFunction_14(data, threadData);
  TrainCrossing_Sensors_eqFunction_24(data, threadData);
  TrainCrossing_Sensors_eqFunction_22(data, threadData);
  TrainCrossing_Sensors_eqFunction_20(data, threadData);
  TrainCrossing_Sensors_eqFunction_25(data, threadData);
  TrainCrossing_Sensors_eqFunction_19(data, threadData);
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

