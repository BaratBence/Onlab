/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TrainCrossing_TrainIntersectionController_model.h"
#include "simulation/solver/events.h"


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TrainCrossing_TrainIntersectionController_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->booleanVarsData[3].info.name;
  names[1] = (char *) data->modelData->booleanVarsData[4].info.name;
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersectionController_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 10
type: SIMPLE_ASSIGN
$whenCondition2 = false
*/
void TrainCrossing_TrainIntersectionController_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = 0;
  TRACE_POP
}
/*
equation index: 11
type: SIMPLE_ASSIGN
$whenCondition1 = false
*/
void TrainCrossing_TrainIntersectionController_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = 0;
  TRACE_POP
}
/*
equation index: 12
type: WHEN

when {$whenCondition2} then
  Sensor2Output = 1 + pre(Sensor2Output);
end when;
*/
void TrainCrossing_TrainIntersectionController_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[1] /* Sensor2Output DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 13
type: WHEN

when {$whenCondition1} then
  Sensor1Input = 1 + pre(Sensor1Input);
end when;
*/
void TrainCrossing_TrainIntersectionController_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ = ((modelica_integer) 1) + data->simulationInfo->integerVarsPre[0] /* Sensor1Input DISCRETE */;
  }
  TRACE_POP
}
/*
equation index: 14
type: SIMPLE_ASSIGN
Safe_Passage = Sensor1Input == Sensor2Output
*/
void TrainCrossing_TrainIntersectionController_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->booleanVars[2] /* Safe_Passage variable */ = (data->localData[0]->integerVars[0] /* Sensor1Input DISCRETE */ == data->localData[0]->integerVars[1] /* Sensor2Output DISCRETE */);
  TRACE_POP
}

OMC_DISABLE_OPT
int TrainCrossing_TrainIntersectionController_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TrainCrossing_TrainIntersectionController_functionLocalKnownVars(data, threadData);
  TrainCrossing_TrainIntersectionController_eqFunction_10(data, threadData);

  TrainCrossing_TrainIntersectionController_eqFunction_11(data, threadData);

  TrainCrossing_TrainIntersectionController_eqFunction_12(data, threadData);

  TrainCrossing_TrainIntersectionController_eqFunction_13(data, threadData);

  TrainCrossing_TrainIntersectionController_eqFunction_14(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainIntersectionController_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TrainCrossing_TrainIntersectionController_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TrainCrossing_TrainIntersectionController_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TrainCrossing_TrainIntersectionController_12jac.h"
#include "TrainCrossing_TrainIntersectionController_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TrainCrossing_TrainIntersectionController_callback = {
   NULL,
   NULL,
   NULL,
   TrainCrossing_TrainIntersectionController_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TrainCrossing_TrainIntersectionController_initializeStateSets,
   #else
   NULL,
   #endif
   TrainCrossing_TrainIntersectionController_initializeDAEmodeData,
   TrainCrossing_TrainIntersectionController_functionODE,
   TrainCrossing_TrainIntersectionController_functionAlgebraics,
   TrainCrossing_TrainIntersectionController_functionDAE,
   TrainCrossing_TrainIntersectionController_functionLocalKnownVars,
   TrainCrossing_TrainIntersectionController_input_function,
   TrainCrossing_TrainIntersectionController_input_function_init,
   TrainCrossing_TrainIntersectionController_input_function_updateStartValues,
   TrainCrossing_TrainIntersectionController_data_function,
   TrainCrossing_TrainIntersectionController_output_function,
   TrainCrossing_TrainIntersectionController_setc_function,
   TrainCrossing_TrainIntersectionController_function_storeDelayed,
   TrainCrossing_TrainIntersectionController_updateBoundVariableAttributes,
   TrainCrossing_TrainIntersectionController_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TrainCrossing_TrainIntersectionController_functionInitialEquations_lambda0,
   TrainCrossing_TrainIntersectionController_functionRemovedInitialEquations,
   TrainCrossing_TrainIntersectionController_updateBoundParameters,
   TrainCrossing_TrainIntersectionController_checkForAsserts,
   TrainCrossing_TrainIntersectionController_function_ZeroCrossingsEquations,
   TrainCrossing_TrainIntersectionController_function_ZeroCrossings,
   TrainCrossing_TrainIntersectionController_function_updateRelations,
   TrainCrossing_TrainIntersectionController_zeroCrossingDescription,
   TrainCrossing_TrainIntersectionController_relationDescription,
   TrainCrossing_TrainIntersectionController_function_initSample,
   TrainCrossing_TrainIntersectionController_INDEX_JAC_A,
   TrainCrossing_TrainIntersectionController_INDEX_JAC_B,
   TrainCrossing_TrainIntersectionController_INDEX_JAC_C,
   TrainCrossing_TrainIntersectionController_INDEX_JAC_D,
   TrainCrossing_TrainIntersectionController_INDEX_JAC_F,
   TrainCrossing_TrainIntersectionController_initialAnalyticJacobianA,
   TrainCrossing_TrainIntersectionController_initialAnalyticJacobianB,
   TrainCrossing_TrainIntersectionController_initialAnalyticJacobianC,
   TrainCrossing_TrainIntersectionController_initialAnalyticJacobianD,
   TrainCrossing_TrainIntersectionController_initialAnalyticJacobianF,
   TrainCrossing_TrainIntersectionController_functionJacA_column,
   TrainCrossing_TrainIntersectionController_functionJacB_column,
   TrainCrossing_TrainIntersectionController_functionJacC_column,
   TrainCrossing_TrainIntersectionController_functionJacD_column,
   TrainCrossing_TrainIntersectionController_functionJacF_column,
   TrainCrossing_TrainIntersectionController_linear_model_frame,
   TrainCrossing_TrainIntersectionController_linear_model_datarecovery_frame,
   TrainCrossing_TrainIntersectionController_mayer,
   TrainCrossing_TrainIntersectionController_lagrange,
   TrainCrossing_TrainIntersectionController_pickUpBoundsForInputsInOptimization,
   TrainCrossing_TrainIntersectionController_setInputData,
   TrainCrossing_TrainIntersectionController_getTimeGrid,
   TrainCrossing_TrainIntersectionController_symbolicInlineSystem,
   TrainCrossing_TrainIntersectionController_function_initSynchronous,
   TrainCrossing_TrainIntersectionController_function_updateSynchronous,
   TrainCrossing_TrainIntersectionController_function_equationsSynchronous,
   TrainCrossing_TrainIntersectionController_inputNames,
   TrainCrossing_TrainIntersectionController_read_input_fmu,
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
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,13,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void TrainCrossing_TrainIntersectionController_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TrainCrossing_TrainIntersectionController_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TrainCrossing.TrainIntersectionController";
  data->modelData->modelFilePrefix = "TrainCrossing_TrainIntersectionController";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.0";
  data->modelData->modelGUID = "{ba66e9d7-1639-4fa1-ab6f-9c61e01ff713}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 0;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 5;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 2;
  data->modelData->nOutputVars = 1;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_TrainIntersectionController_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 15;
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

