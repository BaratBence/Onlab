#ifndef TrainCrossing_Car__H
#define TrainCrossing_Car__H
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
modelica_real omc_TrainCrossing_Car_BreakCheck(threadData_t *threadData, modelica_integer _size, modelica_real _ThisCarDistance, modelica_real _Target, real_array _CarDistance, real_array _CarLength);
DLLExport
modelica_metatype boxptr_TrainCrossing_Car_BreakCheck(threadData_t *threadData, modelica_metatype _size, modelica_metatype _ThisCarDistance, modelica_metatype _Target, modelica_metatype _CarDistance, modelica_metatype _CarLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_TrainCrossing_Car_BreakCheck,2,0) {(void*) boxptr_TrainCrossing_Car_BreakCheck,0}};
#define boxvar_TrainCrossing_Car_BreakCheck MMC_REFSTRUCTLIT(boxvar_lit_TrainCrossing_Car_BreakCheck)
#include "TrainCrossing_Car_model.h"


#ifdef __cplusplus
}
#endif
#endif

