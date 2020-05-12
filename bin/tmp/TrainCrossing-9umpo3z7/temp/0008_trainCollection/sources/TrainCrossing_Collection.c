/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_Collection_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_Collection_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[0] /* DistanceVec[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[1] /* DistanceVec[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[2] /* DistanceVec[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[3] /* LengthVec[1] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[4] /* LengthVec[2] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[5] /* LengthVec[3] variable */;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 13
type: SIMPLE_ASSIGN
LengthVec[1] = 0.0
*/
void TrainCrossing_Collection_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[3] /* LengthVec[1] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 14
type: SIMPLE_ASSIGN
LengthVec[2] = 0.0
*/
void TrainCrossing_Collection_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[4] /* LengthVec[2] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
LengthVec[3] = 0.0
*/
void TrainCrossing_Collection_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[5] /* LengthVec[3] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
DistanceVec[1] = 0.0
*/
void TrainCrossing_Collection_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[0] /* DistanceVec[1] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
DistanceVec[2] = 0.0
*/
void TrainCrossing_Collection_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[1] /* DistanceVec[2] variable */ = 0.0;
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
DistanceVec[3] = 0.0
*/
void TrainCrossing_Collection_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[2] /* DistanceVec[3] variable */ = 0.0;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_Collection_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_Collection_functionLocalKnownVars(data, threadData);
  TrainCrossing_Collection_eqFunction_13(data, threadData);

  TrainCrossing_Collection_eqFunction_14(data, threadData);

  TrainCrossing_Collection_eqFunction_15(data, threadData);

  TrainCrossing_Collection_eqFunction_16(data, threadData);

  TrainCrossing_Collection_eqFunction_17(data, threadData);

  TrainCrossing_Collection_eqFunction_18(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_Collection_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainCrossing_Collection_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_Collection_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_Collection_12jac.h"
#include "TrainCrossing_Collection_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_Collection_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_Collection_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_Collection_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_Collection_initializeDAEmodeData,
   TrainCrossing_Collection_functionODE,
   TrainCrossing_Collection_functionAlgebraics,
   TrainCrossing_Collection_functionDAE,
   TrainCrossing_Collection_functionLocalKnownVars,
   TrainCrossing_Collection_input_function,
   TrainCrossing_Collection_input_function_init,
   TrainCrossing_Collection_input_function_updateStartValues,
   TrainCrossing_Collection_data_function,
   TrainCrossing_Collection_output_function,
   TrainCrossing_Collection_setc_function,
   TrainCrossing_Collection_function_storeDelayed,
   TrainCrossing_Collection_updateBoundVariableAttributes,
   TrainCrossing_Collection_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_Collection_functionInitialEquations_lambda0,
   TrainCrossing_Collection_functionRemovedInitialEquations,
   TrainCrossing_Collection_updateBoundParameters,
   TrainCrossing_Collection_checkForAsserts,
   TrainCrossing_Collection_function_ZeroCrossingsEquations,
   TrainCrossing_Collection_function_ZeroCrossings,
   TrainCrossing_Collection_function_updateRelations,
   TrainCrossing_Collection_zeroCrossingDescription,
   TrainCrossing_Collection_relationDescription,
   TrainCrossing_Collection_function_initSample,
   TrainCrossing_Collection_INDEX_JAC_A,
   TrainCrossing_Collection_INDEX_JAC_B,
   TrainCrossing_Collection_INDEX_JAC_C,
   TrainCrossing_Collection_INDEX_JAC_D,
   TrainCrossing_Collection_INDEX_JAC_F,
   TrainCrossing_Collection_initialAnalyticJacobianA,
   TrainCrossing_Collection_initialAnalyticJacobianB,
   TrainCrossing_Collection_initialAnalyticJacobianC,
   TrainCrossing_Collection_initialAnalyticJacobianD,
   TrainCrossing_Collection_initialAnalyticJacobianF,
   TrainCrossing_Collection_functionJacA_column,
   TrainCrossing_Collection_functionJacB_column,
   TrainCrossing_Collection_functionJacC_column,
   TrainCrossing_Collection_functionJacD_column,
   TrainCrossing_Collection_functionJacF_column,
   TrainCrossing_Collection_linear_model_frame,
   TrainCrossing_Collection_linear_model_datarecovery_frame,
   TrainCrossing_Collection_mayer,
   TrainCrossing_Collection_lagrange,
   TrainCrossing_Collection_pickUpBoundsForInputsInOptimization,
   TrainCrossing_Collection_setInputData,
   TrainCrossing_Collection_getTimeGrid,
   TrainCrossing_Collection_symbolicInlineSystem,
   TrainCrossing_Collection_function_initSynchronous,
   TrainCrossing_Collection_function_updateSynchronous,
   TrainCrossing_Collection_function_equationsSynchronous,
   TrainCrossing_Collection_inputNames,
   TrainCrossing_Collection_read_input_fmu,
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
void TrainCrossing_Collection_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_Collection_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.Collection";
  data->modelData->modelFilePrefix = "TrainCrossing_Collection";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing";
  data->modelData->modelGUID = "{8946b007-f5a8-41ab-9d69-d053327138b6}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 12;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 6;
  
  data->modelData->nAliasReal = 6;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_Collection_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 26;
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

