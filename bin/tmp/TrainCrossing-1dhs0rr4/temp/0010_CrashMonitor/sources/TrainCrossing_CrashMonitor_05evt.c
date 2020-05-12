/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_CrashMonitor_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_CrashMonitor_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_CrashMonitor_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"CarDistanceVec[3] >= CarIntersection and CarDistanceVec[3] - CarLengthVec[3] <= CarIntersection",
  "CarDistanceVec[2] >= CarIntersection and CarDistanceVec[2] - CarLengthVec[2] <= CarIntersection",
  "CarDistanceVec[1] >= CarIntersection and CarDistanceVec[1] - CarLengthVec[1] <= CarIntersection",
  "TrainDistanceVec[2] >= TrainIntersection and TrainDistanceVec[2] - TrainLengthVec[2] <= TrainIntersection",
  "TrainDistanceVec[1] >= TrainIntersection and TrainDistanceVec[1] - TrainLengthVec[1] <= TrainIntersection"};
  static const int occurEqs0[] = {1,15};
  static const int occurEqs1[] = {1,14};
  static const int occurEqs2[] = {1,13};
  static const int occurEqs3[] = {1,11};
  static const int occurEqs4[] = {1,10};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int TrainCrossing_CrashMonitor_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int TrainCrossing_CrashMonitor_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessEqZC(data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ - data->localData[0]->realVars[6] /* CarLengthVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessEqZC(data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ - data->localData[0]->realVars[5] /* CarLengthVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ - data->localData[0]->realVars[4] /* CarLengthVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[6]);
  tmp7 = LessEqZC(data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ - data->localData[0]->realVars[11] /* TrainLengthVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[7]);
  gout[3] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[8]);
  tmp9 = LessEqZC(data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ - data->localData[0]->realVars[10] /* TrainLengthVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[9]);
  gout[4] = ((tmp8 && tmp9)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_CrashMonitor_relationDescription(int i)
{
  const char *res[] = {"CarDistanceVec[3] >= CarIntersection",
  "CarDistanceVec[3] - CarLengthVec[3] <= CarIntersection",
  "CarDistanceVec[2] >= CarIntersection",
  "CarDistanceVec[2] - CarLengthVec[2] <= CarIntersection",
  "CarDistanceVec[1] >= CarIntersection",
  "CarDistanceVec[1] - CarLengthVec[1] <= CarIntersection",
  "TrainDistanceVec[2] >= TrainIntersection",
  "TrainDistanceVec[2] - TrainLengthVec[2] <= TrainIntersection",
  "TrainDistanceVec[1] >= TrainIntersection",
  "TrainDistanceVec[1] - TrainLengthVec[1] <= TrainIntersection"};
  return res[i];
}

int TrainCrossing_CrashMonitor_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  
  if(evalforZeroCross) {
    tmp10 = GreaterEqZC(data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp10;
    tmp11 = LessEqZC(data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ - data->localData[0]->realVars[6] /* CarLengthVec[3] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp11;
    tmp12 = GreaterEqZC(data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp12;
    tmp13 = LessEqZC(data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ - data->localData[0]->realVars[5] /* CarLengthVec[2] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp13;
    tmp14 = GreaterEqZC(data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp14;
    tmp15 = LessEqZC(data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ - data->localData[0]->realVars[4] /* CarLengthVec[1] variable */, data->localData[0]->realVars[3] /* CarIntersection variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp15;
    tmp16 = GreaterEqZC(data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp16;
    tmp17 = LessEqZC(data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ - data->localData[0]->realVars[11] /* TrainLengthVec[2] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp17;
    tmp18 = GreaterEqZC(data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp18;
    tmp19 = LessEqZC(data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ - data->localData[0]->realVars[10] /* TrainLengthVec[1] variable */, data->localData[0]->realVars[9] /* TrainIntersection variable */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp19;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ >= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[2] /* CarDistanceVec[3] variable */ - data->localData[0]->realVars[6] /* CarLengthVec[3] variable */ <= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ >= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[1] /* CarDistanceVec[2] variable */ - data->localData[0]->realVars[5] /* CarLengthVec[2] variable */ <= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ >= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[0] /* CarDistanceVec[1] variable */ - data->localData[0]->realVars[4] /* CarLengthVec[1] variable */ <= data->localData[0]->realVars[3] /* CarIntersection variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ >= data->localData[0]->realVars[9] /* TrainIntersection variable */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[8] /* TrainDistanceVec[2] variable */ - data->localData[0]->realVars[11] /* TrainLengthVec[2] variable */ <= data->localData[0]->realVars[9] /* TrainIntersection variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ >= data->localData[0]->realVars[9] /* TrainIntersection variable */);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[7] /* TrainDistanceVec[1] variable */ - data->localData[0]->realVars[10] /* TrainLengthVec[1] variable */ <= data->localData[0]->realVars[9] /* TrainIntersection variable */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

