/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_CrashMonitor_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_CrashMonitor_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[3] /* CarIntersection variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[4] /* CarLengthVec[1] variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[5] /* CarLengthVec[2] variable */ = data->simulationInfo->inputVars[5];
  data->localData[0]->realVars[6] /* CarLengthVec[3] variable */ = data->simulationInfo->inputVars[6];
  data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ = data->simulationInfo->inputVars[7];
  data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ = data->simulationInfo->inputVars[8];
  data->localData[0]->realVars[9] /* TrainIntersection variable */ = data->simulationInfo->inputVars[9];
  data->localData[0]->realVars[10] /* TrainLengthVec[1] variable */ = data->simulationInfo->inputVars[10];
  data->localData[0]->realVars[11] /* TrainLengthVec[2] variable */ = data->simulationInfo->inputVars[11];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[0].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[1].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[2].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[3].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[4].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[5].attribute.start;
  data->simulationInfo->inputVars[6] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[7] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[8] = data->modelData->realVarsData[8].attribute.start;
  data->simulationInfo->inputVars[9] = data->modelData->realVarsData[9].attribute.start;
  data->simulationInfo->inputVars[10] = data->modelData->realVarsData[10].attribute.start;
  data->simulationInfo->inputVars[11] = data->modelData->realVarsData[11].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[0].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[1].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[2].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[3].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[4].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[5].attribute.start = data->simulationInfo->inputVars[5];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[6];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[7];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[8];
  data->modelData->realVarsData[9].attribute.start = data->simulationInfo->inputVars[9];
  data->modelData->realVarsData[10].attribute.start = data->simulationInfo->inputVars[10];
  data->modelData->realVarsData[11].attribute.start = data->simulationInfo->inputVars[11];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[0].info.name;
  names[1] = (char *) data->modelData->realVarsData[1].info.name;
  names[2] = (char *) data->modelData->realVarsData[2].info.name;
  names[3] = (char *) data->modelData->realVarsData[3].info.name;
  names[4] = (char *) data->modelData->realVarsData[4].info.name;
  names[5] = (char *) data->modelData->realVarsData[5].info.name;
  names[6] = (char *) data->modelData->realVarsData[6].info.name;
  names[7] = (char *) data->modelData->realVarsData[7].info.name;
  names[8] = (char *) data->modelData->realVarsData[8].info.name;
  names[9] = (char *) data->modelData->realVarsData[9].info.name;
  names[10] = (char *) data->modelData->realVarsData[10].info.name;
  names[11] = (char *) data->modelData->realVarsData[11].info.name;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 10
type: SIMPLE_ASSIGN
TrainDanger[1] = TrainDistanceVec[1] >= TrainIntersection and TrainDistanceVec[1] - TrainLengthVec[1] <= TrainIntersection
*/
void TrainCrossing_CrashMonitor_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ - data->localData[0]->realVars[10] /* TrainLengthVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, 9, LessEq);
  data->localData[0]->booleanVars[8] /* TrainDanger[1] DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 11
type: SIMPLE_ASSIGN
TrainDanger[2] = TrainDistanceVec[2] >= TrainIntersection and TrainDistanceVec[2] - TrainLengthVec[2] <= TrainIntersection
*/
void TrainCrossing_CrashMonitor_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ - data->localData[0]->realVars[11] /* TrainLengthVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, 7, LessEq);
  data->localData[0]->booleanVars[9] /* TrainDanger[2] DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 12
type: SIMPLE_ASSIGN
$cse2 = TrainCrossing.CrashMonitor.Danger(2, TrainDanger)
*/
void TrainCrossing_CrashMonitor_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  boolean_array tmp4;
  boolean_array_create(&tmp4, ((modelica_boolean*)&((&data->localData[0]->booleanVars[8] /* TrainDanger[1] DISCRETE */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */ = omc_TrainCrossing_CrashMonitor_Danger(threadData, ((modelica_integer) 2), tmp4);
  TRACE_POP
}
/*
equation index: 13
type: SIMPLE_ASSIGN
CarDanger[1] = CarDistanceVec[1] >= CarIntersection and CarDistanceVec[1] - CarLengthVec[1] <= CarIntersection
*/
void TrainCrossing_CrashMonitor_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ - data->localData[0]->realVars[4] /* CarLengthVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 5, LessEq);
  data->localData[0]->booleanVars[4] /* CarDanger[1] DISCRETE */ = (tmp5 && tmp6);
  TRACE_POP
}
/*
equation index: 14
type: SIMPLE_ASSIGN
CarDanger[2] = CarDistanceVec[2] >= CarIntersection and CarDistanceVec[2] - CarLengthVec[2] <= CarIntersection
*/
void TrainCrossing_CrashMonitor_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ - data->localData[0]->realVars[5] /* CarLengthVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 3, LessEq);
  data->localData[0]->booleanVars[5] /* CarDanger[2] DISCRETE */ = (tmp7 && tmp8);
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
CarDanger[3] = CarDistanceVec[3] >= CarIntersection and CarDistanceVec[3] - CarLengthVec[3] <= CarIntersection
*/
void TrainCrossing_CrashMonitor_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ - data->localData[0]->realVars[6] /* CarLengthVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, 1, LessEq);
  data->localData[0]->booleanVars[6] /* CarDanger[3] DISCRETE */ = (tmp9 && tmp10);
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
$cse1 = TrainCrossing.CrashMonitor.Danger(3, CarDanger)
*/
void TrainCrossing_CrashMonitor_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  boolean_array tmp11;
  boolean_array_create(&tmp11, ((modelica_boolean*)&((&data->localData[0]->booleanVars[4] /* CarDanger[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ = omc_TrainCrossing_CrashMonitor_Danger(threadData, ((modelica_integer) 3), tmp11);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
$whenCondition1 = $cse1 and $cse2
*/
void TrainCrossing_CrashMonitor_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->booleanVars[3] /* $whenCondition1 DISCRETE */ = (data->localData[0]->booleanVars[0] /* $cse1 DISCRETE */ && data->localData[0]->booleanVars[1] /* $cse2 DISCRETE */);
  TRACE_POP
}
/*
equation index: 18
type: WHEN

when {$whenCondition1} then
  $outputAlias_Failure = true;
end when;
*/
void TrainCrossing_CrashMonitor_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  if((data->localData[0]->booleanVars[3] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->booleanVars[2] /* $outputAlias_Failure DISCRETE */ = 1;
  }
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
Failure = $outputAlias_Failure
*/
void TrainCrossing_CrashMonitor_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->booleanVars[7] /* Failure variable */ = data->localData[0]->booleanVars[2] /* $outputAlias_Failure DISCRETE */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_CrashMonitor_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_CrashMonitor_functionLocalKnownVars(data, threadData);
  TrainCrossing_CrashMonitor_eqFunction_10(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_11(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_12(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_13(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_14(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_15(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_16(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_17(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_18(data, threadData);

  TrainCrossing_CrashMonitor_eqFunction_19(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_CrashMonitor_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainCrossing_CrashMonitor_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_CrashMonitor_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_CrashMonitor_12jac.h"
#include "TrainCrossing_CrashMonitor_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_CrashMonitor_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_CrashMonitor_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_CrashMonitor_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_CrashMonitor_initializeDAEmodeData,
   TrainCrossing_CrashMonitor_functionODE,
   TrainCrossing_CrashMonitor_functionAlgebraics,
   TrainCrossing_CrashMonitor_functionDAE,
   TrainCrossing_CrashMonitor_functionLocalKnownVars,
   TrainCrossing_CrashMonitor_input_function,
   TrainCrossing_CrashMonitor_input_function_init,
   TrainCrossing_CrashMonitor_input_function_updateStartValues,
   TrainCrossing_CrashMonitor_data_function,
   TrainCrossing_CrashMonitor_output_function,
   TrainCrossing_CrashMonitor_setc_function,
   TrainCrossing_CrashMonitor_function_storeDelayed,
   TrainCrossing_CrashMonitor_updateBoundVariableAttributes,
   TrainCrossing_CrashMonitor_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_CrashMonitor_functionInitialEquations_lambda0,
   TrainCrossing_CrashMonitor_functionRemovedInitialEquations,
   TrainCrossing_CrashMonitor_updateBoundParameters,
   TrainCrossing_CrashMonitor_checkForAsserts,
   TrainCrossing_CrashMonitor_function_ZeroCrossingsEquations,
   TrainCrossing_CrashMonitor_function_ZeroCrossings,
   TrainCrossing_CrashMonitor_function_updateRelations,
   TrainCrossing_CrashMonitor_zeroCrossingDescription,
   TrainCrossing_CrashMonitor_relationDescription,
   TrainCrossing_CrashMonitor_function_initSample,
   TrainCrossing_CrashMonitor_INDEX_JAC_A,
   TrainCrossing_CrashMonitor_INDEX_JAC_B,
   TrainCrossing_CrashMonitor_INDEX_JAC_C,
   TrainCrossing_CrashMonitor_INDEX_JAC_D,
   TrainCrossing_CrashMonitor_INDEX_JAC_F,
   TrainCrossing_CrashMonitor_initialAnalyticJacobianA,
   TrainCrossing_CrashMonitor_initialAnalyticJacobianB,
   TrainCrossing_CrashMonitor_initialAnalyticJacobianC,
   TrainCrossing_CrashMonitor_initialAnalyticJacobianD,
   TrainCrossing_CrashMonitor_initialAnalyticJacobianF,
   TrainCrossing_CrashMonitor_functionJacA_column,
   TrainCrossing_CrashMonitor_functionJacB_column,
   TrainCrossing_CrashMonitor_functionJacC_column,
   TrainCrossing_CrashMonitor_functionJacD_column,
   TrainCrossing_CrashMonitor_functionJacF_column,
   TrainCrossing_CrashMonitor_linear_model_frame,
   TrainCrossing_CrashMonitor_linear_model_datarecovery_frame,
   TrainCrossing_CrashMonitor_mayer,
   TrainCrossing_CrashMonitor_lagrange,
   TrainCrossing_CrashMonitor_pickUpBoundsForInputsInOptimization,
   TrainCrossing_CrashMonitor_setInputData,
   TrainCrossing_CrashMonitor_getTimeGrid,
   TrainCrossing_CrashMonitor_symbolicInlineSystem,
   TrainCrossing_CrashMonitor_function_initSynchronous,
   TrainCrossing_CrashMonitor_function_updateSynchronous,
   TrainCrossing_CrashMonitor_function_equationsSynchronous,
   TrainCrossing_CrashMonitor_inputNames,
   TrainCrossing_CrashMonitor_read_input_fmu,
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
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,22,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_CrashMonitor_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_CrashMonitor_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.CrashMonitor";
  data->modelData->modelFilePrefix = "TrainCrossing_CrashMonitor";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing";
  data->modelData->modelGUID = "{29aa2e12-1506-4293-8711-054bd99a9576}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 12;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 10;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 2;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 12;
  data->modelData->nOutputVars = 1;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 5;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 10;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_CrashMonitor_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 22;
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

