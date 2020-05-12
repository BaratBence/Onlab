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

  data->localData[0]->realVars[0] /* Distance1 variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[1] /* Distance2 variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[2] /* Distance3 variable */ = data->simulationInfo->inputVars[2];
  data->localData[0]->realVars[6] /* Length1 variable */ = data->simulationInfo->inputVars[3];
  data->localData[0]->realVars[7] /* Length2 variable */ = data->simulationInfo->inputVars[4];
  data->localData[0]->realVars[8] /* Length3 variable */ = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[0].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[1].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[2].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[8].attribute.start;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[0].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[1].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[2].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Collection_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[0].info.name;
  names[1] = (char *) data->modelData->realVarsData[1].info.name;
  names[2] = (char *) data->modelData->realVarsData[2].info.name;
  names[3] = (char *) data->modelData->realVarsData[6].info.name;
  names[4] = (char *) data->modelData->realVarsData[7].info.name;
  names[5] = (char *) data->modelData->realVarsData[8].info.name;
  
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

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[3] /* DistanceVec[1] variable */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[4] /* DistanceVec[2] variable */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[5] /* DistanceVec[3] variable */;
  data->simulationInfo->outputVars[3] = data->localData[0]->realVars[9] /* LengthVec[1] variable */;
  data->simulationInfo->outputVars[4] = data->localData[0]->realVars[10] /* LengthVec[2] variable */;
  data->simulationInfo->outputVars[5] = data->localData[0]->realVars[11] /* LengthVec[3] variable */;
  
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
equation index: 7
type: SIMPLE_ASSIGN
LengthVec[1] = Length1
*/
void TrainCrossing_Collection_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[9] /* LengthVec[1] variable */ = data->localData[0]->realVars[6] /* Length1 variable */;
  TRACE_POP
}
/*
equation index: 8
type: SIMPLE_ASSIGN
LengthVec[2] = Length2
*/
void TrainCrossing_Collection_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[10] /* LengthVec[2] variable */ = data->localData[0]->realVars[7] /* Length2 variable */;
  TRACE_POP
}
/*
equation index: 9
type: SIMPLE_ASSIGN
LengthVec[3] = Length3
*/
void TrainCrossing_Collection_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[11] /* LengthVec[3] variable */ = data->localData[0]->realVars[8] /* Length3 variable */;
  TRACE_POP
}
/*
equation index: 10
type: SIMPLE_ASSIGN
DistanceVec[1] = Distance1
*/
void TrainCrossing_Collection_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[3] /* DistanceVec[1] variable */ = data->localData[0]->realVars[0] /* Distance1 variable */;
  TRACE_POP
}
/*
equation index: 11
type: SIMPLE_ASSIGN
DistanceVec[2] = Distance2
*/
void TrainCrossing_Collection_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[4] /* DistanceVec[2] variable */ = data->localData[0]->realVars[1] /* Distance2 variable */;
  TRACE_POP
}
/*
equation index: 12
type: SIMPLE_ASSIGN
DistanceVec[3] = Distance3
*/
void TrainCrossing_Collection_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[5] /* DistanceVec[3] variable */ = data->localData[0]->realVars[2] /* Distance3 variable */;
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
  TrainCrossing_Collection_eqFunction_7(data, threadData);

  TrainCrossing_Collection_eqFunction_8(data, threadData);

  TrainCrossing_Collection_eqFunction_9(data, threadData);

  TrainCrossing_Collection_eqFunction_10(data, threadData);

  TrainCrossing_Collection_eqFunction_11(data, threadData);

  TrainCrossing_Collection_eqFunction_12(data, threadData);
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
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

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
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.2";
  data->modelData->modelGUID = "{79936c18-3421-4abb-8723-6ab293c05a74}";
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
  data->modelData->nInputVars = 6;
  data->modelData->nOutputVars = 6;
  
  data->modelData->nAliasReal = 12;
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
  data->modelData->modelDataXml.nEquations = 14;
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

