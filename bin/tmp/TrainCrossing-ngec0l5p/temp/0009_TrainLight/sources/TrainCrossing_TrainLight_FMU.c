// define class name and unique id
#define MODEL_IDENTIFIER TrainCrossing_TrainLight
#define MODEL_GUID "{74615363-f1d6-4219-a952-b6a849431a0f}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "TrainCrossing_TrainLight_functions.h"
#include "simulation/solver/initialization/initialization.h"
#include "simulation/solver/events.h"
#include "fmi-export/fmu2_model_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);

// define model size
#define NUMBER_OF_STATES 2
#define NUMBER_OF_EVENT_INDICATORS 5
#define NUMBER_OF_REALS 37
#define NUMBER_OF_INTEGERS 10
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 103
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1 }
#define STATESDERIVATIVES { 2, 3 }


// implementation of the Model Exchange functions
extern void TrainCrossing_TrainLight_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc TrainCrossing_TrainLight_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 90.0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 90.0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 50.0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[16].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[17].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[18].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[19].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[20].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[21].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[22].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[23].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[24].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[25].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[1].attribute.start = 1;
  comp->fmuData->modelData->integerVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[9].attribute.start = 1;
  comp->fmuData->modelData->booleanVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[16].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[17].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[18].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[19].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[20].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[21].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[22].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[23].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[24].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[25].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[26].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[27].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[28].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[29].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[30].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[31].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[32].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[33].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[34].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 50.0;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 0.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[1].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[2].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[3].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[4].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[5].attribute.start = 2;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = 0;
}
// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start =  comp->fmuData->localData[0]->realVars[0];
  comp->fmuData->modelData->realVarsData[1].attribute.start =  comp->fmuData->localData[0]->realVars[1];
  comp->fmuData->modelData->realVarsData[2].attribute.start =  comp->fmuData->localData[0]->realVars[2];
  comp->fmuData->modelData->realVarsData[3].attribute.start =  comp->fmuData->localData[0]->realVars[3];
  comp->fmuData->modelData->realVarsData[4].attribute.start =  comp->fmuData->localData[0]->realVars[4];
  comp->fmuData->modelData->realVarsData[5].attribute.start =  comp->fmuData->localData[0]->realVars[5];
  comp->fmuData->modelData->realVarsData[6].attribute.start =  comp->fmuData->localData[0]->realVars[6];
  comp->fmuData->modelData->realVarsData[7].attribute.start =  comp->fmuData->localData[0]->realVars[7];
  comp->fmuData->modelData->realVarsData[8].attribute.start =  comp->fmuData->localData[0]->realVars[8];
  comp->fmuData->modelData->realVarsData[9].attribute.start =  comp->fmuData->localData[0]->realVars[9];
  comp->fmuData->modelData->realVarsData[10].attribute.start =  comp->fmuData->localData[0]->realVars[10];
  comp->fmuData->modelData->realVarsData[11].attribute.start =  comp->fmuData->localData[0]->realVars[11];
  comp->fmuData->modelData->realVarsData[12].attribute.start =  comp->fmuData->localData[0]->realVars[12];
  comp->fmuData->modelData->realVarsData[13].attribute.start =  comp->fmuData->localData[0]->realVars[13];
  comp->fmuData->modelData->realVarsData[14].attribute.start =  comp->fmuData->localData[0]->realVars[14];
  comp->fmuData->modelData->realVarsData[15].attribute.start =  comp->fmuData->localData[0]->realVars[15];
  comp->fmuData->modelData->realVarsData[16].attribute.start =  comp->fmuData->localData[0]->realVars[16];
  comp->fmuData->modelData->realVarsData[17].attribute.start =  comp->fmuData->localData[0]->realVars[17];
  comp->fmuData->modelData->realVarsData[18].attribute.start =  comp->fmuData->localData[0]->realVars[18];
  comp->fmuData->modelData->realVarsData[19].attribute.start =  comp->fmuData->localData[0]->realVars[19];
  comp->fmuData->modelData->realVarsData[20].attribute.start =  comp->fmuData->localData[0]->realVars[20];
  comp->fmuData->modelData->realVarsData[21].attribute.start =  comp->fmuData->localData[0]->realVars[21];
  comp->fmuData->modelData->realVarsData[22].attribute.start =  comp->fmuData->localData[0]->realVars[22];
  comp->fmuData->modelData->realVarsData[23].attribute.start =  comp->fmuData->localData[0]->realVars[23];
  comp->fmuData->modelData->realVarsData[24].attribute.start =  comp->fmuData->localData[0]->realVars[24];
  comp->fmuData->modelData->realVarsData[25].attribute.start =  comp->fmuData->localData[0]->realVars[25];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->integerVarsData[1].attribute.start =  comp->fmuData->localData[0]->integerVars[1];
  comp->fmuData->modelData->integerVarsData[2].attribute.start =  comp->fmuData->localData[0]->integerVars[2];
  comp->fmuData->modelData->booleanVarsData[0].attribute.start =  comp->fmuData->localData[0]->booleanVars[0];
  comp->fmuData->modelData->booleanVarsData[1].attribute.start =  comp->fmuData->localData[0]->booleanVars[1];
  comp->fmuData->modelData->booleanVarsData[2].attribute.start =  comp->fmuData->localData[0]->booleanVars[2];
  comp->fmuData->modelData->booleanVarsData[3].attribute.start =  comp->fmuData->localData[0]->booleanVars[3];
  comp->fmuData->modelData->booleanVarsData[4].attribute.start =  comp->fmuData->localData[0]->booleanVars[4];
  comp->fmuData->modelData->booleanVarsData[5].attribute.start =  comp->fmuData->localData[0]->booleanVars[5];
  comp->fmuData->modelData->booleanVarsData[6].attribute.start =  comp->fmuData->localData[0]->booleanVars[6];
  comp->fmuData->modelData->booleanVarsData[7].attribute.start =  comp->fmuData->localData[0]->booleanVars[7];
  comp->fmuData->modelData->booleanVarsData[8].attribute.start =  comp->fmuData->localData[0]->booleanVars[8];
  comp->fmuData->modelData->booleanVarsData[9].attribute.start =  comp->fmuData->localData[0]->booleanVars[9];
  comp->fmuData->modelData->booleanVarsData[10].attribute.start =  comp->fmuData->localData[0]->booleanVars[10];
  comp->fmuData->modelData->booleanVarsData[11].attribute.start =  comp->fmuData->localData[0]->booleanVars[11];
  comp->fmuData->modelData->booleanVarsData[12].attribute.start =  comp->fmuData->localData[0]->booleanVars[12];
  comp->fmuData->modelData->booleanVarsData[13].attribute.start =  comp->fmuData->localData[0]->booleanVars[13];
  comp->fmuData->modelData->booleanVarsData[14].attribute.start =  comp->fmuData->localData[0]->booleanVars[14];
  comp->fmuData->modelData->booleanVarsData[15].attribute.start =  comp->fmuData->localData[0]->booleanVars[15];
  comp->fmuData->modelData->booleanVarsData[16].attribute.start =  comp->fmuData->localData[0]->booleanVars[16];
  comp->fmuData->modelData->booleanVarsData[17].attribute.start =  comp->fmuData->localData[0]->booleanVars[17];
  comp->fmuData->modelData->booleanVarsData[18].attribute.start =  comp->fmuData->localData[0]->booleanVars[18];
  comp->fmuData->modelData->booleanVarsData[19].attribute.start =  comp->fmuData->localData[0]->booleanVars[19];
  comp->fmuData->modelData->booleanVarsData[20].attribute.start =  comp->fmuData->localData[0]->booleanVars[20];
  comp->fmuData->modelData->booleanVarsData[21].attribute.start =  comp->fmuData->localData[0]->booleanVars[21];
  comp->fmuData->modelData->booleanVarsData[22].attribute.start =  comp->fmuData->localData[0]->booleanVars[22];
  comp->fmuData->modelData->booleanVarsData[23].attribute.start =  comp->fmuData->localData[0]->booleanVars[23];
  comp->fmuData->modelData->booleanVarsData[24].attribute.start =  comp->fmuData->localData[0]->booleanVars[24];
  comp->fmuData->modelData->booleanVarsData[25].attribute.start =  comp->fmuData->localData[0]->booleanVars[25];
  comp->fmuData->modelData->booleanVarsData[26].attribute.start =  comp->fmuData->localData[0]->booleanVars[26];
  comp->fmuData->modelData->booleanVarsData[27].attribute.start =  comp->fmuData->localData[0]->booleanVars[27];
  comp->fmuData->modelData->booleanVarsData[28].attribute.start =  comp->fmuData->localData[0]->booleanVars[28];
  comp->fmuData->modelData->booleanVarsData[29].attribute.start =  comp->fmuData->localData[0]->booleanVars[29];
  comp->fmuData->modelData->booleanVarsData[30].attribute.start =  comp->fmuData->localData[0]->booleanVars[30];
  comp->fmuData->modelData->booleanVarsData[31].attribute.start =  comp->fmuData->localData[0]->booleanVars[31];
  comp->fmuData->modelData->booleanVarsData[32].attribute.start =  comp->fmuData->localData[0]->booleanVars[32];
  comp->fmuData->modelData->booleanVarsData[33].attribute.start =  comp->fmuData->localData[0]->booleanVars[33];
  comp->fmuData->modelData->booleanVarsData[34].attribute.start =  comp->fmuData->localData[0]->booleanVars[34];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->integerParameterData[1].attribute.start = comp->fmuData->simulationInfo->integerParameter[1];
  comp->fmuData->modelData->integerParameterData[2].attribute.start = comp->fmuData->simulationInfo->integerParameter[2];
  comp->fmuData->modelData->integerParameterData[3].attribute.start = comp->fmuData->simulationInfo->integerParameter[3];
  comp->fmuData->modelData->integerParameterData[4].attribute.start = comp->fmuData->simulationInfo->integerParameter[4];
  comp->fmuData->modelData->integerParameterData[5].attribute.start = comp->fmuData->simulationInfo->integerParameter[5];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = comp->fmuData->simulationInfo->booleanParameter[2];
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = comp->fmuData->simulationInfo->booleanParameter[3];
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = comp->fmuData->simulationInfo->booleanParameter[4];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[5] = {
  0, 26, 25, 25, 25
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 26) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 32) {
    return comp->fmuData->simulationInfo->realParameter[vr-26];
  }
  if (vr < 37) {
    int ix = realAliasIndexes[vr-32];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  if (vr < 26) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 32) {
    comp->fmuData->simulationInfo->realParameter[vr-26] = value;
    return fmi2OK;
  }
  if (vr < 37) {
    int ix = realAliasIndexes[vr-32];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

static const int intAliasIndexes[1] = {
  0
};

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 3) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 9) {
    return comp->fmuData->simulationInfo->integerParameter[vr-3];
  }
  if (vr < 10) {
    int ix = intAliasIndexes[vr-9];
    return ix>=0 ? getInteger(comp, ix) : -getInteger(comp, -(ix+1));
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  if (vr < 3) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 9) {
    comp->fmuData->simulationInfo->integerParameter[vr-3] = value;
    return fmi2OK;
  }
  if (vr < 10) {
    int ix = intAliasIndexes[vr-9];
    return ix >= 0 ? setInteger(comp, ix, value) : setInteger(comp, -(ix+1), -value);
  }
  return fmi2Error;
}
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return comp->fmuData->localData[0]->booleanVars[0]; break;
    case 1 : return comp->fmuData->localData[0]->booleanVars[1]; break;
    case 2 : return comp->fmuData->localData[0]->booleanVars[2]; break;
    case 3 : return comp->fmuData->localData[0]->booleanVars[3]; break;
    case 4 : return comp->fmuData->localData[0]->booleanVars[4]; break;
    case 5 : return comp->fmuData->localData[0]->booleanVars[5]; break;
    case 6 : return comp->fmuData->localData[0]->booleanVars[6]; break;
    case 7 : return comp->fmuData->localData[0]->booleanVars[7]; break;
    case 8 : return comp->fmuData->localData[0]->booleanVars[8]; break;
    case 9 : return comp->fmuData->localData[0]->booleanVars[9]; break;
    case 10 : return comp->fmuData->localData[0]->booleanVars[10]; break;
    case 11 : return comp->fmuData->localData[0]->booleanVars[11]; break;
    case 12 : return comp->fmuData->localData[0]->booleanVars[12]; break;
    case 13 : return comp->fmuData->localData[0]->booleanVars[13]; break;
    case 14 : return comp->fmuData->localData[0]->booleanVars[14]; break;
    case 15 : return comp->fmuData->localData[0]->booleanVars[15]; break;
    case 16 : return comp->fmuData->localData[0]->booleanVars[16]; break;
    case 17 : return comp->fmuData->localData[0]->booleanVars[17]; break;
    case 18 : return comp->fmuData->localData[0]->booleanVars[18]; break;
    case 19 : return comp->fmuData->localData[0]->booleanVars[19]; break;
    case 20 : return comp->fmuData->localData[0]->booleanVars[20]; break;
    case 21 : return comp->fmuData->localData[0]->booleanVars[21]; break;
    case 22 : return comp->fmuData->localData[0]->booleanVars[22]; break;
    case 23 : return comp->fmuData->localData[0]->booleanVars[23]; break;
    case 24 : return comp->fmuData->localData[0]->booleanVars[24]; break;
    case 25 : return comp->fmuData->localData[0]->booleanVars[25]; break;
    case 26 : return comp->fmuData->localData[0]->booleanVars[26]; break;
    case 27 : return comp->fmuData->localData[0]->booleanVars[27]; break;
    case 28 : return comp->fmuData->localData[0]->booleanVars[28]; break;
    case 29 : return comp->fmuData->localData[0]->booleanVars[29]; break;
    case 30 : return comp->fmuData->localData[0]->booleanVars[30]; break;
    case 31 : return comp->fmuData->localData[0]->booleanVars[31]; break;
    case 32 : return comp->fmuData->localData[0]->booleanVars[32]; break;
    case 33 : return comp->fmuData->localData[0]->booleanVars[33]; break;
    case 34 : return comp->fmuData->localData[0]->booleanVars[34]; break;
    case 35 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 36 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 37 : return comp->fmuData->simulationInfo->booleanParameter[2]; break;
    case 38 : return comp->fmuData->simulationInfo->booleanParameter[3]; break;
    case 39 : return comp->fmuData->simulationInfo->booleanParameter[4]; break;
    case 40 : return getBoolean(comp, 10); break;
    case 41 : return getBoolean(comp, 11); break;
    case 42 : return getBoolean(comp, 23); break;
    case 43 : return getBoolean(comp, 30); break;
    case 44 : return getBoolean(comp, 11); break;
    case 45 : return getBoolean(comp, 16); break;
    case 46 : return getBoolean(comp, 11); break;
    case 47 : return getBoolean(comp, 33); break;
    case 48 : return getBoolean(comp, 34); break;
    case 49 : return (! getBoolean(comp, 10)); break;
    case 50 : return getBoolean(comp, 16); break;
    case 51 : return getBoolean(comp, 11); break;
    case 52 : return getBoolean(comp, 16); break;
    case 53 : return (! getBoolean(comp, 10)); break;
    case 54 : return getBoolean(comp, 18); break;
    case 55 : return getBoolean(comp, 16); break;
    case 56 : return getBoolean(comp, 17); break;
    case 57 : return getBoolean(comp, 31); break;
    case 58 : return getBoolean(comp, 16); break;
    case 59 : return getBoolean(comp, 17); break;
    case 60 : return getBoolean(comp, 24); break;
    case 61 : return getBoolean(comp, 23); break;
    case 62 : return getBoolean(comp, 17); break;
    case 63 : return getBoolean(comp, 33); break;
    case 64 : return getBoolean(comp, 34); break;
    case 65 : return getBoolean(comp, 10); break;
    case 66 : return getBoolean(comp, 23); break;
    case 67 : return getBoolean(comp, 22); break;
    case 68 : return getBoolean(comp, 23); break;
    case 69 : return getBoolean(comp, 10); break;
    case 70 : return getBoolean(comp, 11); break;
    case 71 : return getBoolean(comp, 23); break;
    case 72 : return (! getBoolean(comp, 32)); break;
    case 73 : return getBoolean(comp, 24); break;
    case 74 : return getBoolean(comp, 17); break;
    case 75 : return getBoolean(comp, 24); break;
    case 76 : return (! getBoolean(comp, 32)); break;
    case 77 : return getBoolean(comp, 6); break;
    case 78 : return getBoolean(comp, 24); break;
    case 79 : return getBoolean(comp, 6); break;
    case 80 : return getBoolean(comp, 24); break;
    case 81 : return getBoolean(comp, 6); break;
    case 82 : return getBoolean(comp, 31); break;
    case 83 : return getBoolean(comp, 30); break;
    case 84 : return getBoolean(comp, 6); break;
    case 85 : return getBoolean(comp, 33); break;
    case 86 : return getBoolean(comp, 34); break;
    case 87 : return getBoolean(comp, 10); break;
    case 88 : return getBoolean(comp, 30); break;
    case 89 : return getBoolean(comp, 29); break;
    case 90 : return getBoolean(comp, 30); break;
    case 91 : return getBoolean(comp, 10); break;
    case 92 : return getBoolean(comp, 12); break;
    case 93 : return getBoolean(comp, 30); break;
    case 94 : return getBoolean(comp, 32); break;
    case 95 : return getBoolean(comp, 31); break;
    case 96 : return getBoolean(comp, 6); break;
    case 97 : return getBoolean(comp, 31); break;
    case 98 : return getBoolean(comp, 32); break;
    case 99 : return getBoolean(comp, 17); break;
    case 100 : return getBoolean(comp, 31); break;
    case 101 : return getBoolean(comp, 33); break;
    case 102 : return getBoolean(comp, 34); break;
    default:
      return fmi2False;
  }
}

fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value) {
  switch (vr) {
    case 0 : comp->fmuData->localData[0]->booleanVars[0] = value; break;
    case 1 : comp->fmuData->localData[0]->booleanVars[1] = value; break;
    case 2 : comp->fmuData->localData[0]->booleanVars[2] = value; break;
    case 3 : comp->fmuData->localData[0]->booleanVars[3] = value; break;
    case 4 : comp->fmuData->localData[0]->booleanVars[4] = value; break;
    case 5 : comp->fmuData->localData[0]->booleanVars[5] = value; break;
    case 6 : comp->fmuData->localData[0]->booleanVars[6] = value; break;
    case 7 : comp->fmuData->localData[0]->booleanVars[7] = value; break;
    case 8 : comp->fmuData->localData[0]->booleanVars[8] = value; break;
    case 9 : comp->fmuData->localData[0]->booleanVars[9] = value; break;
    case 10 : comp->fmuData->localData[0]->booleanVars[10] = value; break;
    case 11 : comp->fmuData->localData[0]->booleanVars[11] = value; break;
    case 12 : comp->fmuData->localData[0]->booleanVars[12] = value; break;
    case 13 : comp->fmuData->localData[0]->booleanVars[13] = value; break;
    case 14 : comp->fmuData->localData[0]->booleanVars[14] = value; break;
    case 15 : comp->fmuData->localData[0]->booleanVars[15] = value; break;
    case 16 : comp->fmuData->localData[0]->booleanVars[16] = value; break;
    case 17 : comp->fmuData->localData[0]->booleanVars[17] = value; break;
    case 18 : comp->fmuData->localData[0]->booleanVars[18] = value; break;
    case 19 : comp->fmuData->localData[0]->booleanVars[19] = value; break;
    case 20 : comp->fmuData->localData[0]->booleanVars[20] = value; break;
    case 21 : comp->fmuData->localData[0]->booleanVars[21] = value; break;
    case 22 : comp->fmuData->localData[0]->booleanVars[22] = value; break;
    case 23 : comp->fmuData->localData[0]->booleanVars[23] = value; break;
    case 24 : comp->fmuData->localData[0]->booleanVars[24] = value; break;
    case 25 : comp->fmuData->localData[0]->booleanVars[25] = value; break;
    case 26 : comp->fmuData->localData[0]->booleanVars[26] = value; break;
    case 27 : comp->fmuData->localData[0]->booleanVars[27] = value; break;
    case 28 : comp->fmuData->localData[0]->booleanVars[28] = value; break;
    case 29 : comp->fmuData->localData[0]->booleanVars[29] = value; break;
    case 30 : comp->fmuData->localData[0]->booleanVars[30] = value; break;
    case 31 : comp->fmuData->localData[0]->booleanVars[31] = value; break;
    case 32 : comp->fmuData->localData[0]->booleanVars[32] = value; break;
    case 33 : comp->fmuData->localData[0]->booleanVars[33] = value; break;
    case 34 : comp->fmuData->localData[0]->booleanVars[34] = value; break;
    case 35 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 36 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 37 : comp->fmuData->simulationInfo->booleanParameter[2] = value; break;
    case 38 : comp->fmuData->simulationInfo->booleanParameter[3] = value; break;
    case 39 : comp->fmuData->simulationInfo->booleanParameter[4] = value; break;
    case 40 : return setBoolean(comp, 10, value); break;
    case 41 : return setBoolean(comp, 11, value); break;
    case 42 : return setBoolean(comp, 23, value); break;
    case 43 : return setBoolean(comp, 30, value); break;
    case 44 : return setBoolean(comp, 11, value); break;
    case 45 : return setBoolean(comp, 16, value); break;
    case 46 : return setBoolean(comp, 11, value); break;
    case 47 : return setBoolean(comp, 33, value); break;
    case 48 : return setBoolean(comp, 34, value); break;
    case 49 : return setBoolean(comp, 10, (! value)); break;
    case 50 : return setBoolean(comp, 16, value); break;
    case 51 : return setBoolean(comp, 11, value); break;
    case 52 : return setBoolean(comp, 16, value); break;
    case 53 : return setBoolean(comp, 10, (! value)); break;
    case 54 : return setBoolean(comp, 18, value); break;
    case 55 : return setBoolean(comp, 16, value); break;
    case 56 : return setBoolean(comp, 17, value); break;
    case 57 : return setBoolean(comp, 31, value); break;
    case 58 : return setBoolean(comp, 16, value); break;
    case 59 : return setBoolean(comp, 17, value); break;
    case 60 : return setBoolean(comp, 24, value); break;
    case 61 : return setBoolean(comp, 23, value); break;
    case 62 : return setBoolean(comp, 17, value); break;
    case 63 : return setBoolean(comp, 33, value); break;
    case 64 : return setBoolean(comp, 34, value); break;
    case 65 : return setBoolean(comp, 10, value); break;
    case 66 : return setBoolean(comp, 23, value); break;
    case 67 : return setBoolean(comp, 22, value); break;
    case 68 : return setBoolean(comp, 23, value); break;
    case 69 : return setBoolean(comp, 10, value); break;
    case 70 : return setBoolean(comp, 11, value); break;
    case 71 : return setBoolean(comp, 23, value); break;
    case 72 : return setBoolean(comp, 32, (! value)); break;
    case 73 : return setBoolean(comp, 24, value); break;
    case 74 : return setBoolean(comp, 17, value); break;
    case 75 : return setBoolean(comp, 24, value); break;
    case 76 : return setBoolean(comp, 32, (! value)); break;
    case 77 : return setBoolean(comp, 6, value); break;
    case 78 : return setBoolean(comp, 24, value); break;
    case 79 : return setBoolean(comp, 6, value); break;
    case 80 : return setBoolean(comp, 24, value); break;
    case 81 : return setBoolean(comp, 6, value); break;
    case 82 : return setBoolean(comp, 31, value); break;
    case 83 : return setBoolean(comp, 30, value); break;
    case 84 : return setBoolean(comp, 6, value); break;
    case 85 : return setBoolean(comp, 33, value); break;
    case 86 : return setBoolean(comp, 34, value); break;
    case 87 : return setBoolean(comp, 10, value); break;
    case 88 : return setBoolean(comp, 30, value); break;
    case 89 : return setBoolean(comp, 29, value); break;
    case 90 : return setBoolean(comp, 30, value); break;
    case 91 : return setBoolean(comp, 10, value); break;
    case 92 : return setBoolean(comp, 12, value); break;
    case 93 : return setBoolean(comp, 30, value); break;
    case 94 : return setBoolean(comp, 32, value); break;
    case 95 : return setBoolean(comp, 31, value); break;
    case 96 : return setBoolean(comp, 6, value); break;
    case 97 : return setBoolean(comp, 31, value); break;
    case 98 : return setBoolean(comp, 32, value); break;
    case 99 : return setBoolean(comp, 17, value); break;
    case 100 : return setBoolean(comp, 31, value); break;
    case 101 : return setBoolean(comp, 33, value); break;
    case 102 : return setBoolean(comp, 34, value); break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    default:
      return "";
  }
}

fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value) {
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value){
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

/* function maps input references to a input index used in partialDerivatives */
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 4: return 0; break;
      case 5: return 1; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

