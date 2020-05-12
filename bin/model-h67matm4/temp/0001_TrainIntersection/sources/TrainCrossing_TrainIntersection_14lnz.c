/* Linearization */
#include "TrainCrossing_TrainIntersection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_TrainIntersection_linear_model_frame()
{
  return "model linear_TrainCrossing_TrainIntersection\n  parameter Integer n = 14 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'x_car.acceleration' = x[1];\n""  Real 'x_car.distance' = x[2];\n""  Real 'x_car.speed' = x[3];\n""  Real 'x_car1.acceleration' = x[4];\n""  Real 'x_car1.distance' = x[5];\n""  Real 'x_car1.speed' = x[6];\n""  Real 'x_car2.acceleration' = x[7];\n""  Real 'x_car2.distance' = x[8];\n""  Real 'x_car2.speed' = x[9];\n""  Real 'x_train.distance' = x[10];\n""  Real 'x_train1.distance' = x[11];\n""  Real 'x_train2.distance' = x[12];\n""  Real 'x_trainlight.Gate_Angle' = x[13];\n""  Real 'x_trainlight.Gate_Rotation' = x[14];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_TrainIntersection;\n";
}
const char *TrainCrossing_TrainIntersection_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_TrainIntersection\n  parameter Integer n = 14 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n  parameter Integer nz = 27 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[14] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[27] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "  parameter Real Cz[nz, n] = [%s];\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_car.acceleration' = x[1];\n""  Real 'x_car.distance' = x[2];\n""  Real 'x_car.speed' = x[3];\n""  Real 'x_car1.acceleration' = x[4];\n""  Real 'x_car1.distance' = x[5];\n""  Real 'x_car1.speed' = x[6];\n""  Real 'x_car2.acceleration' = x[7];\n""  Real 'x_car2.distance' = x[8];\n""  Real 'x_car2.speed' = x[9];\n""  Real 'x_train.distance' = x[10];\n""  Real 'x_train1.distance' = x[11];\n""  Real 'x_train2.distance' = x[12];\n""  Real 'x_trainlight.Gate_Angle' = x[13];\n""  Real 'x_trainlight.Gate_Rotation' = x[14];\n"
  "  Real 'z_$cse7' = z[1];\n""  Real 'z_$cse8' = z[2];\n""  Real 'z_$cse9' = z[3];\n""  Real 'z_car.BreakingDistance' = z[4];\n""  Real 'z_car1.BreakingDistance' = z[5];\n""  Real 'z_car2.BreakingDistance' = z[6];\n""  Real 'z_sensors.Intersection' = z[7];\n""  Real 'z_trainlight.Off.outerStatePort.subgraphStatePort.activeSteps' = z[8];\n""  Real 'z_trainlight.OffToOn.t' = z[9];\n""  Real 'z_trainlight.OffToOn.t_dummy' = z[10];\n""  Real 'z_trainlight.OffToOn.t_start' = z[11];\n""  Real 'z_trainlight.On.outerStatePort.subgraphStatePort.activeSteps' = z[12];\n""  Real 'z_trainlight.OnToOff.t' = z[13];\n""  Real 'z_trainlight.OnToOff.t_dummy' = z[14];\n""  Real 'z_trainlight.OnToOff.t_start' = z[15];\n""  Real 'z_trainlight.OnToRed.t' = z[16];\n""  Real 'z_trainlight.OnToRed.t_dummy' = z[17];\n""  Real 'z_trainlight.OnToRed.t_start' = z[18];\n""  Real 'z_trainlight.Red.outerStatePort.subgraphStatePort.activeSteps' = z[19];\n""  Real 'z_trainlight.RedToOff.t' = z[20];\n""  Real 'z_trainlight.RedToOff.t_dummy' = z[21];\n""  Real 'z_trainlight.RedToOff.t_start' = z[22];\n""  Real 'z_trainlight.RedToOn.t' = z[23];\n""  Real 'z_trainlight.RedToOn.t_dummy' = z[24];\n""  Real 'z_trainlight.RedToOn.t_start' = z[25];\n""  Real 'z_trainlight.stateGraphRoot.subgraphStatePort.activeSteps' = z[26];\n""  Real 'z_trainlight.stateGraphRoot.subgraphStatePort.activeStepsDummy' = z[27];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_TrainIntersection;\n";
}
#if defined(__cplusplus)
}
#endif

