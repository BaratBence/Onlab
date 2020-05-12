/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_TrainLight_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_TrainLight_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_TrainLight_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"Gate_Angle >= 90.0",
  "Gate_Angle <= 0.0",
  "integer(stateGraphRoot.subgraphStatePort.activeSteps, 0)",
  "Safe_Passage < 0.9",
  "Safe_Passage >= 0.9"};
  static const int occurEqs0[] = {1,73};
  static const int occurEqs1[] = {1,115};
  static const int occurEqs2[] = {1,90};
  static const int occurEqs3[] = {1,75};
  static const int occurEqs4[] = {1,74};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainCrossing_TrainLight_eqFunction_76(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_77(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_78(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_79(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_82(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_83(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_87(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_88(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_89(DATA* data, threadData_t *threadData);

int TrainCrossing_TrainLight_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainCrossing_TrainLight_eqFunction_76(data, threadData);

  TrainCrossing_TrainLight_eqFunction_77(data, threadData);

  TrainCrossing_TrainLight_eqFunction_78(data, threadData);

  TrainCrossing_TrainLight_eqFunction_79(data, threadData);

  TrainCrossing_TrainLight_eqFunction_82(data, threadData);

  TrainCrossing_TrainLight_eqFunction_83(data, threadData);

  TrainCrossing_TrainLight_eqFunction_87(data, threadData);

  TrainCrossing_TrainLight_eqFunction_88(data, threadData);

  TrainCrossing_TrainLight_eqFunction_89(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainLight_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = LessEqZC(data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 0.0, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  gout[2] = (floor(data->localData[0]->realVars[25] /* stateGraphRoot.subgraphStatePort.activeSteps variable */) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 0)])) ? 1 : -1;
  tmp2 = LessZC(data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[2]);
  gout[3] = (tmp2) ? 1 : -1;
  tmp3 = GreaterEqZC(data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[3]);
  gout[4] = (tmp3) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_TrainLight_relationDescription(int i)
{
  const char *res[] = {"Gate_Angle >= 90.0",
  "Gate_Angle <= 0.0",
  "Safe_Passage < 0.9",
  "Safe_Passage >= 0.9"};
  return res[i];
}

int TrainCrossing_TrainLight_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  
  if(evalforZeroCross) {
    tmp4 = GreaterEqZC(data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp4;
    tmp5 = LessEqZC(data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */, 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp5;
    tmp6 = LessZC(data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp6;
    tmp7 = GreaterEqZC(data->localData[0]->realVars[24] /* Safe_Passage variable */, 0.9, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp7;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */ >= 90.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[0] /* Gate_Angle STATE(1,Gate_Rotation) */ <= 0.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[24] /* Safe_Passage variable */ < 0.9);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[24] /* Safe_Passage variable */ >= 0.9);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

