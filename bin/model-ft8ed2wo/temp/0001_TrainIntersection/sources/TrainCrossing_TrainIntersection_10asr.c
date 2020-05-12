/* Asserts */
#include "TrainCrossing_TrainIntersection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 292
type: ALGORITHM

  assert(car.state >= TrainCrossing.TrainLightColor.on and car.state <= TrainCrossing.TrainLightColor.off, "Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car.state <= TrainCrossing.TrainLightColor.off, has value: " + String(car.state, "d"));
*/
void TrainCrossing_TrainIntersection_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,134,"Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car.state <= TrainCrossing.TrainLightColor.off, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->integerVars[0] /* car.state DISCRETE */,1);
    tmp1 = LessEq(data->localData[0]->integerVars[0] /* car.state DISCRETE */,3);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[0] /* car.state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"E:/Onlab/TrainCrossing2.0/TrainCrossing.mo",8,5,8,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncar.state >= TrainCrossing.TrainLightColor.on and car.state <= TrainCrossing.TrainLightColor.off", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 293
type: ALGORITHM

  assert(car1.state >= TrainCrossing.TrainLightColor.on and car1.state <= TrainCrossing.TrainLightColor.off, "Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car1.state <= TrainCrossing.TrainLightColor.off, has value: " + String(car1.state, "d"));
*/
void TrainCrossing_TrainIntersection_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,135,"Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car1.state <= TrainCrossing.TrainLightColor.off, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->integerVars[1] /* car1.state DISCRETE */,1);
    tmp6 = LessEq(data->localData[0]->integerVars[1] /* car1.state DISCRETE */,3);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[1] /* car1.state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"E:/Onlab/TrainCrossing2.0/TrainCrossing.mo",8,5,8,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncar1.state >= TrainCrossing.TrainLightColor.on and car1.state <= TrainCrossing.TrainLightColor.off", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 294
type: ALGORITHM

  assert(car2.state >= TrainCrossing.TrainLightColor.on and car2.state <= TrainCrossing.TrainLightColor.off, "Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car2.state <= TrainCrossing.TrainLightColor.off, has value: " + String(car2.state, "d"));
*/
void TrainCrossing_TrainIntersection_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,135,"Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= car2.state <= TrainCrossing.TrainLightColor.off, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->integerVars[3] /* car2.state DISCRETE */,1);
    tmp11 = LessEq(data->localData[0]->integerVars[3] /* car2.state DISCRETE */,3);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[3] /* car2.state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"E:/Onlab/TrainCrossing2.0/TrainCrossing.mo",8,5,8,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncar2.state >= TrainCrossing.TrainLightColor.on and car2.state <= TrainCrossing.TrainLightColor.off", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 295
type: ALGORITHM

  assert(trainlight.state >= TrainCrossing.TrainLightColor.on and trainlight.state <= TrainCrossing.TrainLightColor.off, "Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= trainlight.state <= TrainCrossing.TrainLightColor.off, has value: " + String(trainlight.state, "d"));
*/
void TrainCrossing_TrainIntersection_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,141,"Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= trainlight.state <= TrainCrossing.TrainLightColor.off, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */,1);
    tmp16 = LessEq(data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */,3);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[6] /* trainlight.state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"E:/Onlab/TrainCrossing2.0/TrainCrossing.mo",93,5,93,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntrainlight.state >= TrainCrossing.TrainLightColor.on and trainlight.state <= TrainCrossing.TrainLightColor.off", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TrainCrossing_TrainIntersection_eqFunction_292(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_293(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_294(data, threadData);

  TrainCrossing_TrainIntersection_eqFunction_295(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

