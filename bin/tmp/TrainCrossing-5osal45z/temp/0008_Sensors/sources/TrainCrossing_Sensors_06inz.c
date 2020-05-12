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
Train_Detected2[3] = 0.0 >= Sensor2Position + 1.0 and 0.0 <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = GreaterEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
  tmp1 = LessEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  data->localData[0]->booleanVars[7] /* Train_Detected2[3] DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
Train_Detected2[2] = 0.0 >= Sensor2Position + 1.0 and 0.0 <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  tmp2 = GreaterEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
  tmp3 = LessEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  data->localData[0]->booleanVars[6] /* Train_Detected2[2] DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
Train_Detected2[1] = 0.0 >= Sensor2Position + 1.0 and 0.0 <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = GreaterEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
  tmp5 = LessEq(0.0,data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  data->localData[0]->booleanVars[5] /* Train_Detected2[1] DISCRETE */ = (tmp4 && tmp5);
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_18(DATA *data, threadData_t *threadData);


/*
equation index: 5
type: SIMPLE_ASSIGN
Train_Detected1[3] = 0.0 >= Sensor1Position and 0.0 <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp6 = GreaterEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
  tmp7 = LessEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
  data->localData[0]->booleanVars[4] /* Train_Detected1[3] DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
Train_Detected1[2] = 0.0 >= Sensor1Position and 0.0 <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  tmp8 = GreaterEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
  tmp9 = LessEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
  data->localData[0]->booleanVars[3] /* Train_Detected1[2] DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
Train_Detected1[1] = 0.0 >= Sensor1Position and 0.0 <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  tmp10 = GreaterEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
  tmp11 = LessEq(0.0,data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
  data->localData[0]->booleanVars[2] /* Train_Detected1[1] DISCRETE */ = (tmp10 && tmp11);
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_17(DATA *data, threadData_t *threadData);


/*
equation index: 9
type: SIMPLE_ASSIGN
LengthVec[1] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[5] /* LengthVec[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
LengthVec[2] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[6] /* LengthVec[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
LengthVec[3] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[7] /* LengthVec[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
DistanceVec[1] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[1] /* DistanceVec[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
DistanceVec[2] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[2] /* DistanceVec[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
DistanceVec[3] = 0.0
*/
void TrainCrossing_Sensors_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[3] /* DistanceVec[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$outputAlias_Intersection = 0.5 * (Sensor1Position + Sensor2Position)
*/
void TrainCrossing_Sensors_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[0] /* $outputAlias_Intersection variable */ = (0.5) * (data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  TRACE_POP
}
extern void TrainCrossing_Sensors_eqFunction_19(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Sensors_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Sensors_eqFunction_1(data, threadData);
  TrainCrossing_Sensors_eqFunction_2(data, threadData);
  TrainCrossing_Sensors_eqFunction_3(data, threadData);
  TrainCrossing_Sensors_eqFunction_18(data, threadData);
  TrainCrossing_Sensors_eqFunction_5(data, threadData);
  TrainCrossing_Sensors_eqFunction_6(data, threadData);
  TrainCrossing_Sensors_eqFunction_7(data, threadData);
  TrainCrossing_Sensors_eqFunction_17(data, threadData);
  TrainCrossing_Sensors_eqFunction_9(data, threadData);
  TrainCrossing_Sensors_eqFunction_10(data, threadData);
  TrainCrossing_Sensors_eqFunction_11(data, threadData);
  TrainCrossing_Sensors_eqFunction_12(data, threadData);
  TrainCrossing_Sensors_eqFunction_13(data, threadData);
  TrainCrossing_Sensors_eqFunction_14(data, threadData);
  TrainCrossing_Sensors_eqFunction_15(data, threadData);
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

