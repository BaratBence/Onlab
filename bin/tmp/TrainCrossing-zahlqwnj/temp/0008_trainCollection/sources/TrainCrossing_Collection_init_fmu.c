#include "simulation_data.h"

OMC_DISABLE_OPT
void TrainCrossing_Collection_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-006;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "E:/Modelica/";
  modelData->realVarsData[0].info.id = 1000;
  modelData->realVarsData[0].info.name = "Distance1";
  modelData->realVarsData[0].info.comment = "";
  modelData->realVarsData[0].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[0].info.info.lineStart = 256;
  modelData->realVarsData[0].info.info.colStart = 5;
  modelData->realVarsData[0].info.info.lineEnd = 256;
  modelData->realVarsData[0].info.info.colEnd = 51;
  modelData->realVarsData[0].info.info.readonly = 0;
  modelData->realVarsData[0].attribute.unit = "";
  modelData->realVarsData[0].attribute.displayUnit = "";
  modelData->realVarsData[0].attribute.min = -DBL_MAX;
  modelData->realVarsData[0].attribute.max = DBL_MAX;
  modelData->realVarsData[0].attribute.fixed = 1;
  modelData->realVarsData[0].attribute.useNominal = 0;
  modelData->realVarsData[0].attribute.nominal = 1.0;
  modelData->realVarsData[0].attribute.start = 0.0;
  modelData->realVarsData[1].info.id = 1001;
  modelData->realVarsData[1].info.name = "Distance2";
  modelData->realVarsData[1].info.comment = "";
  modelData->realVarsData[1].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[1].info.info.lineStart = 257;
  modelData->realVarsData[1].info.info.colStart = 5;
  modelData->realVarsData[1].info.info.lineEnd = 257;
  modelData->realVarsData[1].info.info.colEnd = 51;
  modelData->realVarsData[1].info.info.readonly = 0;
  modelData->realVarsData[1].attribute.unit = "";
  modelData->realVarsData[1].attribute.displayUnit = "";
  modelData->realVarsData[1].attribute.min = -DBL_MAX;
  modelData->realVarsData[1].attribute.max = DBL_MAX;
  modelData->realVarsData[1].attribute.fixed = 1;
  modelData->realVarsData[1].attribute.useNominal = 0;
  modelData->realVarsData[1].attribute.nominal = 1.0;
  modelData->realVarsData[1].attribute.start = 0.0;
  modelData->realVarsData[2].info.id = 1002;
  modelData->realVarsData[2].info.name = "Distance3";
  modelData->realVarsData[2].info.comment = "";
  modelData->realVarsData[2].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[2].info.info.lineStart = 258;
  modelData->realVarsData[2].info.info.colStart = 5;
  modelData->realVarsData[2].info.info.lineEnd = 258;
  modelData->realVarsData[2].info.info.colEnd = 51;
  modelData->realVarsData[2].info.info.readonly = 0;
  modelData->realVarsData[2].attribute.unit = "";
  modelData->realVarsData[2].attribute.displayUnit = "";
  modelData->realVarsData[2].attribute.min = -DBL_MAX;
  modelData->realVarsData[2].attribute.max = DBL_MAX;
  modelData->realVarsData[2].attribute.fixed = 1;
  modelData->realVarsData[2].attribute.useNominal = 0;
  modelData->realVarsData[2].attribute.nominal = 1.0;
  modelData->realVarsData[2].attribute.start = 0.0;
  modelData->realVarsData[3].info.id = 1003;
  modelData->realVarsData[3].info.name = "DistanceVec[1]";
  modelData->realVarsData[3].info.comment = "";
  modelData->realVarsData[3].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[3].info.info.lineStart = 267;
  modelData->realVarsData[3].info.info.colStart = 5;
  modelData->realVarsData[3].info.info.lineEnd = 267;
  modelData->realVarsData[3].info.info.colEnd = 66;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "";
  modelData->realVarsData[3].attribute.displayUnit = "";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 0;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 0.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "DistanceVec[2]";
  modelData->realVarsData[4].info.comment = "";
  modelData->realVarsData[4].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[4].info.info.lineStart = 267;
  modelData->realVarsData[4].info.info.colStart = 5;
  modelData->realVarsData[4].info.info.lineEnd = 267;
  modelData->realVarsData[4].info.info.colEnd = 66;
  modelData->realVarsData[4].info.info.readonly = 0;
  modelData->realVarsData[4].attribute.unit = "";
  modelData->realVarsData[4].attribute.displayUnit = "";
  modelData->realVarsData[4].attribute.min = -DBL_MAX;
  modelData->realVarsData[4].attribute.max = DBL_MAX;
  modelData->realVarsData[4].attribute.fixed = 0;
  modelData->realVarsData[4].attribute.useNominal = 0;
  modelData->realVarsData[4].attribute.nominal = 1.0;
  modelData->realVarsData[4].attribute.start = 0.0;
  modelData->realVarsData[5].info.id = 1005;
  modelData->realVarsData[5].info.name = "DistanceVec[3]";
  modelData->realVarsData[5].info.comment = "";
  modelData->realVarsData[5].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[5].info.info.lineStart = 267;
  modelData->realVarsData[5].info.info.colStart = 5;
  modelData->realVarsData[5].info.info.lineEnd = 267;
  modelData->realVarsData[5].info.info.colEnd = 66;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 0;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realVarsData[6].info.id = 1006;
  modelData->realVarsData[6].info.name = "Length1";
  modelData->realVarsData[6].info.comment = "";
  modelData->realVarsData[6].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[6].info.info.lineStart = 261;
  modelData->realVarsData[6].info.info.colStart = 5;
  modelData->realVarsData[6].info.info.lineEnd = 261;
  modelData->realVarsData[6].info.info.colEnd = 49;
  modelData->realVarsData[6].info.info.readonly = 0;
  modelData->realVarsData[6].attribute.unit = "";
  modelData->realVarsData[6].attribute.displayUnit = "";
  modelData->realVarsData[6].attribute.min = -DBL_MAX;
  modelData->realVarsData[6].attribute.max = DBL_MAX;
  modelData->realVarsData[6].attribute.fixed = 1;
  modelData->realVarsData[6].attribute.useNominal = 0;
  modelData->realVarsData[6].attribute.nominal = 1.0;
  modelData->realVarsData[6].attribute.start = 0.0;
  modelData->realVarsData[7].info.id = 1007;
  modelData->realVarsData[7].info.name = "Length2";
  modelData->realVarsData[7].info.comment = "";
  modelData->realVarsData[7].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[7].info.info.lineStart = 262;
  modelData->realVarsData[7].info.info.colStart = 5;
  modelData->realVarsData[7].info.info.lineEnd = 262;
  modelData->realVarsData[7].info.info.colEnd = 49;
  modelData->realVarsData[7].info.info.readonly = 0;
  modelData->realVarsData[7].attribute.unit = "";
  modelData->realVarsData[7].attribute.displayUnit = "";
  modelData->realVarsData[7].attribute.min = -DBL_MAX;
  modelData->realVarsData[7].attribute.max = DBL_MAX;
  modelData->realVarsData[7].attribute.fixed = 1;
  modelData->realVarsData[7].attribute.useNominal = 0;
  modelData->realVarsData[7].attribute.nominal = 1.0;
  modelData->realVarsData[7].attribute.start = 0.0;
  modelData->realVarsData[8].info.id = 1008;
  modelData->realVarsData[8].info.name = "Length3";
  modelData->realVarsData[8].info.comment = "";
  modelData->realVarsData[8].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[8].info.info.lineStart = 263;
  modelData->realVarsData[8].info.info.colStart = 5;
  modelData->realVarsData[8].info.info.lineEnd = 263;
  modelData->realVarsData[8].info.info.colEnd = 49;
  modelData->realVarsData[8].info.info.readonly = 0;
  modelData->realVarsData[8].attribute.unit = "";
  modelData->realVarsData[8].attribute.displayUnit = "";
  modelData->realVarsData[8].attribute.min = -DBL_MAX;
  modelData->realVarsData[8].attribute.max = DBL_MAX;
  modelData->realVarsData[8].attribute.fixed = 1;
  modelData->realVarsData[8].attribute.useNominal = 0;
  modelData->realVarsData[8].attribute.nominal = 1.0;
  modelData->realVarsData[8].attribute.start = 0.0;
  modelData->realVarsData[9].info.id = 1009;
  modelData->realVarsData[9].info.name = "LengthVec[1]";
  modelData->realVarsData[9].info.comment = "";
  modelData->realVarsData[9].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[9].info.info.lineStart = 266;
  modelData->realVarsData[9].info.info.colStart = 5;
  modelData->realVarsData[9].info.info.lineEnd = 266;
  modelData->realVarsData[9].info.info.colEnd = 64;
  modelData->realVarsData[9].info.info.readonly = 0;
  modelData->realVarsData[9].attribute.unit = "";
  modelData->realVarsData[9].attribute.displayUnit = "";
  modelData->realVarsData[9].attribute.min = -DBL_MAX;
  modelData->realVarsData[9].attribute.max = DBL_MAX;
  modelData->realVarsData[9].attribute.fixed = 0;
  modelData->realVarsData[9].attribute.useNominal = 0;
  modelData->realVarsData[9].attribute.nominal = 1.0;
  modelData->realVarsData[9].attribute.start = 0.0;
  modelData->realVarsData[10].info.id = 1010;
  modelData->realVarsData[10].info.name = "LengthVec[2]";
  modelData->realVarsData[10].info.comment = "";
  modelData->realVarsData[10].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[10].info.info.lineStart = 266;
  modelData->realVarsData[10].info.info.colStart = 5;
  modelData->realVarsData[10].info.info.lineEnd = 266;
  modelData->realVarsData[10].info.info.colEnd = 64;
  modelData->realVarsData[10].info.info.readonly = 0;
  modelData->realVarsData[10].attribute.unit = "";
  modelData->realVarsData[10].attribute.displayUnit = "";
  modelData->realVarsData[10].attribute.min = -DBL_MAX;
  modelData->realVarsData[10].attribute.max = DBL_MAX;
  modelData->realVarsData[10].attribute.fixed = 0;
  modelData->realVarsData[10].attribute.useNominal = 0;
  modelData->realVarsData[10].attribute.nominal = 1.0;
  modelData->realVarsData[10].attribute.start = 0.0;
  modelData->realVarsData[11].info.id = 1011;
  modelData->realVarsData[11].info.name = "LengthVec[3]";
  modelData->realVarsData[11].info.comment = "";
  modelData->realVarsData[11].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->realVarsData[11].info.info.lineStart = 266;
  modelData->realVarsData[11].info.info.colStart = 5;
  modelData->realVarsData[11].info.info.lineEnd = 266;
  modelData->realVarsData[11].info.info.colEnd = 64;
  modelData->realVarsData[11].info.info.readonly = 0;
  modelData->realVarsData[11].attribute.unit = "";
  modelData->realVarsData[11].attribute.displayUnit = "";
  modelData->realVarsData[11].attribute.min = -DBL_MAX;
  modelData->realVarsData[11].attribute.max = DBL_MAX;
  modelData->realVarsData[11].attribute.fixed = 0;
  modelData->realVarsData[11].attribute.useNominal = 0;
  modelData->realVarsData[11].attribute.nominal = 1.0;
  modelData->realVarsData[11].attribute.start = 0.0;
  modelData->integerParameterData[0].info.id = 1012;
  modelData->integerParameterData[0].info.name = "size";
  modelData->integerParameterData[0].info.comment = "";
  modelData->integerParameterData[0].info.info.filename = "E:/Onlab/TrainCrossing2.2/TrainCrossing.mo";
  modelData->integerParameterData[0].info.info.lineStart = 268;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 268;
  modelData->integerParameterData[0].info.info.colEnd = 30;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 3;
}