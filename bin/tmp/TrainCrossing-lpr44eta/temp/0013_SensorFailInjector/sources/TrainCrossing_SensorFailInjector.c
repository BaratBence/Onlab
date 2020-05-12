/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_SensorFailInjector_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_SensorFailInjector_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 5
type: SIMPLE_ASSIGN
$whenCondition1 = time >= 30.0
*/
void TrainCrossing_SensorFailInjector_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, 30.0, 0, GreaterEq);
  data->localData[0]->booleanVars[1] /* $whenCondition1 DISCRETE */ = tmp0;
  TRACE_POP
}
/*
equation index: 6
type: WHEN

when {$whenCondition1} then
  $outputAlias_Sensorfail = true;
end when;
*/
void TrainCrossing_SensorFailInjector_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  if((data->localData[0]->booleanVars[1] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->booleanVars[0] /* $outputAlias_Sensorfail DISCRETE */ = 1;
  }
  TRACE_POP
}
/*
equation index: 7
type: SIMPLE_ASSIGN
Sensorfail = $outputAlias_Sensorfail
*/
void TrainCrossing_SensorFailInjector_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->booleanVars[2] /* Sensorfail variable */ = data->localData[0]->booleanVars[0] /* $outputAlias_Sensorfail DISCRETE */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_SensorFailInjector_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_SensorFailInjector_functionLocalKnownVars(data, threadData);
  TrainCrossing_SensorFailInjector_eqFunction_5(data, threadData);

  TrainCrossing_SensorFailInjector_eqFunction_6(data, threadData);

  TrainCrossing_SensorFailInjector_eqFunction_7(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_SensorFailInjector_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainCrossing_SensorFailInjector_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_SensorFailInjector_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_SensorFailInjector_12jac.h"
#include "TrainCrossing_SensorFailInjector_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_SensorFailInjector_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_SensorFailInjector_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_SensorFailInjector_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_SensorFailInjector_initializeDAEmodeData,
   TrainCrossing_SensorFailInjector_functionODE,
   TrainCrossing_SensorFailInjector_functionAlgebraics,
   TrainCrossing_SensorFailInjector_functionDAE,
   TrainCrossing_SensorFailInjector_functionLocalKnownVars,
   TrainCrossing_SensorFailInjector_input_function,
   TrainCrossing_SensorFailInjector_input_function_init,
   TrainCrossing_SensorFailInjector_input_function_updateStartValues,
   TrainCrossing_SensorFailInjector_data_function,
   TrainCrossing_SensorFailInjector_output_function,
   TrainCrossing_SensorFailInjector_setc_function,
   TrainCrossing_SensorFailInjector_function_storeDelayed,
   TrainCrossing_SensorFailInjector_updateBoundVariableAttributes,
   TrainCrossing_SensorFailInjector_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_SensorFailInjector_functionInitialEquations_lambda0,
   TrainCrossing_SensorFailInjector_functionRemovedInitialEquations,
   TrainCrossing_SensorFailInjector_updateBoundParameters,
   TrainCrossing_SensorFailInjector_checkForAsserts,
   TrainCrossing_SensorFailInjector_function_ZeroCrossingsEquations,
   TrainCrossing_SensorFailInjector_function_ZeroCrossings,
   TrainCrossing_SensorFailInjector_function_updateRelations,
   TrainCrossing_SensorFailInjector_zeroCrossingDescription,
   TrainCrossing_SensorFailInjector_relationDescription,
   TrainCrossing_SensorFailInjector_function_initSample,
   TrainCrossing_SensorFailInjector_INDEX_JAC_A,
   TrainCrossing_SensorFailInjector_INDEX_JAC_B,
   TrainCrossing_SensorFailInjector_INDEX_JAC_C,
   TrainCrossing_SensorFailInjector_INDEX_JAC_D,
   TrainCrossing_SensorFailInjector_INDEX_JAC_F,
   TrainCrossing_SensorFailInjector_initialAnalyticJacobianA,
   TrainCrossing_SensorFailInjector_initialAnalyticJacobianB,
   TrainCrossing_SensorFailInjector_initialAnalyticJacobianC,
   TrainCrossing_SensorFailInjector_initialAnalyticJacobianD,
   TrainCrossing_SensorFailInjector_initialAnalyticJacobianF,
   TrainCrossing_SensorFailInjector_functionJacA_column,
   TrainCrossing_SensorFailInjector_functionJacB_column,
   TrainCrossing_SensorFailInjector_functionJacC_column,
   TrainCrossing_SensorFailInjector_functionJacD_column,
   TrainCrossing_SensorFailInjector_functionJacF_column,
   TrainCrossing_SensorFailInjector_linear_model_frame,
   TrainCrossing_SensorFailInjector_linear_model_datarecovery_frame,
   TrainCrossing_SensorFailInjector_mayer,
   TrainCrossing_SensorFailInjector_lagrange,
   TrainCrossing_SensorFailInjector_pickUpBoundsForInputsInOptimization,
   TrainCrossing_SensorFailInjector_setInputData,
   TrainCrossing_SensorFailInjector_getTimeGrid,
   TrainCrossing_SensorFailInjector_symbolicInlineSystem,
   TrainCrossing_SensorFailInjector_function_initSynchronous,
   TrainCrossing_SensorFailInjector_function_updateSynchronous,
   TrainCrossing_SensorFailInjector_function_equationsSynchronous,
   TrainCrossing_SensorFailInjector_inputNames,
   TrainCrossing_SensorFailInjector_read_input_fmu,
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
void TrainCrossing_SensorFailInjector_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_SensorFailInjector_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.SensorFailInjector";
  data->modelData->modelFilePrefix = "TrainCrossing_SensorFailInjector";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing";
  data->modelData->modelGUID = "{c9bb9ebb-a7bc-419c-a04e-1294f399096a}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 0;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 3;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 1;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_SensorFailInjector_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 8;
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

