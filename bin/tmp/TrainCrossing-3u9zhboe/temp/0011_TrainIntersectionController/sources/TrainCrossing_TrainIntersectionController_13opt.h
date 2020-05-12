#if defined(__cplusplus)
  extern "C" {
#endif
  int TrainCrossing_TrainIntersectionController_mayer(DATA* data, modelica_real** res, short*);
  int TrainCrossing_TrainIntersectionController_lagrange(DATA* data, modelica_real** res, short *, short *);
  int TrainCrossing_TrainIntersectionController_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int TrainCrossing_TrainIntersectionController_setInputData(DATA *data, const modelica_boolean file);
  int TrainCrossing_TrainIntersectionController_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif