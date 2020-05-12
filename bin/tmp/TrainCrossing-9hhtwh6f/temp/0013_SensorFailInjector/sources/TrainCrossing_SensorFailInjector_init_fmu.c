#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainCrossing_SensorFailInjector_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-006;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "E:/Modelica/";
  modelData->booleanVarsData[0].info.id = 1000;
  modelData->booleanVarsData[0].info.name = "$outputAlias_Sensorfail";
  modelData->booleanVarsData[0].info.comment = "";
  modelData->booleanVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[0].info.info.lineStart = 286;
  modelData->booleanVarsData[0].info.info.colStart = 5;
  modelData->booleanVarsData[0].info.info.lineEnd = 286;
  modelData->booleanVarsData[0].info.info.colEnd = 69;
  modelData->booleanVarsData[0].info.info.readonly = 0;
  modelData->booleanVarsData[0].attribute.fixed = 0;
  modelData->booleanVarsData[0].attribute.start = 0;
  modelData->booleanVarsData[1].info.id = 1001;
  modelData->booleanVarsData[1].info.name = "$whenCondition1";
  modelData->booleanVarsData[1].info.comment = "time >= 30.0";
  modelData->booleanVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[1].info.info.lineStart = 288;
  modelData->booleanVarsData[1].info.info.colStart = 23;
  modelData->booleanVarsData[1].info.info.lineEnd = 288;
  modelData->booleanVarsData[1].info.info.colEnd = 38;
  modelData->booleanVarsData[1].info.info.readonly = 0;
  modelData->booleanVarsData[1].attribute.fixed = 1;
  modelData->booleanVarsData[1].attribute.start = 0;
  modelData->booleanVarsData[2].info.id = 1002;
  modelData->booleanVarsData[2].info.name = "Sensorfail";
  modelData->booleanVarsData[2].info.comment = "";
  modelData->booleanVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing/TrainCrossing.mo";
  modelData->booleanVarsData[2].info.info.lineStart = 286;
  modelData->booleanVarsData[2].info.info.colStart = 5;
  modelData->booleanVarsData[2].info.info.lineEnd = 286;
  modelData->booleanVarsData[2].info.info.colEnd = 69;
  modelData->booleanVarsData[2].info.info.readonly = 0;
  modelData->booleanVarsData[2].attribute.fixed = 0;
  modelData->booleanVarsData[2].attribute.start = 0;
}