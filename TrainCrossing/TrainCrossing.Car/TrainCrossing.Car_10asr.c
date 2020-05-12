/* Asserts */
#include "TrainCrossing.Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 39
type: ALGORITHM

  assert(state >= TrainCrossing.TrainLightColor.on and state <= TrainCrossing.TrainLightColor.off, "Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= state <= TrainCrossing.TrainLightColor.off, has value: " + String(state, "d"));
*/
void TrainCrossing_Car_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,130,"Variable violating min/max constraint: TrainCrossing.TrainLightColor.on <= state <= TrainCrossing.TrainLightColor.off, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->localData[0]->integerVars[1] /* state DISCRETE */,1);
    tmp5 = LessEq(data->localData[0]->integerVars[1] /* state DISCRETE */,3);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[1] /* state DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"E:/Onlab/TrainCrossing2.2/TrainCrossing.mo",10,5,10,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nstate >= TrainCrossing.TrainLightColor.on and state <= TrainCrossing.TrainLightColor.off", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int TrainCrossing_Car_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TrainCrossing_Car_eqFunction_39(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

