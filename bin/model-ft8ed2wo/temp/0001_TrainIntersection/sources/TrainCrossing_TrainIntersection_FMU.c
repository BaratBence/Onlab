// define class name and unique id
#define MODEL_IDENTIFIER TrainCrossing_TrainIntersection
#define MODEL_GUID "{05650d15-c8ce-4b51-a6df-54d69fa8c824}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "TrainCrossing_TrainIntersection_functions.h"
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
#define NUMBER_OF_STATES 14
#define NUMBER_OF_EVENT_INDICATORS 22
#define NUMBER_OF_REALS 125
#define NUMBER_OF_INTEGERS 21
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 132
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }
#define STATESDERIVATIVES { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }


// implementation of the Model Exchange functions
extern void TrainCrossing_TrainIntersection_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc TrainCrossing_TrainIntersection_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 90.0;
  comp->fmuData->modelData->realVarsData[13].attribute.start = 0.0;
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
  comp->fmuData->modelData->realVarsData[26].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[27].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[28].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[29].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[30].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[31].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[32].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[33].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[34].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[35].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[36].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[37].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[38].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[39].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[40].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[41].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[42].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[43].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[44].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[45].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[46].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[47].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[48].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[49].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[50].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[51].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[52].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[53].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[54].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 1;
  comp->fmuData->modelData->integerVarsData[1].attribute.start = 1;
  comp->fmuData->modelData->integerVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[3].attribute.start = 1;
  comp->fmuData->modelData->integerVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[6].attribute.start = 1;
  comp->fmuData->modelData->integerVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[16].attribute.start = 1;
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
  comp->fmuData->modelData->booleanVarsData[35].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[36].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[37].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[38].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[39].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[40].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[41].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[42].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[43].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[44].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[45].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[46].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[47].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[48].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[49].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[50].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[51].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[52].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[53].attribute.start = 1;
  comp->fmuData->modelData->booleanVarsData[54].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[55].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[56].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 4.74;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 13.14;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 90.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 8.76;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 16.7;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 4.74;
  comp->fmuData->modelData->realParameterData[6].attribute.start = 13.14;
  comp->fmuData->modelData->realParameterData[7].attribute.start = 40.0;
  comp->fmuData->modelData->realParameterData[8].attribute.start = 8.76;
  comp->fmuData->modelData->realParameterData[9].attribute.start = 16.7;
  comp->fmuData->modelData->realParameterData[10].attribute.start = 4.74;
  comp->fmuData->modelData->realParameterData[11].attribute.start = 13.14;
  comp->fmuData->modelData->realParameterData[12].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[13].attribute.start = 8.76;
  comp->fmuData->modelData->realParameterData[14].attribute.start = 16.7;
  comp->fmuData->modelData->realParameterData[15].attribute.start = 200.0;
  comp->fmuData->modelData->realParameterData[16].attribute.start = 700.0;
  comp->fmuData->modelData->realParameterData[17].attribute.start = 50.0;
  comp->fmuData->modelData->realParameterData[18].attribute.start = 100.0;
  comp->fmuData->modelData->realParameterData[19].attribute.start = 70.0;
  comp->fmuData->modelData->realParameterData[20].attribute.start = 50.0;
  comp->fmuData->modelData->realParameterData[21].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[22].attribute.start = 70.0;
  comp->fmuData->modelData->realParameterData[23].attribute.start = 50.0;
  comp->fmuData->modelData->realParameterData[24].attribute.start = -2000.0;
  comp->fmuData->modelData->realParameterData[25].attribute.start = 70.0;
  comp->fmuData->modelData->realParameterData[26].attribute.start = 100.0;
  comp->fmuData->modelData->realParameterData[27].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[28].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[29].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[30].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[31].attribute.start = 0.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[1].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[2].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[3].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[4].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[5].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[6].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[7].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[8].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[9].attribute.start = 2;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[9].attribute.start = 0;
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
  comp->fmuData->modelData->realVarsData[26].attribute.start =  comp->fmuData->localData[0]->realVars[26];
  comp->fmuData->modelData->realVarsData[27].attribute.start =  comp->fmuData->localData[0]->realVars[27];
  comp->fmuData->modelData->realVarsData[28].attribute.start =  comp->fmuData->localData[0]->realVars[28];
  comp->fmuData->modelData->realVarsData[29].attribute.start =  comp->fmuData->localData[0]->realVars[29];
  comp->fmuData->modelData->realVarsData[30].attribute.start =  comp->fmuData->localData[0]->realVars[30];
  comp->fmuData->modelData->realVarsData[31].attribute.start =  comp->fmuData->localData[0]->realVars[31];
  comp->fmuData->modelData->realVarsData[32].attribute.start =  comp->fmuData->localData[0]->realVars[32];
  comp->fmuData->modelData->realVarsData[33].attribute.start =  comp->fmuData->localData[0]->realVars[33];
  comp->fmuData->modelData->realVarsData[34].attribute.start =  comp->fmuData->localData[0]->realVars[34];
  comp->fmuData->modelData->realVarsData[35].attribute.start =  comp->fmuData->localData[0]->realVars[35];
  comp->fmuData->modelData->realVarsData[36].attribute.start =  comp->fmuData->localData[0]->realVars[36];
  comp->fmuData->modelData->realVarsData[37].attribute.start =  comp->fmuData->localData[0]->realVars[37];
  comp->fmuData->modelData->realVarsData[38].attribute.start =  comp->fmuData->localData[0]->realVars[38];
  comp->fmuData->modelData->realVarsData[39].attribute.start =  comp->fmuData->localData[0]->realVars[39];
  comp->fmuData->modelData->realVarsData[40].attribute.start =  comp->fmuData->localData[0]->realVars[40];
  comp->fmuData->modelData->realVarsData[41].attribute.start =  comp->fmuData->localData[0]->realVars[41];
  comp->fmuData->modelData->realVarsData[42].attribute.start =  comp->fmuData->localData[0]->realVars[42];
  comp->fmuData->modelData->realVarsData[43].attribute.start =  comp->fmuData->localData[0]->realVars[43];
  comp->fmuData->modelData->realVarsData[44].attribute.start =  comp->fmuData->localData[0]->realVars[44];
  comp->fmuData->modelData->realVarsData[45].attribute.start =  comp->fmuData->localData[0]->realVars[45];
  comp->fmuData->modelData->realVarsData[46].attribute.start =  comp->fmuData->localData[0]->realVars[46];
  comp->fmuData->modelData->realVarsData[47].attribute.start =  comp->fmuData->localData[0]->realVars[47];
  comp->fmuData->modelData->realVarsData[48].attribute.start =  comp->fmuData->localData[0]->realVars[48];
  comp->fmuData->modelData->realVarsData[49].attribute.start =  comp->fmuData->localData[0]->realVars[49];
  comp->fmuData->modelData->realVarsData[50].attribute.start =  comp->fmuData->localData[0]->realVars[50];
  comp->fmuData->modelData->realVarsData[51].attribute.start =  comp->fmuData->localData[0]->realVars[51];
  comp->fmuData->modelData->realVarsData[52].attribute.start =  comp->fmuData->localData[0]->realVars[52];
  comp->fmuData->modelData->realVarsData[53].attribute.start =  comp->fmuData->localData[0]->realVars[53];
  comp->fmuData->modelData->realVarsData[54].attribute.start =  comp->fmuData->localData[0]->realVars[54];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->integerVarsData[1].attribute.start =  comp->fmuData->localData[0]->integerVars[1];
  comp->fmuData->modelData->integerVarsData[2].attribute.start =  comp->fmuData->localData[0]->integerVars[2];
  comp->fmuData->modelData->integerVarsData[3].attribute.start =  comp->fmuData->localData[0]->integerVars[3];
  comp->fmuData->modelData->integerVarsData[4].attribute.start =  comp->fmuData->localData[0]->integerVars[4];
  comp->fmuData->modelData->integerVarsData[5].attribute.start =  comp->fmuData->localData[0]->integerVars[5];
  comp->fmuData->modelData->integerVarsData[6].attribute.start =  comp->fmuData->localData[0]->integerVars[6];
  comp->fmuData->modelData->integerVarsData[7].attribute.start =  comp->fmuData->localData[0]->integerVars[7];
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
  comp->fmuData->modelData->booleanVarsData[35].attribute.start =  comp->fmuData->localData[0]->booleanVars[35];
  comp->fmuData->modelData->booleanVarsData[36].attribute.start =  comp->fmuData->localData[0]->booleanVars[36];
  comp->fmuData->modelData->booleanVarsData[37].attribute.start =  comp->fmuData->localData[0]->booleanVars[37];
  comp->fmuData->modelData->booleanVarsData[38].attribute.start =  comp->fmuData->localData[0]->booleanVars[38];
  comp->fmuData->modelData->booleanVarsData[39].attribute.start =  comp->fmuData->localData[0]->booleanVars[39];
  comp->fmuData->modelData->booleanVarsData[40].attribute.start =  comp->fmuData->localData[0]->booleanVars[40];
  comp->fmuData->modelData->booleanVarsData[41].attribute.start =  comp->fmuData->localData[0]->booleanVars[41];
  comp->fmuData->modelData->booleanVarsData[42].attribute.start =  comp->fmuData->localData[0]->booleanVars[42];
  comp->fmuData->modelData->booleanVarsData[43].attribute.start =  comp->fmuData->localData[0]->booleanVars[43];
  comp->fmuData->modelData->booleanVarsData[44].attribute.start =  comp->fmuData->localData[0]->booleanVars[44];
  comp->fmuData->modelData->booleanVarsData[45].attribute.start =  comp->fmuData->localData[0]->booleanVars[45];
  comp->fmuData->modelData->booleanVarsData[46].attribute.start =  comp->fmuData->localData[0]->booleanVars[46];
  comp->fmuData->modelData->booleanVarsData[47].attribute.start =  comp->fmuData->localData[0]->booleanVars[47];
  comp->fmuData->modelData->booleanVarsData[48].attribute.start =  comp->fmuData->localData[0]->booleanVars[48];
  comp->fmuData->modelData->booleanVarsData[49].attribute.start =  comp->fmuData->localData[0]->booleanVars[49];
  comp->fmuData->modelData->booleanVarsData[50].attribute.start =  comp->fmuData->localData[0]->booleanVars[50];
  comp->fmuData->modelData->booleanVarsData[51].attribute.start =  comp->fmuData->localData[0]->booleanVars[51];
  comp->fmuData->modelData->booleanVarsData[52].attribute.start =  comp->fmuData->localData[0]->booleanVars[52];
  comp->fmuData->modelData->booleanVarsData[53].attribute.start =  comp->fmuData->localData[0]->booleanVars[53];
  comp->fmuData->modelData->booleanVarsData[54].attribute.start =  comp->fmuData->localData[0]->booleanVars[54];
  comp->fmuData->modelData->booleanVarsData[55].attribute.start =  comp->fmuData->localData[0]->booleanVars[55];
  comp->fmuData->modelData->booleanVarsData[56].attribute.start =  comp->fmuData->localData[0]->booleanVars[56];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->realParameterData[6].attribute.start = comp->fmuData->simulationInfo->realParameter[6];
  comp->fmuData->modelData->realParameterData[7].attribute.start = comp->fmuData->simulationInfo->realParameter[7];
  comp->fmuData->modelData->realParameterData[8].attribute.start = comp->fmuData->simulationInfo->realParameter[8];
  comp->fmuData->modelData->realParameterData[9].attribute.start = comp->fmuData->simulationInfo->realParameter[9];
  comp->fmuData->modelData->realParameterData[10].attribute.start = comp->fmuData->simulationInfo->realParameter[10];
  comp->fmuData->modelData->realParameterData[11].attribute.start = comp->fmuData->simulationInfo->realParameter[11];
  comp->fmuData->modelData->realParameterData[12].attribute.start = comp->fmuData->simulationInfo->realParameter[12];
  comp->fmuData->modelData->realParameterData[13].attribute.start = comp->fmuData->simulationInfo->realParameter[13];
  comp->fmuData->modelData->realParameterData[14].attribute.start = comp->fmuData->simulationInfo->realParameter[14];
  comp->fmuData->modelData->realParameterData[15].attribute.start = comp->fmuData->simulationInfo->realParameter[15];
  comp->fmuData->modelData->realParameterData[16].attribute.start = comp->fmuData->simulationInfo->realParameter[16];
  comp->fmuData->modelData->realParameterData[17].attribute.start = comp->fmuData->simulationInfo->realParameter[17];
  comp->fmuData->modelData->realParameterData[18].attribute.start = comp->fmuData->simulationInfo->realParameter[18];
  comp->fmuData->modelData->realParameterData[19].attribute.start = comp->fmuData->simulationInfo->realParameter[19];
  comp->fmuData->modelData->realParameterData[20].attribute.start = comp->fmuData->simulationInfo->realParameter[20];
  comp->fmuData->modelData->realParameterData[21].attribute.start = comp->fmuData->simulationInfo->realParameter[21];
  comp->fmuData->modelData->realParameterData[22].attribute.start = comp->fmuData->simulationInfo->realParameter[22];
  comp->fmuData->modelData->realParameterData[23].attribute.start = comp->fmuData->simulationInfo->realParameter[23];
  comp->fmuData->modelData->realParameterData[24].attribute.start = comp->fmuData->simulationInfo->realParameter[24];
  comp->fmuData->modelData->realParameterData[25].attribute.start = comp->fmuData->simulationInfo->realParameter[25];
  comp->fmuData->modelData->realParameterData[26].attribute.start = comp->fmuData->simulationInfo->realParameter[26];
  comp->fmuData->modelData->realParameterData[27].attribute.start = comp->fmuData->simulationInfo->realParameter[27];
  comp->fmuData->modelData->realParameterData[28].attribute.start = comp->fmuData->simulationInfo->realParameter[28];
  comp->fmuData->modelData->realParameterData[29].attribute.start = comp->fmuData->simulationInfo->realParameter[29];
  comp->fmuData->modelData->realParameterData[30].attribute.start = comp->fmuData->simulationInfo->realParameter[30];
  comp->fmuData->modelData->realParameterData[31].attribute.start = comp->fmuData->simulationInfo->realParameter[31];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->integerParameterData[1].attribute.start = comp->fmuData->simulationInfo->integerParameter[1];
  comp->fmuData->modelData->integerParameterData[2].attribute.start = comp->fmuData->simulationInfo->integerParameter[2];
  comp->fmuData->modelData->integerParameterData[3].attribute.start = comp->fmuData->simulationInfo->integerParameter[3];
  comp->fmuData->modelData->integerParameterData[4].attribute.start = comp->fmuData->simulationInfo->integerParameter[4];
  comp->fmuData->modelData->integerParameterData[5].attribute.start = comp->fmuData->simulationInfo->integerParameter[5];
  comp->fmuData->modelData->integerParameterData[6].attribute.start = comp->fmuData->simulationInfo->integerParameter[6];
  comp->fmuData->modelData->integerParameterData[7].attribute.start = comp->fmuData->simulationInfo->integerParameter[7];
  comp->fmuData->modelData->integerParameterData[8].attribute.start = comp->fmuData->simulationInfo->integerParameter[8];
  comp->fmuData->modelData->integerParameterData[9].attribute.start = comp->fmuData->simulationInfo->integerParameter[9];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = comp->fmuData->simulationInfo->booleanParameter[2];
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = comp->fmuData->simulationInfo->booleanParameter[3];
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = comp->fmuData->simulationInfo->booleanParameter[4];
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = comp->fmuData->simulationInfo->booleanParameter[5];
  comp->fmuData->modelData->booleanParameterData[6].attribute.start = comp->fmuData->simulationInfo->booleanParameter[6];
  comp->fmuData->modelData->booleanParameterData[7].attribute.start = comp->fmuData->simulationInfo->booleanParameter[7];
  comp->fmuData->modelData->booleanParameterData[8].attribute.start = comp->fmuData->simulationInfo->booleanParameter[8];
  comp->fmuData->modelData->booleanParameterData[9].attribute.start = comp->fmuData->simulationInfo->booleanParameter[9];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[38] = {
  1, 4, 7, 12, 55, 60, 65, 81, 1, 4, 7, 12, 55, 60, 65, 81, 1, 4, 7, 12,
  55, 60, 65, 81, 9, 10, 11, 72, 75, 78, 74, 77, 80, 12, 81, 54, 54, 54
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 55) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 87) {
    return comp->fmuData->simulationInfo->realParameter[vr-55];
  }
  if (vr < 125) {
    int ix = realAliasIndexes[vr-87];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  if (vr < 55) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 87) {
    comp->fmuData->simulationInfo->realParameter[vr-55] = value;
    return fmi2OK;
  }
  if (vr < 125) {
    int ix = realAliasIndexes[vr-87];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

static const int intAliasIndexes[3] = {
  2, 2, 2
};

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 8) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 18) {
    return comp->fmuData->simulationInfo->integerParameter[vr-8];
  }
  if (vr < 21) {
    int ix = intAliasIndexes[vr-18];
    return ix>=0 ? getInteger(comp, ix) : -getInteger(comp, -(ix+1));
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  if (vr < 8) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 18) {
    comp->fmuData->simulationInfo->integerParameter[vr-8] = value;
    return fmi2OK;
  }
  if (vr < 21) {
    int ix = intAliasIndexes[vr-18];
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
    case 35 : return comp->fmuData->localData[0]->booleanVars[35]; break;
    case 36 : return comp->fmuData->localData[0]->booleanVars[36]; break;
    case 37 : return comp->fmuData->localData[0]->booleanVars[37]; break;
    case 38 : return comp->fmuData->localData[0]->booleanVars[38]; break;
    case 39 : return comp->fmuData->localData[0]->booleanVars[39]; break;
    case 40 : return comp->fmuData->localData[0]->booleanVars[40]; break;
    case 41 : return comp->fmuData->localData[0]->booleanVars[41]; break;
    case 42 : return comp->fmuData->localData[0]->booleanVars[42]; break;
    case 43 : return comp->fmuData->localData[0]->booleanVars[43]; break;
    case 44 : return comp->fmuData->localData[0]->booleanVars[44]; break;
    case 45 : return comp->fmuData->localData[0]->booleanVars[45]; break;
    case 46 : return comp->fmuData->localData[0]->booleanVars[46]; break;
    case 47 : return comp->fmuData->localData[0]->booleanVars[47]; break;
    case 48 : return comp->fmuData->localData[0]->booleanVars[48]; break;
    case 49 : return comp->fmuData->localData[0]->booleanVars[49]; break;
    case 50 : return comp->fmuData->localData[0]->booleanVars[50]; break;
    case 51 : return comp->fmuData->localData[0]->booleanVars[51]; break;
    case 52 : return comp->fmuData->localData[0]->booleanVars[52]; break;
    case 53 : return comp->fmuData->localData[0]->booleanVars[53]; break;
    case 54 : return comp->fmuData->localData[0]->booleanVars[54]; break;
    case 55 : return comp->fmuData->localData[0]->booleanVars[55]; break;
    case 56 : return comp->fmuData->localData[0]->booleanVars[56]; break;
    case 57 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 58 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 59 : return comp->fmuData->simulationInfo->booleanParameter[2]; break;
    case 60 : return comp->fmuData->simulationInfo->booleanParameter[3]; break;
    case 61 : return comp->fmuData->simulationInfo->booleanParameter[4]; break;
    case 62 : return comp->fmuData->simulationInfo->booleanParameter[5]; break;
    case 63 : return comp->fmuData->simulationInfo->booleanParameter[6]; break;
    case 64 : return comp->fmuData->simulationInfo->booleanParameter[7]; break;
    case 65 : return comp->fmuData->simulationInfo->booleanParameter[8]; break;
    case 66 : return comp->fmuData->simulationInfo->booleanParameter[9]; break;
    case 67 : return getBoolean(comp, 31); break;
    case 68 : return getBoolean(comp, 32); break;
    case 69 : return getBoolean(comp, 53); break;
    case 70 : return getBoolean(comp, 33); break;
    case 71 : return getBoolean(comp, 45); break;
    case 72 : return getBoolean(comp, 52); break;
    case 73 : return getBoolean(comp, 33); break;
    case 74 : return getBoolean(comp, 38); break;
    case 75 : return getBoolean(comp, 33); break;
    case 76 : return getBoolean(comp, 55); break;
    case 77 : return getBoolean(comp, 56); break;
    case 78 : return (! getBoolean(comp, 61)); break;
    case 79 : return getBoolean(comp, 38); break;
    case 80 : return getBoolean(comp, 33); break;
    case 81 : return getBoolean(comp, 38); break;
    case 82 : return (! getBoolean(comp, 61)); break;
    case 83 : return getBoolean(comp, 40); break;
    case 84 : return getBoolean(comp, 38); break;
    case 85 : return getBoolean(comp, 39); break;
    case 86 : return getBoolean(comp, 54); break;
    case 87 : return getBoolean(comp, 38); break;
    case 88 : return getBoolean(comp, 39); break;
    case 89 : return getBoolean(comp, 46); break;
    case 90 : return getBoolean(comp, 45); break;
    case 91 : return getBoolean(comp, 39); break;
    case 92 : return getBoolean(comp, 55); break;
    case 93 : return getBoolean(comp, 56); break;
    case 94 : return getBoolean(comp, 61); break;
    case 95 : return getBoolean(comp, 45); break;
    case 96 : return getBoolean(comp, 44); break;
    case 97 : return getBoolean(comp, 45); break;
    case 98 : return getBoolean(comp, 61); break;
    case 99 : return getBoolean(comp, 33); break;
    case 100 : return getBoolean(comp, 45); break;
    case 101 : return (! getBoolean(comp, 53)); break;
    case 102 : return getBoolean(comp, 46); break;
    case 103 : return getBoolean(comp, 39); break;
    case 104 : return getBoolean(comp, 46); break;
    case 105 : return (! getBoolean(comp, 53)); break;
    case 106 : return getBoolean(comp, 13); break;
    case 107 : return getBoolean(comp, 46); break;
    case 108 : return getBoolean(comp, 13); break;
    case 109 : return getBoolean(comp, 46); break;
    case 110 : return getBoolean(comp, 13); break;
    case 111 : return getBoolean(comp, 54); break;
    case 112 : return getBoolean(comp, 52); break;
    case 113 : return getBoolean(comp, 13); break;
    case 114 : return getBoolean(comp, 55); break;
    case 115 : return getBoolean(comp, 56); break;
    case 116 : return getBoolean(comp, 61); break;
    case 117 : return getBoolean(comp, 52); break;
    case 118 : return getBoolean(comp, 51); break;
    case 119 : return getBoolean(comp, 52); break;
    case 120 : return getBoolean(comp, 61); break;
    case 121 : return getBoolean(comp, 34); break;
    case 122 : return getBoolean(comp, 52); break;
    case 123 : return getBoolean(comp, 54); break;
    case 124 : return getBoolean(comp, 13); break;
    case 125 : return getBoolean(comp, 54); break;
    case 126 : return getBoolean(comp, 53); break;
    case 127 : return getBoolean(comp, 39); break;
    case 128 : return getBoolean(comp, 54); break;
    case 129 : return getBoolean(comp, 53); break;
    case 130 : return getBoolean(comp, 55); break;
    case 131 : return getBoolean(comp, 56); break;
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
    case 35 : comp->fmuData->localData[0]->booleanVars[35] = value; break;
    case 36 : comp->fmuData->localData[0]->booleanVars[36] = value; break;
    case 37 : comp->fmuData->localData[0]->booleanVars[37] = value; break;
    case 38 : comp->fmuData->localData[0]->booleanVars[38] = value; break;
    case 39 : comp->fmuData->localData[0]->booleanVars[39] = value; break;
    case 40 : comp->fmuData->localData[0]->booleanVars[40] = value; break;
    case 41 : comp->fmuData->localData[0]->booleanVars[41] = value; break;
    case 42 : comp->fmuData->localData[0]->booleanVars[42] = value; break;
    case 43 : comp->fmuData->localData[0]->booleanVars[43] = value; break;
    case 44 : comp->fmuData->localData[0]->booleanVars[44] = value; break;
    case 45 : comp->fmuData->localData[0]->booleanVars[45] = value; break;
    case 46 : comp->fmuData->localData[0]->booleanVars[46] = value; break;
    case 47 : comp->fmuData->localData[0]->booleanVars[47] = value; break;
    case 48 : comp->fmuData->localData[0]->booleanVars[48] = value; break;
    case 49 : comp->fmuData->localData[0]->booleanVars[49] = value; break;
    case 50 : comp->fmuData->localData[0]->booleanVars[50] = value; break;
    case 51 : comp->fmuData->localData[0]->booleanVars[51] = value; break;
    case 52 : comp->fmuData->localData[0]->booleanVars[52] = value; break;
    case 53 : comp->fmuData->localData[0]->booleanVars[53] = value; break;
    case 54 : comp->fmuData->localData[0]->booleanVars[54] = value; break;
    case 55 : comp->fmuData->localData[0]->booleanVars[55] = value; break;
    case 56 : comp->fmuData->localData[0]->booleanVars[56] = value; break;
    case 57 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 58 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 59 : comp->fmuData->simulationInfo->booleanParameter[2] = value; break;
    case 60 : comp->fmuData->simulationInfo->booleanParameter[3] = value; break;
    case 61 : comp->fmuData->simulationInfo->booleanParameter[4] = value; break;
    case 62 : comp->fmuData->simulationInfo->booleanParameter[5] = value; break;
    case 63 : comp->fmuData->simulationInfo->booleanParameter[6] = value; break;
    case 64 : comp->fmuData->simulationInfo->booleanParameter[7] = value; break;
    case 65 : comp->fmuData->simulationInfo->booleanParameter[8] = value; break;
    case 66 : comp->fmuData->simulationInfo->booleanParameter[9] = value; break;
    case 67 : return setBoolean(comp, 31, value); break;
    case 68 : return setBoolean(comp, 32, value); break;
    case 69 : return setBoolean(comp, 53, value); break;
    case 70 : return setBoolean(comp, 33, value); break;
    case 71 : return setBoolean(comp, 45, value); break;
    case 72 : return setBoolean(comp, 52, value); break;
    case 73 : return setBoolean(comp, 33, value); break;
    case 74 : return setBoolean(comp, 38, value); break;
    case 75 : return setBoolean(comp, 33, value); break;
    case 76 : return setBoolean(comp, 55, value); break;
    case 77 : return setBoolean(comp, 56, value); break;
    case 78 : return setBoolean(comp, 61, (! value)); break;
    case 79 : return setBoolean(comp, 38, value); break;
    case 80 : return setBoolean(comp, 33, value); break;
    case 81 : return setBoolean(comp, 38, value); break;
    case 82 : return setBoolean(comp, 61, (! value)); break;
    case 83 : return setBoolean(comp, 40, value); break;
    case 84 : return setBoolean(comp, 38, value); break;
    case 85 : return setBoolean(comp, 39, value); break;
    case 86 : return setBoolean(comp, 54, value); break;
    case 87 : return setBoolean(comp, 38, value); break;
    case 88 : return setBoolean(comp, 39, value); break;
    case 89 : return setBoolean(comp, 46, value); break;
    case 90 : return setBoolean(comp, 45, value); break;
    case 91 : return setBoolean(comp, 39, value); break;
    case 92 : return setBoolean(comp, 55, value); break;
    case 93 : return setBoolean(comp, 56, value); break;
    case 94 : return setBoolean(comp, 61, value); break;
    case 95 : return setBoolean(comp, 45, value); break;
    case 96 : return setBoolean(comp, 44, value); break;
    case 97 : return setBoolean(comp, 45, value); break;
    case 98 : return setBoolean(comp, 61, value); break;
    case 99 : return setBoolean(comp, 33, value); break;
    case 100 : return setBoolean(comp, 45, value); break;
    case 101 : return setBoolean(comp, 53, (! value)); break;
    case 102 : return setBoolean(comp, 46, value); break;
    case 103 : return setBoolean(comp, 39, value); break;
    case 104 : return setBoolean(comp, 46, value); break;
    case 105 : return setBoolean(comp, 53, (! value)); break;
    case 106 : return setBoolean(comp, 13, value); break;
    case 107 : return setBoolean(comp, 46, value); break;
    case 108 : return setBoolean(comp, 13, value); break;
    case 109 : return setBoolean(comp, 46, value); break;
    case 110 : return setBoolean(comp, 13, value); break;
    case 111 : return setBoolean(comp, 54, value); break;
    case 112 : return setBoolean(comp, 52, value); break;
    case 113 : return setBoolean(comp, 13, value); break;
    case 114 : return setBoolean(comp, 55, value); break;
    case 115 : return setBoolean(comp, 56, value); break;
    case 116 : return setBoolean(comp, 61, value); break;
    case 117 : return setBoolean(comp, 52, value); break;
    case 118 : return setBoolean(comp, 51, value); break;
    case 119 : return setBoolean(comp, 52, value); break;
    case 120 : return setBoolean(comp, 61, value); break;
    case 121 : return setBoolean(comp, 34, value); break;
    case 122 : return setBoolean(comp, 52, value); break;
    case 123 : return setBoolean(comp, 54, value); break;
    case 124 : return setBoolean(comp, 13, value); break;
    case 125 : return setBoolean(comp, 54, value); break;
    case 126 : return setBoolean(comp, 53, value); break;
    case 127 : return setBoolean(comp, 39, value); break;
    case 128 : return setBoolean(comp, 54, value); break;
    case 129 : return setBoolean(comp, 53, value); break;
    case 130 : return setBoolean(comp, 55, value); break;
    case 131 : return setBoolean(comp, 56, value); break;
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
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

