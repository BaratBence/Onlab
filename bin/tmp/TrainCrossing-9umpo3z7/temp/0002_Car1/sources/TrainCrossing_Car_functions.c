#include "omc_simulation_settings.h"
#include "TrainCrossing_Car_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainCrossing_Car_includes.h"


DLLExport
modelica_real omc_TrainCrossing_Car_BreakCheck(threadData_t *threadData, modelica_integer _size, modelica_real _ThisCarDistance, modelica_real _Target, real_array _CarDistance, real_array _CarLength)
{
  modelica_real _Distance;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Distance has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      if((((*real_array_element_addr1(&_CarDistance, 1, _i)) > _ThisCarDistance) && ((*real_array_element_addr1(&_CarDistance, 1, _i)) <= _Target)))
      {
        _Distance = _Distance + (*real_array_element_addr1(&_CarLength, 1, _i)) + 2.0;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _Distance;
}
modelica_metatype boxptr_TrainCrossing_Car_BreakCheck(threadData_t *threadData, modelica_metatype _size, modelica_metatype _ThisCarDistance, modelica_metatype _Target, modelica_metatype _CarDistance, modelica_metatype _CarLength)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _Distance;
  modelica_metatype out_Distance;
  tmp1 = mmc_unbox_integer(_size);
  tmp2 = mmc_unbox_real(_ThisCarDistance);
  tmp3 = mmc_unbox_real(_Target);
  _Distance = omc_TrainCrossing_Car_BreakCheck(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_CarDistance), *((base_array_t*)_CarLength));
  out_Distance = mmc_mk_rcon(_Distance);
  return out_Distance;
}

#ifdef __cplusplus
}
#endif
