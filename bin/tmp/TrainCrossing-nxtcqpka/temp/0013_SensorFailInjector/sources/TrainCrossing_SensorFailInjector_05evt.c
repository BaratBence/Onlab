/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TrainCrossing_SensorFailInjector_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TrainCrossing_SensorFailInjector_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TrainCrossing_SensorFailInjector_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= 30.0"};
  static const int occurEqs0[] = {1,5};
  static const int *occurEqs[] = {occurEqs0};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int TrainCrossing_SensorFailInjector_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int TrainCrossing_SensorFailInjector_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterEqZC(data->localData[0]->timeValue, 30.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TrainCrossing_SensorFailInjector_relationDescription(int i)
{
  const char *res[] = {"time >= 30.0"};
  return res[i];
}

int TrainCrossing_SensorFailInjector_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp1;
  
  if(evalforZeroCross) {
    tmp1 = GreaterEqZC(data->localData[0]->timeValue, 30.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp1;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= 30.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

