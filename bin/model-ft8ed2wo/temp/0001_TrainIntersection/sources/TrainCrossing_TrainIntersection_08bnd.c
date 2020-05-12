/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainCrossing_TrainIntersection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 234
type: SIMPLE_ASSIGN
$START.car2.speed = car2.maxSpeed
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->modelData->realVarsData[8].attribute /* car2.speed STATE(1,car2.acceleration) */.start = data->simulationInfo->realParameter[14] /* car2.maxSpeed PARAM */;
    data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */ = data->modelData->realVarsData[8].attribute /* car2.speed STATE(1,car2.acceleration) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* car2.speed */.name, (modelica_real) data->localData[0]->realVars[8] /* car2.speed STATE(1,car2.acceleration) */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
$START.car2.distance = car2.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->modelData->realVarsData[7].attribute /* car2.distance STATE(1,car2.speed) */.start = data->simulationInfo->realParameter[12] /* car2.distanceStart PARAM */;
    data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */ = data->modelData->realVarsData[7].attribute /* car2.distance STATE(1,car2.speed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* car2.distance */.name, (modelica_real) data->localData[0]->realVars[7] /* car2.distance STATE(1,car2.speed) */);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
$START.car1.speed = car1.maxSpeed
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->modelData->realVarsData[5].attribute /* car1.speed STATE(1,car1.acceleration) */.start = data->simulationInfo->realParameter[9] /* car1.maxSpeed PARAM */;
    data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */ = data->modelData->realVarsData[5].attribute /* car1.speed STATE(1,car1.acceleration) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* car1.speed */.name, (modelica_real) data->localData[0]->realVars[5] /* car1.speed STATE(1,car1.acceleration) */);
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
$START.car1.distance = car1.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->modelData->realVarsData[4].attribute /* car1.distance STATE(1,car1.speed) */.start = data->simulationInfo->realParameter[7] /* car1.distanceStart PARAM */;
    data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */ = data->modelData->realVarsData[4].attribute /* car1.distance STATE(1,car1.speed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* car1.distance */.name, (modelica_real) data->localData[0]->realVars[4] /* car1.distance STATE(1,car1.speed) */);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
$START.car.speed = car.maxSpeed
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->modelData->realVarsData[2].attribute /* car.speed STATE(1,car.acceleration) */.start = data->simulationInfo->realParameter[4] /* car.maxSpeed PARAM */;
    data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */ = data->modelData->realVarsData[2].attribute /* car.speed STATE(1,car.acceleration) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* car.speed */.name, (modelica_real) data->localData[0]->realVars[2] /* car.speed STATE(1,car.acceleration) */);
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
$START.car.distance = car.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->modelData->realVarsData[1].attribute /* car.distance STATE(1,car.speed) */.start = data->simulationInfo->realParameter[2] /* car.distanceStart PARAM */;
    data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */ = data->modelData->realVarsData[1].attribute /* car.distance STATE(1,car.speed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* car.distance */.name, (modelica_real) data->localData[0]->realVars[1] /* car.distance STATE(1,car.speed) */);
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
$START.train2.distance = train2.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->modelData->realVarsData[11].attribute /* train2.distance STATE(1,train2.maxSpeed) */.start = data->simulationInfo->realParameter[24] /* train2.distanceStart PARAM */;
    data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */ = data->modelData->realVarsData[11].attribute /* train2.distance STATE(1,train2.maxSpeed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* train2.distance */.name, (modelica_real) data->localData[0]->realVars[11] /* train2.distance STATE(1,train2.maxSpeed) */);
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
$START.train1.distance = train1.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->modelData->realVarsData[10].attribute /* train1.distance STATE(1,train1.maxSpeed) */.start = data->simulationInfo->realParameter[21] /* train1.distanceStart PARAM */;
    data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */ = data->modelData->realVarsData[10].attribute /* train1.distance STATE(1,train1.maxSpeed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* train1.distance */.name, (modelica_real) data->localData[0]->realVars[10] /* train1.distance STATE(1,train1.maxSpeed) */);
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$START.train.distance = train.distanceStart
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->modelData->realVarsData[9].attribute /* train.distance STATE(1,train.maxSpeed) */.start = data->simulationInfo->realParameter[18] /* train.distanceStart PARAM */;
    data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */ = data->modelData->realVarsData[9].attribute /* train.distance STATE(1,train.maxSpeed) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* train.distance */.name, (modelica_real) data->localData[0]->realVars[9] /* train.distance STATE(1,train.maxSpeed) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  TrainCrossing_TrainIntersection_eqFunction_234(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_235(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_236(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_237(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_238(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_239(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_240(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_241(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_242(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainCrossing_TrainIntersection_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_TrainIntersection_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainIntersection_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 281
type: ALGORITHM

  assert(trainlight.RedToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= trainlight.RedToOff.waitTime, has value: " + String(trainlight.RedToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,83,"Variable violating min constraint: 0.0 <= trainlight.RedToOff.waitTime, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[30] /* trainlight.RedToOff.waitTime PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[30] /* trainlight.RedToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.RedToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 282
type: ALGORITHM

  assert(trainlight.RedToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= trainlight.RedToOn.waitTime, has value: " + String(trainlight.RedToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,82,"Variable violating min constraint: 0.0 <= trainlight.RedToOn.waitTime, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[31] /* trainlight.RedToOn.waitTime PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[31] /* trainlight.RedToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.RedToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 283
type: ALGORITHM

  assert(trainlight.OffToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= trainlight.OffToOn.waitTime, has value: " + String(trainlight.OffToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,82,"Variable violating min constraint: 0.0 <= trainlight.OffToOn.waitTime, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[27] /* trainlight.OffToOn.waitTime PARAM */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[27] /* trainlight.OffToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.OffToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 284
type: ALGORITHM

  assert(trainlight.OnToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= trainlight.OnToOff.waitTime, has value: " + String(trainlight.OnToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,82,"Variable violating min constraint: 0.0 <= trainlight.OnToOff.waitTime, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[28] /* trainlight.OnToOff.waitTime PARAM */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[28] /* trainlight.OnToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.OnToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 285
type: ALGORITHM

  assert(trainlight.OnToRed.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= trainlight.OnToRed.waitTime, has value: " + String(trainlight.OnToRed.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,82,"Variable violating min constraint: 0.0 <= trainlight.OnToRed.waitTime, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->simulationInfo->realParameter[29] /* trainlight.OnToRed.waitTime PARAM */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[29] /* trainlight.OnToRed.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.OnToRed.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 286
type: ALGORITHM

  assert(trainlight.Off.nOut >= 0, "Variable violating min constraint: 0 <= trainlight.Off.nOut, has value: " + String(trainlight.Off.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,72,"Variable violating min constraint: 0 <= trainlight.Off.nOut, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->simulationInfo->integerParameter[5] /* trainlight.Off.nOut PARAM */,((modelica_integer) 0));
    if(!tmp20)
    {
      tmp22 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* trainlight.Off.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.Off.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 287
type: ALGORITHM

  assert(trainlight.Off.nIn >= 0, "Variable violating min constraint: 0 <= trainlight.Off.nIn, has value: " + String(trainlight.Off.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,71,"Variable violating min constraint: 0 <= trainlight.Off.nIn, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->simulationInfo->integerParameter[4] /* trainlight.Off.nIn PARAM */,((modelica_integer) 0));
    if(!tmp24)
    {
      tmp26 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* trainlight.Off.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.Off.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 288
type: ALGORITHM

  assert(trainlight.Red.nOut >= 0, "Variable violating min constraint: 0 <= trainlight.Red.nOut, has value: " + String(trainlight.Red.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,72,"Variable violating min constraint: 0 <= trainlight.Red.nOut, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->simulationInfo->integerParameter[9] /* trainlight.Red.nOut PARAM */,((modelica_integer) 0));
    if(!tmp28)
    {
      tmp30 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[9] /* trainlight.Red.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.Red.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 289
type: ALGORITHM

  assert(trainlight.Red.nIn >= 0, "Variable violating min constraint: 0 <= trainlight.Red.nIn, has value: " + String(trainlight.Red.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,71,"Variable violating min constraint: 0 <= trainlight.Red.nIn, has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->simulationInfo->integerParameter[8] /* trainlight.Red.nIn PARAM */,((modelica_integer) 0));
    if(!tmp32)
    {
      tmp34 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[8] /* trainlight.Red.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.Red.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 290
type: ALGORITHM

  assert(trainlight.On.nOut >= 0, "Variable violating min constraint: 0 <= trainlight.On.nOut, has value: " + String(trainlight.On.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,71,"Variable violating min constraint: 0 <= trainlight.On.nOut, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->simulationInfo->integerParameter[7] /* trainlight.On.nOut PARAM */,((modelica_integer) 0));
    if(!tmp36)
    {
      tmp38 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[7] /* trainlight.On.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.On.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 291
type: ALGORITHM

  assert(trainlight.On.nIn >= 0, "Variable violating min constraint: 0 <= trainlight.On.nIn, has value: " + String(trainlight.On.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainIntersection_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,70,"Variable violating min constraint: 0 <= trainlight.On.nIn, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->simulationInfo->integerParameter[6] /* trainlight.On.nIn PARAM */,((modelica_integer) 0));
    if(!tmp40)
    {
      tmp42 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* trainlight.On.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.On.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_TrainIntersection_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_TrainIntersection_eqFunction_19(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_18(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_17(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_16(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_15(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_14(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_13(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_12(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_11(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_10(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_9(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_8(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_7(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_6(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_5(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_4(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_3(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_2(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_1(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_281(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_282(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_283(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_284(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_285(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_286(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_287(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_288(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_289(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_290(data, threadData);
  TrainCrossing_TrainIntersection_eqFunction_291(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* car.size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* car1.size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* car2.size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* sensors.size PARAM */ = ((modelica_integer) 3);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* trainlight.Off.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* trainlight.Off.nOut PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* trainlight.On.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* trainlight.On.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* trainlight.Red.nIn PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* trainlight.Red.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* car.isClumsy PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* car1.isClumsy PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* car2.isClumsy PARAM */ = 1;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* sensors.SensorFail PARAM */ = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* trainlight.OffToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* trainlight.OnToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* trainlight.OnToRed.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[8] /* trainlight.RedToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* trainlight.RedToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  TrainCrossing_TrainIntersection_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

