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
  static const char *res[] = {"DistanceVec[10] >= Sensor2Position + 1.0 and DistanceVec[10] - LengthVec[10] <= Sensor2Position",
  "DistanceVec[10] >= Sensor1Position and DistanceVec[10] - LengthVec[10] <= Sensor1Position + 1.0",
  "DistanceVec[9] >= Sensor2Position + 1.0 and DistanceVec[9] - LengthVec[9] <= Sensor2Position",
  "DistanceVec[9] >= Sensor1Position and DistanceVec[9] - LengthVec[9] <= Sensor1Position + 1.0",
  "DistanceVec[8] >= Sensor2Position + 1.0 and DistanceVec[8] - LengthVec[8] <= Sensor2Position",
  "DistanceVec[8] >= Sensor1Position and DistanceVec[8] - LengthVec[8] <= Sensor1Position + 1.0",
  "DistanceVec[7] >= Sensor2Position + 1.0 and DistanceVec[7] - LengthVec[7] <= Sensor2Position",
  "DistanceVec[7] >= Sensor1Position and DistanceVec[7] - LengthVec[7] <= Sensor1Position + 1.0",
  "DistanceVec[6] >= Sensor2Position + 1.0 and DistanceVec[6] - LengthVec[6] <= Sensor2Position",
  "DistanceVec[6] >= Sensor1Position and DistanceVec[6] - LengthVec[6] <= Sensor1Position + 1.0",
  "DistanceVec[5] >= Sensor2Position + 1.0 and DistanceVec[5] - LengthVec[5] <= Sensor2Position",
  "DistanceVec[5] >= Sensor1Position and DistanceVec[5] - LengthVec[5] <= Sensor1Position + 1.0",
  "DistanceVec[4] >= Sensor2Position + 1.0 and DistanceVec[4] - LengthVec[4] <= Sensor2Position",
  "DistanceVec[4] >= Sensor1Position and DistanceVec[4] - LengthVec[4] <= Sensor1Position + 1.0",
  "DistanceVec[3] >= Sensor2Position + 1.0 and DistanceVec[3] - LengthVec[3] <= Sensor2Position",
  "DistanceVec[3] >= Sensor1Position and DistanceVec[3] - LengthVec[3] <= Sensor1Position + 1.0",
  "DistanceVec[2] >= Sensor2Position + 1.0 and DistanceVec[2] - LengthVec[2] <= Sensor2Position",
  "DistanceVec[2] >= Sensor1Position and DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0",
  "DistanceVec[1] >= Sensor2Position + 1.0 and DistanceVec[1] - LengthVec[1] <= Sensor2Position",
  "DistanceVec[1] >= Sensor1Position and DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0"};
  static const int occurEqs0[] = {1,55};
  static const int occurEqs1[] = {1,52};
  static const int occurEqs2[] = {1,51};
  static const int occurEqs3[] = {1,50};
  static const int occurEqs4[] = {1,49};
  static const int occurEqs5[] = {1,48};
  static const int occurEqs6[] = {1,47};
  static const int occurEqs7[] = {1,46};
  static const int occurEqs8[] = {1,45};
  static const int occurEqs9[] = {1,44};
  static const int occurEqs10[] = {1,43};
  static const int occurEqs11[] = {1,42};
  static const int occurEqs12[] = {1,41};
  static const int occurEqs13[] = {1,40};
  static const int occurEqs14[] = {1,39};
  static const int occurEqs15[] = {1,38};
  static const int occurEqs16[] = {1,37};
  static const int occurEqs17[] = {1,36};
  static const int occurEqs18[] = {1,35};
  static const int occurEqs19[] = {1,34};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19};
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
  modelica_boolean tmp8;
  modelica_boolean tmp9;
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
  modelica_boolean tmp20;
  modelica_boolean tmp21;
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
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[0]);
  tmp1 = LessEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp0 && tmp1)) ? 1 : -1;
  tmp2 = GreaterEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = LessEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = GreaterEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[4]);
  tmp5 = LessEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp4 && tmp5)) ? 1 : -1;
  tmp6 = GreaterEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[6]);
  tmp7 = LessEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[7]);
  gout[3] = ((tmp6 && tmp7)) ? 1 : -1;
  tmp8 = GreaterEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[8]);
  tmp9 = LessEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[9]);
  gout[4] = ((tmp8 && tmp9)) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[10]);
  tmp11 = LessEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[11]);
  gout[5] = ((tmp10 && tmp11)) ? 1 : -1;
  tmp12 = GreaterEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[12]);
  tmp13 = LessEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[13]);
  gout[6] = ((tmp12 && tmp13)) ? 1 : -1;
  tmp14 = GreaterEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[14]);
  tmp15 = LessEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[15]);
  gout[7] = ((tmp14 && tmp15)) ? 1 : -1;
  tmp16 = GreaterEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[16]);
  tmp17 = LessEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[17]);
  gout[8] = ((tmp16 && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[18]);
  tmp19 = LessEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[19]);
  gout[9] = ((tmp18 && tmp19)) ? 1 : -1;
  tmp20 = GreaterEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[20]);
  tmp21 = LessEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[21]);
  gout[10] = ((tmp20 && tmp21)) ? 1 : -1;
  tmp22 = GreaterEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[22]);
  tmp23 = LessEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[23]);
  gout[11] = ((tmp22 && tmp23)) ? 1 : -1;
  tmp24 = GreaterEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[24]);
  tmp25 = LessEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[25]);
  gout[12] = ((tmp24 && tmp25)) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[26]);
  tmp27 = LessEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[27]);
  gout[13] = ((tmp26 && tmp27)) ? 1 : -1;
  tmp28 = GreaterEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[28]);
  tmp29 = LessEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[29]);
  gout[14] = ((tmp28 && tmp29)) ? 1 : -1;
  tmp30 = GreaterEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[30]);
  tmp31 = LessEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[31]);
  gout[15] = ((tmp30 && tmp31)) ? 1 : -1;
  tmp32 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[32]);
  tmp33 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[33]);
  gout[16] = ((tmp32 && tmp33)) ? 1 : -1;
  tmp34 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[34]);
  tmp35 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[35]);
  gout[17] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[36]);
  tmp37 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[37]);
  gout[18] = ((tmp36 && tmp37)) ? 1 : -1;
  tmp38 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[38]);
  tmp39 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[39]);
  gout[19] = ((tmp38 && tmp39)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_Sensors_relationDescription(int i)
{
  const char *res[] = {"DistanceVec[10] >= Sensor2Position + 1.0",
  "DistanceVec[10] - LengthVec[10] <= Sensor2Position",
  "DistanceVec[10] >= Sensor1Position",
  "DistanceVec[10] - LengthVec[10] <= Sensor1Position + 1.0",
  "DistanceVec[9] >= Sensor2Position + 1.0",
  "DistanceVec[9] - LengthVec[9] <= Sensor2Position",
  "DistanceVec[9] >= Sensor1Position",
  "DistanceVec[9] - LengthVec[9] <= Sensor1Position + 1.0",
  "DistanceVec[8] >= Sensor2Position + 1.0",
  "DistanceVec[8] - LengthVec[8] <= Sensor2Position",
  "DistanceVec[8] >= Sensor1Position",
  "DistanceVec[8] - LengthVec[8] <= Sensor1Position + 1.0",
  "DistanceVec[7] >= Sensor2Position + 1.0",
  "DistanceVec[7] - LengthVec[7] <= Sensor2Position",
  "DistanceVec[7] >= Sensor1Position",
  "DistanceVec[7] - LengthVec[7] <= Sensor1Position + 1.0",
  "DistanceVec[6] >= Sensor2Position + 1.0",
  "DistanceVec[6] - LengthVec[6] <= Sensor2Position",
  "DistanceVec[6] >= Sensor1Position",
  "DistanceVec[6] - LengthVec[6] <= Sensor1Position + 1.0",
  "DistanceVec[5] >= Sensor2Position + 1.0",
  "DistanceVec[5] - LengthVec[5] <= Sensor2Position",
  "DistanceVec[5] >= Sensor1Position",
  "DistanceVec[5] - LengthVec[5] <= Sensor1Position + 1.0",
  "DistanceVec[4] >= Sensor2Position + 1.0",
  "DistanceVec[4] - LengthVec[4] <= Sensor2Position",
  "DistanceVec[4] >= Sensor1Position",
  "DistanceVec[4] - LengthVec[4] <= Sensor1Position + 1.0",
  "DistanceVec[3] >= Sensor2Position + 1.0",
  "DistanceVec[3] - LengthVec[3] <= Sensor2Position",
  "DistanceVec[3] >= Sensor1Position",
  "DistanceVec[3] - LengthVec[3] <= Sensor1Position + 1.0",
  "DistanceVec[2] >= Sensor2Position + 1.0",
  "DistanceVec[2] - LengthVec[2] <= Sensor2Position",
  "DistanceVec[2] >= Sensor1Position",
  "DistanceVec[2] - LengthVec[2] <= Sensor1Position + 1.0",
  "DistanceVec[1] >= Sensor2Position + 1.0",
  "DistanceVec[1] - LengthVec[1] <= Sensor2Position",
  "DistanceVec[1] >= Sensor1Position",
  "DistanceVec[1] - LengthVec[1] <= Sensor1Position + 1.0"};
  return res[i];
}

int TrainCrossing_Sensors_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  
  if(evalforZeroCross) {
    tmp40 = GreaterEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp40;
    tmp41 = LessEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp41;
    tmp42 = GreaterEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp42;
    tmp43 = LessEqZC(data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp43;
    tmp44 = GreaterEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp44;
    tmp45 = LessEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp45;
    tmp46 = GreaterEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp46;
    tmp47 = LessEqZC(data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp47;
    tmp48 = GreaterEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp48;
    tmp49 = LessEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp49;
    tmp50 = GreaterEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp50;
    tmp51 = LessEqZC(data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp51;
    tmp52 = GreaterEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp52;
    tmp53 = LessEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp53;
    tmp54 = GreaterEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp54;
    tmp55 = LessEqZC(data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp55;
    tmp56 = GreaterEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp56;
    tmp57 = LessEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp57;
    tmp58 = GreaterEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp58;
    tmp59 = LessEqZC(data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp59;
    tmp60 = GreaterEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp60;
    tmp61 = LessEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp61;
    tmp62 = GreaterEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp62;
    tmp63 = LessEqZC(data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp63;
    tmp64 = GreaterEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp64;
    tmp65 = LessEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp65;
    tmp66 = GreaterEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp66;
    tmp67 = LessEqZC(data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp67;
    tmp68 = GreaterEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp68;
    tmp69 = LessEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp69;
    tmp70 = GreaterEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp70;
    tmp71 = LessEqZC(data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp71;
    tmp72 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp72;
    tmp73 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[33]);
    data->simulationInfo->relations[33] = tmp73;
    tmp74 = GreaterEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[34]);
    data->simulationInfo->relations[34] = tmp74;
    tmp75 = LessEqZC(data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[35]);
    data->simulationInfo->relations[35] = tmp75;
    tmp76 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[36]);
    data->simulationInfo->relations[36] = tmp76;
    tmp77 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */, data->simulationInfo->storedRelations[37]);
    data->simulationInfo->relations[37] = tmp77;
    tmp78 = GreaterEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */, data->simulationInfo->storedRelations[38]);
    data->simulationInfo->relations[38] = tmp78;
    tmp79 = LessEqZC(data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */, data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[39]);
    data->simulationInfo->relations[39] = tmp79;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[10] /* DistanceVec[10] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[10] /* DistanceVec[10] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[10] /* DistanceVec[10] variable */ - data->localData[0]->realVars[21] /* LengthVec[10] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[9] /* DistanceVec[9] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[9] /* DistanceVec[9] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[9] /* DistanceVec[9] variable */ - data->localData[0]->realVars[20] /* LengthVec[9] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[8] /* DistanceVec[8] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[8] /* DistanceVec[8] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[8] /* DistanceVec[8] variable */ - data->localData[0]->realVars[19] /* LengthVec[8] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[7] /* DistanceVec[7] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[7] /* DistanceVec[7] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[7] /* DistanceVec[7] variable */ - data->localData[0]->realVars[18] /* LengthVec[7] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[6] /* DistanceVec[6] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[6] /* DistanceVec[6] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[6] /* DistanceVec[6] variable */ - data->localData[0]->realVars[17] /* LengthVec[6] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[5] /* DistanceVec[5] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[5] /* DistanceVec[5] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[5] /* DistanceVec[5] variable */ - data->localData[0]->realVars[16] /* LengthVec[5] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[4] /* DistanceVec[4] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[4] /* DistanceVec[4] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[4] /* DistanceVec[4] variable */ - data->localData[0]->realVars[15] /* LengthVec[4] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[3] /* DistanceVec[3] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[3] /* DistanceVec[3] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[3] /* DistanceVec[3] variable */ - data->localData[0]->realVars[14] /* LengthVec[3] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[32] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[33] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[34] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[35] = (data->localData[0]->realVars[2] /* DistanceVec[2] variable */ - data->localData[0]->realVars[13] /* LengthVec[2] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[36] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ >= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[37] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */ <= data->simulationInfo->realParameter[1] /* Sensor2Position PARAM */);
    data->simulationInfo->relations[38] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ >= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */);
    data->simulationInfo->relations[39] = (data->localData[0]->realVars[1] /* DistanceVec[1] variable */ - data->localData[0]->realVars[12] /* LengthVec[1] variable */ <= data->simulationInfo->realParameter[0] /* Sensor1Position PARAM */ + 1.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

