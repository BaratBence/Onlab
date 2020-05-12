#include "omc_simulation_settings.h"
#include "TrainCrossing_Sensors_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainCrossing_Sensors_includes.h"


DLLExport
modelica_boolean omc_TrainCrossing_Sensors_Active(threadData_t *threadData, modelica_integer _size, boolean_array _Train_Detected)
{
  modelica_boolean _Activated;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Activated has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _Activated = ((*boolean_array_element_addr1(&_Train_Detected, 1, _i)) || _Activated);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _Activated;
}
modelica_metatype boxptr_TrainCrossing_Sensors_Active(threadData_t *threadData, modelica_metatype _size, modelica_metatype _Train_Detected)
{
  modelica_integer tmp1;
  modelica_boolean _Activated;
  modelica_metatype out_Activated;
  tmp1 = mmc_unbox_integer(_size);
  _Activated = omc_TrainCrossing_Sensors_Active(threadData, tmp1, *((base_array_t*)_Train_Detected));
  out_Activated = mmc_mk_icon(_Activated);
  return out_Activated;
}

#ifdef __cplusplus
}
#endif
