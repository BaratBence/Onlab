/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_Sensors_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_Sensors_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_Sensors_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"not SensorFail",
  "DistanceVec[2] >= Sensor1Position and DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0",
  "DistanceVec[1] >= Sensor1Position and DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0",
  "DistanceVec[2] >= Sensor2Position + 1.0 and DistanceVec[2] - LengthVec[2] <= Sensor2Position",
  "DistanceVec[1] >= Sensor2Position + 1.0 and DistanceVec[1] - LengthVec[1] <= Sensor2Position"};
  static const int occurEqs0[] = {1,11};
  static const int occurEqs1[] = {1,10};
  static const int occurEqs2[] = {1,9};
  static const int occurEqs3[] = {1,11};
  static const int occurEqs4[] = {1,10};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int TrainCrossing_Sensors_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int TrainCrossing_Sensors_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  gout[0] = ((!data->localData[0]->booleanVars[2] /* SensorFail variable */)) ? 1 : -1;
  tmp0 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[0]);
  tmp1 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[1]);
  gout[1] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[3]);
  gout[2] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[5]);
  gout[3] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[6]);
  tmp7 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[7]);
  gout[4] = ((tmp6 && tmp7)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_Sensors_relationDescription(int i)
{
  const char *res[] = {"DistanceVec[2] >= Sensor1Position",
  "DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0",
  "DistanceVec[1] >= Sensor1Position",
  "DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0",
  "DistanceVec[2] >= Sensor2Position + 1.0",
  "DistanceVec[2] - LengthVec[2] <= Sensor2Position",
  "DistanceVec[1] >= Sensor2Position + 1.0",
  "DistanceVec[1] - LengthVec[1] <= Sensor2Position"};
  return res[i];
}

int TrainCrossing_Sensors_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  
  if(evalforZeroCross) {
    tmp8 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp8;
    tmp9 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp9;
    tmp10 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp10;
    tmp11 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp11;
    tmp12 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp12;
    tmp13 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp13;
    tmp14 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp14;
    tmp15 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp15;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[5] /* LengthVec[2] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[4] /* LengthVec[1] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

