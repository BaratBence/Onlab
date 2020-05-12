/* Initialization */
#include "TrainCrossing_Collection_model.h"
#include "TrainCrossing_Collection_11mix.h"
#include "TrainCrossing_Collection_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
lengthVec[1] = 0.0
*/
void TrainCrossing_Collection_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[9] /* lengthVec[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
lengthVec[2] = 0.0
*/
void TrainCrossing_Collection_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[10] /* lengthVec[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
lengthVec[3] = 0.0
*/
void TrainCrossing_Collection_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[11] /* lengthVec[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
distanceVec[1] = 0.0
*/
void TrainCrossing_Collection_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[6] /* distanceVec[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
distanceVec[2] = 0.0
*/
void TrainCrossing_Collection_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[7] /* distanceVec[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
distanceVec[3] = 0.0
*/
void TrainCrossing_Collection_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[8] /* distanceVec[3] variable */ = 0.0;
  TRACE_POP
}
extern void TrainCrossing_Collection_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_Collection_eqFunction_13(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TrainCrossing_Collection_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_Collection_eqFunction_1(data, threadData);
  TrainCrossing_Collection_eqFunction_2(data, threadData);
  TrainCrossing_Collection_eqFunction_3(data, threadData);
  TrainCrossing_Collection_eqFunction_4(data, threadData);
  TrainCrossing_Collection_eqFunction_5(data, threadData);
  TrainCrossing_Collection_eqFunction_6(data, threadData);
  TrainCrossing_Collection_eqFunction_18(data, threadData);
  TrainCrossing_Collection_eqFunction_17(data, threadData);
  TrainCrossing_Collection_eqFunction_16(data, threadData);
  TrainCrossing_Collection_eqFunction_15(data, threadData);
  TrainCrossing_Collection_eqFunction_14(data, threadData);
  TrainCrossing_Collection_eqFunction_13(data, threadData);
  TRACE_POP
}


int TrainCrossing_Collection_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Collection_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TrainCrossing_Collection_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TrainCrossing_Collection_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

