/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing.Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_Car_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_Car_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"speed <= 0.0",
  "speed >= maxSpeed",
  "isClumsy >= 1.0 and distance - Length <= Target and distance >= Target",
  "distance + BreakingDistance + 5.0 >= Target and distance + BreakingDistance - 5.0 <= Target and speed > 0.0 and state == TrainCrossing.TrainLightColor.red",
  "distance < Target and state == TrainCrossing.TrainLightColor.on and Gate_Angle >= 90.0 and speed < maxSpeed"};
  static const int occurEqs0[] = {1,26};
  static const int occurEqs1[] = {1,25};
  static const int occurEqs2[] = {1,24};
  static const int occurEqs3[] = {1,29};
  static const int occurEqs4[] = {1,18};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainCrossing_Car_eqFunction_17(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_19(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_20(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_21(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_23(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_27(DATA* data, threadData_t *threadData);
extern void TrainCrossing_Car_eqFunction_28(DATA* data, threadData_t *threadData);

int TrainCrossing_Car_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainCrossing_Car_eqFunction_17(data, threadData);

  TrainCrossing_Car_eqFunction_19(data, threadData);

  TrainCrossing_Car_eqFunction_20(data, threadData);

  TrainCrossing_Car_eqFunction_21(data, threadData);

  TrainCrossing_Car_eqFunction_23(data, threadData);

  TrainCrossing_Car_eqFunction_27(data, threadData);

  TrainCrossing_Car_eqFunction_28(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp18;
  modelica_boolean tmp20;
  modelica_boolean tmp21;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp9 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp9) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp10) ? 1 : -1;
  tmp11 = GreaterEq(data->simulationInfo->realParameter[2] /* isClumsy PARAM */,1.0);
  tmp12 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ - data->localData[0]->realVars[13] /* Length variable */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[2]);
  tmp13 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[3]);
  gout[2] = ((tmp11 && (tmp12 && tmp13))) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[4]);
  tmp15 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[5]);
  tmp16 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
  gout[3] = ((((tmp14 && tmp15) && tmp16) && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 2))) ? 1 : -1;
  tmp18 = LessZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[7]);
  tmp20 = GreaterEqZC(data->localData[0]->realVars[12] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[8]);
  tmp21 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
  gout[4] = ((((tmp18 && (data->localData[0]->integerVars[1] /* state DISCRETE */ == 1)) && tmp20) && tmp21)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_Car_relationDescription(int i)
{
  const char *res[] = {"speed <= 0.0",
  "speed >= maxSpeed",
  "distance - Length <= Target",
  "distance >= Target",
  "distance + BreakingDistance + 5.0 >= Target",
  "distance + BreakingDistance - 5.0 <= Target",
  "speed > 0.0",
  "distance < Target",
  "Gate_Angle >= 90.0",
  "speed < maxSpeed"};
  return res[i];
}

int TrainCrossing_Car_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  
  if(evalforZeroCross) {
    tmp22 = LessEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp22;
    tmp23 = GreaterEqZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp23;
    tmp24 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ - data->localData[0]->realVars[13] /* Length variable */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp24;
    tmp25 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp25;
    tmp26 = GreaterEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp26;
    tmp27 = LessEqZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp27;
    tmp28 = GreaterZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp28;
    tmp29 = LessZC(data->localData[0]->realVars[1] /* distance STATE(1,speed) */, data->localData[0]->realVars[17] /* Target variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp29;
    tmp30 = GreaterEqZC(data->localData[0]->realVars[12] /* Gate_Angle variable */, 90.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp30;
    tmp31 = LessZC(data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */, data->simulationInfo->realParameter[5] /* maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp31;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ <= 0.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ >= data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ - data->localData[0]->realVars[13] /* Length variable */ <= data->localData[0]->realVars[17] /* Target variable */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ >= data->localData[0]->realVars[17] /* Target variable */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ + 5.0 >= data->localData[0]->realVars[17] /* Target variable */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ + data->localData[0]->realVars[7] /* BreakingDistance variable */ - 5.0 <= data->localData[0]->realVars[17] /* Target variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ > 0.0);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[1] /* distance STATE(1,speed) */ < data->localData[0]->realVars[17] /* Target variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[12] /* Gate_Angle variable */ >= 90.0);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[2] /* speed STATE(1,acceleration) */ < data->simulationInfo->realParameter[5] /* maxSpeed PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

