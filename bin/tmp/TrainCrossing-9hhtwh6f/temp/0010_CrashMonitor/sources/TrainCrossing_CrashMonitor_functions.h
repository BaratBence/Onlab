#ifndef TrainCrossing_CrashMonitor__H
#define TrainCrossing_CrashMonitor__H
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
modelica_boolean omc_TrainCrossing_CrashMonitor_Danger(threadData_t *threadData, modelica_integer _size, boolean_array _DangerArray);
DLLExport
modelica_metatype boxptr_TrainCrossing_CrashMonitor_Danger(threadData_t *threadData, modelica_metatype _size, modelica_metatype _DangerArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_CrashMonitor_Danger,2,0) {(void*) boxptr_TrainCrossing_CrashMonitor_Danger,0}};
#define boxvar_TrainCrossing_CrashMonitor_Danger MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_CrashMonitor_Danger)
#include "TrainCrossing_CrashMonitor_model.h"


#ifdef __cplusplus
}
#endif
#endif

