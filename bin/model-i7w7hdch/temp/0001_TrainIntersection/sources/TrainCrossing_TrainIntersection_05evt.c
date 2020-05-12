/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_TrainIntersection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_TrainIntersection_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_TrainIntersection_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"trainlight.Gate_Angle >= 90.0",
  "trainlight.Gate_Angle <= 0.0",
  "car2.distance - car2.Length <= trainlight.Intersection and car2.distance >= trainlight.Intersection",
  "car2.speed <= 0.0",
  "car2.speed >= car2.maxSpeed",
  "car1.speed <= 0.0",
  "car1.speed >= car1.maxSpeed",
  "car.speed <= 0.0",
  "car.speed >= car.maxSpeed",
  "integer(trainlight.stateGraphRoot.subgraphStatePort.activeSteps, 0)",
  "car2.distance + car2.BreakingDistance + 5.0 >= trainlight.Intersection and car2.distance + car2.BreakingDistance - 5.0 <= trainlight.Intersection and car2.speed > 0.0 and car2.state == TrainCrossing.TrainLightColor.red",
  "car2.distance < trainlight.Intersection and car2.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car2.speed < car2.maxSpeed",
  "car1.distance + car1.BreakingDistance + 5.0 >= trainlight.Intersection and car1.distance + car1.BreakingDistance - 5.0 <= trainlight.Intersection and car1.speed > 0.0 and car1.state == TrainCrossing.TrainLightColor.red",
  "car1.distance < trainlight.Intersection and car1.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car1.speed < car1.maxSpeed",
  "car.distance + car.BreakingDistance + 5.0 >= trainlight.Intersection and car.distance + car.BreakingDistance - 5.0 <= trainlight.Intersection and car.speed > 0.0 and car.state == TrainCrossing.TrainLightColor.red",
  "car.distance < trainlight.Intersection and car.state == TrainCrossing.TrainLightColor.on and trainlight.Gate_Angle >= 90.0 and car.speed < car.maxSpeed",
  "train.distance >= sensors.Sensor1Position and train.distance - train.Length <= sensors.Sensor1Position + 1.0",
  "train.distance >= sensors.Sensor2Position + 1.0 and train.distance - train.Length <= sensors.Sensor2Position",
  "train1.distance >= sensors.Sensor1Position and train1.distance - train1.Length <= sensors.Sensor1Position + 1.0",
  "train1.distance >= sensors.Sensor2Position + 1.0 and train1.distance - train1.Length <= sensors.Sensor2Position",
  "train2.distance >= sensors.Sensor1Position and train2.distance - train2.Length <= sensors.Sensor1Position + 1.0",
  "train2.distance >= sensors.Sensor2Position + 1.0 and train2.distance - train2.Length <= sensors.Sensor2Position"};
  static const int occurEqs0[] = {1,207};
  static const int occurEqs1[] = {1,206};
  static const int occurEqs2[] = {1,205};
  static const int occurEqs3[] = {1,204};
  static const int occurEqs4[] = {1,203};
  static const int occurEqs5[] = {1,202};
  static const int occurEqs6[] = {1,201};
  static const int occurEqs7[] = {1,200};
  static const int occurEqs8[] = {1,199};
  static const int occurEqs9[] = {1,157};
  static const int occurEqs10[] = {1,216};
  static const int occurEqs11[] = {1,162};
  static const int occurEqs12[] = {1,213};
  static const int occurEqs13[] = {1,164};
  static const int occurEqs14[] = {1,210};
  static const int occurEqs15[] = {1,166};
  static const int occurEqs16[] = {1,138};
  static const int occurEqs17[] = {1,134};
  static const int occurEqs18[] = {1,133};
  static const int occurEqs19[] = {1,132};
  static const int occurEqs20[] = {1,131};
  static const int occurEqs21[] = {1,130};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TrainCrossing_TrainIntersection_eqFunction_143(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_144(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_145(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_146(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_149(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_150(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_154(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_155(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_156(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_159(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_160(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_161(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_163(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_165(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_187(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_188(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_189(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_190(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_191(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_192(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_193(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_194(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_195(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_196(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_197(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_198(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_208(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_209(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_211(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_212(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_214(DATA* data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_215(DATA* data, threadData_t *threadData);

int TrainCrossing_TrainIntersection_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TrainCrossing_TrainIntersection_eqFunction_143(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_144(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_145(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_146(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_149(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_150(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_154(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_155(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_156(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_159(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_160(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_161(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_163(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_165(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_187(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_188(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_189(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_190(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_191(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_192(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_193(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_194(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_195(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_196(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_197(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_198(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_208(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_209(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_211(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_212(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_214(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_215(data, threadData);
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
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
  modelica_boolean tmp14;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp22;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp30;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = LessEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 0.0, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = LessEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ - data->simulationInfo->realParameter[10] /* car2.Length PARAM */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[2]);
  tmp3 = GreaterEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[3]);
  gout[2] = ((tmp2 && tmp3)) ? 1 : -1;
  tmp4 = LessEqZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, data->simulationInfo->storedRelations[4]);
  gout[3] = (tmp4) ? 1 : -1;
  tmp5 = GreaterEqZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, data->simulationInfo->storedRelations[5]);
  gout[4] = (tmp5) ? 1 : -1;
  tmp6 = LessEqZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
  gout[5] = (tmp6) ? 1 : -1;
  tmp7 = GreaterEqZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, data->simulationInfo->storedRelations[7]);
  gout[6] = (tmp7) ? 1 : -1;
  tmp8 = LessEqZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, data->simulationInfo->storedRelations[8]);
  gout[7] = (tmp8) ? 1 : -1;
  tmp9 = GreaterEqZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
  gout[8] = (tmp9) ? 1 : -1;
  gout[9] = (floor(data->localData[0]->realVars[53] /* trainlight.stateGraphRoot.subgraphStatePort.activeSteps variable */) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 0)])) ? 1 : -1;
  tmp10 = GreaterEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[10]);
  tmp11 = LessEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[11]);
  tmp12 = GreaterZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, data->simulationInfo->storedRelations[12]);
  gout[10] = ((((tmp10 && tmp11) && tmp12) && (data->localData[0]->integerVars[3] /* car2.state DISCRETE */ == 2))) ? 1 : -1;
  tmp14 = LessZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[13]);
  tmp16 = GreaterEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
  tmp17 = LessZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, data->simulationInfo->storedRelations[14]);
  gout[11] = ((((tmp14 && (data->localData[0]->integerVars[3] /* car2.state DISCRETE */ == 1)) && tmp16) && tmp17)) ? 1 : -1;
  tmp18 = GreaterEqZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[15]);
  tmp19 = LessEqZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[16]);
  tmp20 = GreaterZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[12] = ((((tmp18 && tmp19) && tmp20) && (data->localData[0]->integerVars[1] /* car1.state DISCRETE */ == 2))) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[18]);
  tmp24 = GreaterEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
  tmp25 = LessZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, data->simulationInfo->storedRelations[19]);
  gout[13] = ((((tmp22 && (data->localData[0]->integerVars[1] /* car1.state DISCRETE */ == 1)) && tmp24) && tmp25)) ? 1 : -1;
  tmp26 = GreaterEqZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[20]);
  tmp27 = LessEqZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[21]);
  tmp28 = GreaterZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, data->simulationInfo->storedRelations[22]);
  gout[14] = ((((tmp26 && tmp27) && tmp28) && (data->localData[0]->integerVars[0] /* car.state DISCRETE */ == 2))) ? 1 : -1;
  tmp30 = LessZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[23]);
  tmp32 = GreaterEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
  tmp33 = LessZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, data->simulationInfo->storedRelations[24]);
  gout[15] = ((((tmp30 && (data->localData[0]->integerVars[0] /* car.state DISCRETE */ == 1)) && tmp32) && tmp33)) ? 1 : -1;
  tmp34 = GreaterEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[25]);
  tmp35 = LessEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[26]);
  gout[16] = ((tmp34 && tmp35)) ? 1 : -1;
  tmp36 = GreaterEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[27]);
  tmp37 = LessEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[28]);
  gout[17] = ((tmp36 && tmp37)) ? 1 : -1;
  tmp38 = GreaterEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[29]);
  tmp39 = LessEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[30]);
  gout[18] = ((tmp38 && tmp39)) ? 1 : -1;
  tmp40 = GreaterEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[31]);
  tmp41 = LessEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[32]);
  gout[19] = ((tmp40 && tmp41)) ? 1 : -1;
  tmp42 = GreaterEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[33]);
  tmp43 = LessEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[34]);
  gout[20] = ((tmp42 && tmp43)) ? 1 : -1;
  tmp44 = GreaterEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[35]);
  tmp45 = LessEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[36]);
  gout[21] = ((tmp44 && tmp45)) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_TrainIntersection_relationDescription(int i)
{
  const char *res[] = {"trainlight.Gate_Angle >= 90.0",
  "trainlight.Gate_Angle <= 0.0",
  "car2.distance - car2.Length <= trainlight.Intersection",
  "car2.distance >= trainlight.Intersection",
  "car2.speed <= 0.0",
  "car2.speed >= car2.maxSpeed",
  "car1.speed <= 0.0",
  "car1.speed >= car1.maxSpeed",
  "car.speed <= 0.0",
  "car.speed >= car.maxSpeed",
  "car2.distance + car2.BreakingDistance + 5.0 >= trainlight.Intersection",
  "car2.distance + car2.BreakingDistance - 5.0 <= trainlight.Intersection",
  "car2.speed > 0.0",
  "car2.distance < trainlight.Intersection",
  "car2.speed < car2.maxSpeed",
  "car1.distance + car1.BreakingDistance + 5.0 >= trainlight.Intersection",
  "car1.distance + car1.BreakingDistance - 5.0 <= trainlight.Intersection",
  "car1.speed > 0.0",
  "car1.distance < trainlight.Intersection",
  "car1.speed < car1.maxSpeed",
  "car.distance + car.BreakingDistance + 5.0 >= trainlight.Intersection",
  "car.distance + car.BreakingDistance - 5.0 <= trainlight.Intersection",
  "car.speed > 0.0",
  "car.distance < trainlight.Intersection",
  "car.speed < car.maxSpeed",
  "train.distance >= sensors.Sensor1Position",
  "train.distance - train.Length <= sensors.Sensor1Position + 1.0",
  "train.distance >= sensors.Sensor2Position + 1.0",
  "train.distance - train.Length <= sensors.Sensor2Position",
  "train1.distance >= sensors.Sensor1Position",
  "train1.distance - train1.Length <= sensors.Sensor1Position + 1.0",
  "train1.distance >= sensors.Sensor2Position + 1.0",
  "train1.distance - train1.Length <= sensors.Sensor2Position",
  "train2.distance >= sensors.Sensor1Position",
  "train2.distance - train2.Length <= sensors.Sensor1Position + 1.0",
  "train2.distance >= sensors.Sensor2Position + 1.0",
  "train2.distance - train2.Length <= sensors.Sensor2Position"};
  return res[i];
}

int TrainCrossing_TrainIntersection_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
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
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  
  if(evalforZeroCross) {
    tmp46 = GreaterEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 90.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp46;
    tmp47 = LessEqZC(data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */, 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp47;
    tmp48 = LessEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ - data->simulationInfo->realParameter[10] /* car2.Length PARAM */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp48;
    tmp49 = GreaterEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp49;
    tmp50 = LessEqZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp50;
    tmp51 = GreaterEqZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp51;
    tmp52 = LessEqZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp52;
    tmp53 = GreaterEqZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp53;
    tmp54 = LessEqZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp54;
    tmp55 = GreaterEqZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp55;
    tmp56 = GreaterEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp56;
    tmp57 = LessEqZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp57;
    tmp58 = GreaterZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, 0.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp58;
    tmp59 = LessZC(data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp59;
    tmp60 = LessZC(data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */, data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp60;
    tmp61 = GreaterEqZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp61;
    tmp62 = LessEqZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp62;
    tmp63 = GreaterZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp63;
    tmp64 = LessZC(data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp64;
    tmp65 = LessZC(data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */, data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp65;
    tmp66 = GreaterEqZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ + 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp66;
    tmp67 = LessEqZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ - 5.0, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp67;
    tmp68 = GreaterZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, 0.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp68;
    tmp69 = LessZC(data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */, data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp69;
    tmp70 = LessZC(data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */, data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp70;
    tmp71 = GreaterEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp71;
    tmp72 = LessEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp72;
    tmp73 = GreaterEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp73;
    tmp74 = LessEqZC(data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp74;
    tmp75 = GreaterEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp75;
    tmp76 = LessEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp76;
    tmp77 = GreaterEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp77;
    tmp78 = LessEqZC(data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp78;
    tmp79 = GreaterEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */, data->simulationInfo->storedRelations[33]);
    data->simulationInfo->relations[33] = tmp79;
    tmp80 = LessEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0, data->simulationInfo->storedRelations[34]);
    data->simulationInfo->relations[34] = tmp80;
    tmp81 = GreaterEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0, data->simulationInfo->storedRelations[35]);
    data->simulationInfo->relations[35] = tmp81;
    tmp82 = LessEqZC(data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */, data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */, data->simulationInfo->storedRelations[36]);
    data->simulationInfo->relations[36] = tmp82;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */ >= 90.0);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[12] /* trainlight.Gate_Angle STATE(1,trainlight.Gate_Rotation) */ <= 0.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ - data->simulationInfo->realParameter[10] /* car2.Length PARAM */ <= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ >= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ <= 0.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ >= data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ <= 0.0);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ >= data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ <= 0.0);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ >= data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ + 5.0 >= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ + data->localData[0]->realVars[33] /* car2.BreakingDistance variable */ - 5.0 <= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ > 0.0);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ < data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ < data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ + 5.0 >= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ + data->localData[0]->realVars[32] /* car1.BreakingDistance variable */ - 5.0 <= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ > 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ < data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ < data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ + 5.0 >= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ + data->localData[0]->realVars[31] /* car.BreakingDistance variable */ - 5.0 <= data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ > 0.0);
    data->simulationInfo->relations[23] = (data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ < data->simulationInfo->realParameter[26] /* trainlight.Intersection PARAM */);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ < data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */);
    data->simulationInfo->relations[25] = (data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ >= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */ <= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[27] = (data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ >= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ - data->simulationInfo->realParameter[17] /* train.Length PARAM */ <= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */);
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ >= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */ <= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ >= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[32] = (data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ - data->simulationInfo->realParameter[20] /* train1.Length PARAM */ <= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */);
    data->simulationInfo->relations[33] = (data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ >= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */);
    data->simulationInfo->relations[34] = (data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */ <= data->simulationInfo->realParameter[15] /* sensors.Sensor1Position PARAM */ + 1.0);
    data->simulationInfo->relations[35] = (data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ >= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */ + 1.0);
    data->simulationInfo->relations[36] = (data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ - data->simulationInfo->realParameter[23] /* train2.Length PARAM */ <= data->simulationInfo->realParameter[16] /* sensors.Sensor2Position PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

