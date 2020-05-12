/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TrainCrossing_TrainLight_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int TrainCrossing_TrainLight_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TrainCrossing_TrainLight_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TrainCrossing_TrainLight_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TrainCrossing_TrainLight_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: ALGORITHM

  assert(RedToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= RedToOff.waitTime, has value: " + String(RedToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,72,"Variable violating min constraint: 0.0 <= RedToOff.waitTime, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[4] /* RedToOff.waitTime PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[4] /* RedToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRedToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 147
type: ALGORITHM

  assert(RedToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= RedToOn.waitTime, has value: " + String(RedToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,71,"Variable violating min constraint: 0.0 <= RedToOn.waitTime, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[5] /* RedToOn.waitTime PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* RedToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRedToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 148
type: ALGORITHM

  assert(OffToOn.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OffToOn.waitTime, has value: " + String(OffToOn.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,71,"Variable violating min constraint: 0.0 <= OffToOn.waitTime, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[1] /* OffToOn.waitTime PARAM */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[1] /* OffToOn.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOffToOn.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 149
type: ALGORITHM

  assert(OnToOff.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OnToOff.waitTime, has value: " + String(OnToOff.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,71,"Variable violating min constraint: 0.0 <= OnToOff.waitTime, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[2] /* OnToOff.waitTime PARAM */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[2] /* OnToOff.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOnToOff.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 150
type: ALGORITHM

  assert(OnToRed.waitTime >= 0.0, "Variable violating min constraint: 0.0 <= OnToRed.waitTime, has value: " + String(OnToRed.waitTime, "g"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,71,"Variable violating min constraint: 0.0 <= OnToRed.waitTime, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->simulationInfo->realParameter[3] /* OnToRed.waitTime PARAM */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[3] /* OnToRed.waitTime PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",2022,5,2024,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOnToRed.waitTime >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 151
type: ALGORITHM

  assert(Off.nOut >= 0, "Variable violating min constraint: 0 <= Off.nOut, has value: " + String(Off.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,61,"Variable violating min constraint: 0 <= Off.nOut, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */,((modelica_integer) 0));
    if(!tmp20)
    {
      tmp22 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOff.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 152
type: ALGORITHM

  assert(Off.nIn >= 0, "Variable violating min constraint: 0 <= Off.nIn, has value: " + String(Off.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,60,"Variable violating min constraint: 0 <= Off.nIn, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */,((modelica_integer) 0));
    if(!tmp24)
    {
      tmp26 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOff.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 153
type: ALGORITHM

  assert(Red.nOut >= 0, "Variable violating min constraint: 0 <= Red.nOut, has value: " + String(Red.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,61,"Variable violating min constraint: 0 <= Red.nOut, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */,((modelica_integer) 0));
    if(!tmp28)
    {
      tmp30 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRed.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 154
type: ALGORITHM

  assert(Red.nIn >= 0, "Variable violating min constraint: 0 <= Red.nIn, has value: " + String(Red.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,60,"Variable violating min constraint: 0 <= Red.nIn, has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */,((modelica_integer) 0));
    if(!tmp32)
    {
      tmp34 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nRed.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 155
type: ALGORITHM

  assert(On.nOut >= 0, "Variable violating min constraint: 0 <= On.nOut, has value: " + String(On.nOut, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,60,"Variable violating min constraint: 0 <= On.nOut, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->simulationInfo->integerParameter[3] /* On.nOut PARAM */,((modelica_integer) 0));
    if(!tmp36)
    {
      tmp38 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[3] /* On.nOut PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1930,5,1930,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOn.nOut >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 156
type: ALGORITHM

  assert(On.nIn >= 0, "Variable violating min constraint: 0 <= On.nIn, has value: " + String(On.nIn, "d"));
*/
OMC_DISABLE_OPT
static void TrainCrossing_TrainLight_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,59,"Variable violating min constraint: 0 <= On.nIn, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->simulationInfo->integerParameter[2] /* On.nIn PARAM */,((modelica_integer) 0));
    if(!tmp40)
    {
      tmp42 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* On.nIn PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"E:/Modelica/lib/omlibrary/Modelica 3.2.3/StateGraph.mo",1929,5,1929,67,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nOn.nIn >= 0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TrainCrossing_TrainLight_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TrainCrossing_TrainLight_eqFunction_18(data, threadData);
  TrainCrossing_TrainLight_eqFunction_17(data, threadData);
  TrainCrossing_TrainLight_eqFunction_16(data, threadData);
  TrainCrossing_TrainLight_eqFunction_15(data, threadData);
  TrainCrossing_TrainLight_eqFunction_14(data, threadData);
  TrainCrossing_TrainLight_eqFunction_13(data, threadData);
  TrainCrossing_TrainLight_eqFunction_12(data, threadData);
  TrainCrossing_TrainLight_eqFunction_11(data, threadData);
  TrainCrossing_TrainLight_eqFunction_10(data, threadData);
  TrainCrossing_TrainLight_eqFunction_9(data, threadData);
  TrainCrossing_TrainLight_eqFunction_8(data, threadData);
  TrainCrossing_TrainLight_eqFunction_7(data, threadData);
  TrainCrossing_TrainLight_eqFunction_6(data, threadData);
  TrainCrossing_TrainLight_eqFunction_5(data, threadData);
  TrainCrossing_TrainLight_eqFunction_4(data, threadData);
  TrainCrossing_TrainLight_eqFunction_3(data, threadData);
  TrainCrossing_TrainLight_eqFunction_2(data, threadData);
  TrainCrossing_TrainLight_eqFunction_1(data, threadData);
  TrainCrossing_TrainLight_eqFunction_146(data, threadData);
  TrainCrossing_TrainLight_eqFunction_147(data, threadData);
  TrainCrossing_TrainLight_eqFunction_148(data, threadData);
  TrainCrossing_TrainLight_eqFunction_149(data, threadData);
  TrainCrossing_TrainLight_eqFunction_150(data, threadData);
  TrainCrossing_TrainLight_eqFunction_151(data, threadData);
  TrainCrossing_TrainLight_eqFunction_152(data, threadData);
  TrainCrossing_TrainLight_eqFunction_153(data, threadData);
  TrainCrossing_TrainLight_eqFunction_154(data, threadData);
  TrainCrossing_TrainLight_eqFunction_155(data, threadData);
  TrainCrossing_TrainLight_eqFunction_156(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TrainCrossing_TrainLight_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* Off.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* Off.nOut PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* On.nIn PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* On.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* Red.nIn PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* Red.nOut PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* OffToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* OnToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* OnToRed.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* RedToOff.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* RedToOn.enableTimer PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  TrainCrossing_TrainLight_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

