#include "omc_simulation_settings.h"
#include "TrainCrossing_CrashMonitor_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TrainCrossing_CrashMonitor_includes.h"


DLLExport
modelica_boolean omc_TrainCrossing_CrashMonitor_Danger(threadData_t *threadData, modelica_integer _size, boolean_array _DangerArray)
{
  modelica_boolean _inDanger;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _inDanger has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _size;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _inDanger = ((*boolean_array_element_addr1(&_DangerArray, 1, _i)) || _inDanger);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _inDanger;
}
modelica_metatype boxptr_TrainCrossing_CrashMonitor_Danger(threadData_t *threadData, modelica_metatype _size, modelica_metatype _DangerArray)
{
  modelica_integer tmp1;
  modelica_boolean _inDanger;
  modelica_metatype out_inDanger;
  tmp1 = mmc_unbox_integer(_size);
  _inDanger = omc_TrainCrossing_CrashMonitor_Danger(threadData, tmp1, *((base_array_t*)_DangerArray));
  out_inDanger = mmc_mk_icon(_inDanger);
  return out_inDanger;
}

#ifdef __cplusplus
}
#endif
