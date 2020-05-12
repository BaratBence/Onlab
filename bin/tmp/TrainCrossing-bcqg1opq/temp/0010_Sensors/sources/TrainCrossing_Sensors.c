/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_Sensors_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_Sensors_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[1] /* DistanceVec[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[2] /* DistanceVec[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[3] /* DistanceVec[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[5] /* LengthVec[1] variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[6] /* LengthVec[2] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[7] /* LengthVec[3] variable */ = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[1].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[2].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[3].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[5].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[7].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[1].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[2].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[3].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[5].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[1].info.name;
  names[1] = (char *) data->modelData->realVarsData[2].info.name;
  names[2] = (char *) data->modelData->realVarsData[3].info.name;
  names[3] = (char *) data->modelData->realVarsData[5].info.name;
  names[4] = (char *) data->modelData->realVarsData[6].info.name;
  names[5] = (char *) data->modelData->realVarsData[7].info.name;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[4] /* Intersection variable */;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 20
type: SIMPLE_ASSIGN
Train_Detected1[1] = DistanceVec[1] >= Sensor1Position and DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[5] /* LengthVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, 11, LessEq);
  data->localData[0]->booleanVars[5] /* Train_Detected1[1] DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
Train_Detected2[1] = DistanceVec[1] >= Sensor2Position + 1.0 and DistanceVec[1] - LengthVec[1] <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[5] /* LengthVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, 9, LessEq);
  data->localData[0]->booleanVars[8] /* Train_Detected2[1] DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
Train_Detected1[2] = DistanceVec[2] >= Sensor1Position and DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[6] /* LengthVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, 7, LessEq);
  data->localData[0]->booleanVars[6] /* Train_Detected1[2] DISCRETE */ = (tmp4 && tmp5);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
Train_Detected2[2] = DistanceVec[2] >= Sensor2Position + 1.0 and DistanceVec[2] - LengthVec[2] <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[6] /* LengthVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, 5, LessEq);
  data->localData[0]->booleanVars[9] /* Train_Detected2[2] DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
Train_Detected1[3] = DistanceVec[3] >= Sensor1Position and DistanceVec[3] - LengthVec[3] <= Sensor1Position + 1.0
*/
void TrainCrossing_Sensors_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[7] /* LengthVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, 3, LessEq);
  data->localData[0]->booleanVars[7] /* Train_Detected1[3] DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
Sensor1_Active = TrainCrossing.Sensors.Active(3, Train_Detected1)
*/
void TrainCrossing_Sensors_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  boolean_array tmp10;
  boolean_array_create(&tmp10, ((modelica_boolean*)&((&data->localData[0]->booleanVars[5] /* Train_Detected1[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[3] /* Sensor1_Active DISCRETE */ = omc_TrainCrossing_Sensors_Active(threadData, ((modelica_integer) 3), tmp10);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
$whenCondition1 = Sensor1_Active and not pre(Sensor1_Active)
*/
void TrainCrossing_Sensors_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[3] /* Sensor1_Active DISCRETE */ && (!data->simulationInfo->booleanVarsPre[3] /* Sensor1_Active DISCRETE */));
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
Train_Detected2[3] = DistanceVec[3] >= Sensor2Position + 1.0 and DistanceVec[3] - LengthVec[3] <= Sensor2Position
*/
void TrainCrossing_Sensors_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[7] /* LengthVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, 1, LessEq);
  data->localData[0]->booleanVars[10] /* Train_Detected2[3] DISCRETE */ = (tmp11 && tmp12);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
Sensor2_Active = TrainCrossing.Sensors.Active(3, Train_Detected2)
*/
void TrainCrossing_Sensors_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  boolean_array tmp13;
  boolean_array_create(&tmp13, ((modelica_boolean*)&((&data->localData[0]->booleanVars[8] /* Train_Detected2[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */ = omc_TrainCrossing_Sensors_Active(threadData, ((modelica_integer) 3), tmp13);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
$whenCondition2 = Sensor2_Active <> pre(Sensor2_Active) and not Sensor2_Active and pre(Sensor2_Active)
*/
void TrainCrossing_Sensors_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (((!data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */ && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */) || (data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */)) && ((!data->localData[0]->booleanVars[4] /* Sensor2_Active DISCRETE */) && data->simulationInfo->booleanVarsPre[4] /* Sensor2_Active DISCRETE */));
  TRACE_POP
}
/*
equation index: 30
type: WHEN

when {$whenCondition2} then
  Sensor2Output = 1 + pre(Sensor2Output);
end when;
*/
void TrainCrossing_Sensors_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 31
type: WHEN

when {$whenCondition1} then
  Sensor1Input = 1 + pre(Sensor1Input);
end when;
*/
void TrainCrossing_Sensors_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
Safe_Passage = Sensor1Input == Sensor2Output
*/
void TrainCrossing_Sensors_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->booleanVars[2] /* Safe_Passage variable */ = (data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ == data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
Intersection = $outputAlias_Intersection
*/
void TrainCrossing_Sensors_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[4] /* Intersection variable */ = data->localData[0]->realVars[0] /* $outputAlias_Intersection variable */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_Sensors_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Sensors_functionLocalKnownVars(data, threadData);
  TrainCrossing_Sensors_eqFunction_20(data, threadData);

  TrainCrossing_Sensors_eqFunction_21(data, threadData);

  TrainCrossing_Sensors_eqFunction_22(data, threadData);

  TrainCrossing_Sensors_eqFunction_23(data, threadData);

  TrainCrossing_Sensors_eqFunction_24(data, threadData);

  TrainCrossing_Sensors_eqFunction_25(data, threadData);

  TrainCrossing_Sensors_eqFunction_26(data, threadData);

  TrainCrossing_Sensors_eqFunction_27(data, threadData);

  TrainCrossing_Sensors_eqFunction_28(data, threadData);

  TrainCrossing_Sensors_eqFunction_29(data, threadData);

  TrainCrossing_Sensors_eqFunction_30(data, threadData);

  TrainCrossing_Sensors_eqFunction_31(data, threadData);

  TrainCrossing_Sensors_eqFunction_32(data, threadData);

  TrainCrossing_Sensors_eqFunction_33(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_Sensors_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainCrossing_Sensors_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_Sensors_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_Sensors_12jac.h"
#include "TrainCrossing_Sensors_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_Sensors_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_Sensors_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_Sensors_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_Sensors_initializeDAEmodeData,
   TrainCrossing_Sensors_functionODE,
   TrainCrossing_Sensors_functionAlgebraics,
   TrainCrossing_Sensors_functionDAE,
   TrainCrossing_Sensors_functionLocalKnownVars,
   TrainCrossing_Sensors_input_function,
   TrainCrossing_Sensors_input_function_init,
   TrainCrossing_Sensors_input_function_updateStartValues,
   TrainCrossing_Sensors_data_function,
   TrainCrossing_Sensors_output_function,
   TrainCrossing_Sensors_setc_function,
   TrainCrossing_Sensors_function_storeDelayed,
   TrainCrossing_Sensors_updateBoundVariableAttributes,
   TrainCrossing_Sensors_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_Sensors_functionInitialEquations_lambda0,
   TrainCrossing_Sensors_functionRemovedInitialEquations,
   TrainCrossing_Sensors_updateBoundParameters,
   TrainCrossing_Sensors_checkForAsserts,
   TrainCrossing_Sensors_function_ZeroCrossingsEquations,
   TrainCrossing_Sensors_function_ZeroCrossings,
   TrainCrossing_Sensors_function_updateRelations,
   TrainCrossing_Sensors_zeroCrossingDescription,
   TrainCrossing_Sensors_relationDescription,
   TrainCrossing_Sensors_function_initSample,
   TrainCrossing_Sensors_INDEX_JAC_A,
   TrainCrossing_Sensors_INDEX_JAC_B,
   TrainCrossing_Sensors_INDEX_JAC_C,
   TrainCrossing_Sensors_INDEX_JAC_D,
   TrainCrossing_Sensors_INDEX_JAC_F,
   TrainCrossing_Sensors_initialAnalyticJacobianA,
   TrainCrossing_Sensors_initialAnalyticJacobianB,
   TrainCrossing_Sensors_initialAnalyticJacobianC,
   TrainCrossing_Sensors_initialAnalyticJacobianD,
   TrainCrossing_Sensors_initialAnalyticJacobianF,
   TrainCrossing_Sensors_functionJacA_column,
   TrainCrossing_Sensors_functionJacB_column,
   TrainCrossing_Sensors_functionJacC_column,
   TrainCrossing_Sensors_functionJacD_column,
   TrainCrossing_Sensors_functionJacF_column,
   TrainCrossing_Sensors_linear_model_frame,
   TrainCrossing_Sensors_linear_model_datarecovery_frame,
   TrainCrossing_Sensors_mayer,
   TrainCrossing_Sensors_lagrange,
   TrainCrossing_Sensors_pickUpBoundsForInputsInOptimization,
   TrainCrossing_Sensors_setInputData,
   TrainCrossing_Sensors_getTimeGrid,
   TrainCrossing_Sensors_symbolicInlineSystem,
   TrainCrossing_Sensors_function_initSynchronous,
   TrainCrossing_Sensors_function_updateSynchronous,
   TrainCrossing_Sensors_function_equationsSynchronous,
   TrainCrossing_Sensors_inputNames,
   TrainCrossing_Sensors_read_input_fmu,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "E:/Modelica/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,25,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "E:/Modelica/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,40,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_2_dir_data "E:/Modelica/lib/omlibrary/ModelicaReference"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,17,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,43,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "E:/Modelica/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,48,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "TrainCrossing"
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_Sensors_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_Sensors_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.Sensors";
  data->modelData->modelFilePrefix = "TrainCrossing_Sensors";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.2";
  data->modelData->modelGUID = "{57f888d5-5ebe-45ba-b7a6-af3bcb5587fd}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 8;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 11;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 1;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 6;
  data->modelData->nOutputVars = 2;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 6;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 12;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_Sensors_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 37;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

