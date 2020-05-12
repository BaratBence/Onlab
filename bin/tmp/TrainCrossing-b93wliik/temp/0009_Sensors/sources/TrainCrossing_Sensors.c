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

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
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
equation index: 17
type: SIMPLE_ASSIGN
Sensor1_Active = TrainCrossing.Sensors.Active(3, Train_Detected1)
*/
void TrainCrossing_Sensors_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  boolean_array tmp0;
  boolean_array_create(&tmp0, ((modelica_boolean*)&((&data->localData[0]->booleanVars[2] /* Train_Detected1[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[0] /* Sensor1_Active variable */ = omc_TrainCrossing_Sensors_Active(threadData, ((modelica_integer) 3), tmp0);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
Sensor2_Active = TrainCrossing.Sensors.Active(3, Train_Detected2)
*/
void TrainCrossing_Sensors_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  boolean_array tmp1;
  boolean_array_create(&tmp1, ((modelica_boolean*)&((&data->localData[0]->booleanVars[5] /* Train_Detected2[1] DISCRETE */)[calc_base_index_dims_subs(1, 3, ((modelica_integer) 1))])), 1, 3);
  data->localData[0]->booleanVars[1] /* Sensor2_Active variable */ = omc_TrainCrossing_Sensors_Active(threadData, ((modelica_integer) 3), tmp1);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
Intersection = $outputAlias_Intersection
*/
void TrainCrossing_Sensors_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
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
  TrainCrossing_Sensors_eqFunction_17(data, threadData);

  TrainCrossing_Sensors_eqFunction_18(data, threadData);

  TrainCrossing_Sensors_eqFunction_19(data, threadData);
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
#define _OMC_LIT_RESOURCE_4_dir_data "E:/Onlab/TrainCrossing2.0"
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
  data->modelData->modelDir = "E:/Onlab/TrainCrossing2.0";
  data->modelData->modelGUID = "{18559699-49b0-491e-9aeb-b30172896581}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 8;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 8;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 1;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 3;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 2;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TrainCrossing_Sensors_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 35;
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

