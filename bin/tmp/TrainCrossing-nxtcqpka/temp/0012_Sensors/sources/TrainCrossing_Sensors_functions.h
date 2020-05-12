#ifndef TrainCrossing_Sensors__H
#define TrainCrossing_Sensors__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_boolean omc_TrainCrossing_Sensors_Active(threadData_t *threadData, modelica_integer _size, boolean_array _Train_Detected);
DLLExport
modelica_metatype boxptr_TrainCrossing_Sensors_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Train_Detected);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_Sensors_Active,2,0) {(void*) boxptr_TrainCrossing_Sensors_Active,0}};
#define boxvar_TrainCrossing_Sensors_Active MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_Sensors_Active)
#include "TrainCrossing_Sensors_model.h"


#ifdef __cplusplus
}
#endif
#endif

