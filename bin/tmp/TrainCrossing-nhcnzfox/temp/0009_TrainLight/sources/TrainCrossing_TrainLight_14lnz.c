/* Linearization */
#include "TrainCrossing_TrainLight_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_TrainLight_linear_model_frame()
{
  return "model linear_TrainCrossing_TrainLight\n  parameter Integer n = 2 \"number of states\";\n  parameter Integer p = 1 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = [%s];\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = [%s];\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'x_Gate_Angle' = x[1];\n""  Real 'x_Gate_Rotation' = x[2];\n"
  "  Real 'u_Safe_Passage' = u[1];\n"
  "  Real 'y_ColorState_output' = y[1];\n""  Real 'y_Gate_Angle_output' = y[2];\n""  Real 'y_Intersection_output' = y[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_TrainLight;\n";
}
const char *TrainCrossing_TrainLight_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_TrainLight\n  parameter Integer n = 2 \"number of states\";\n  parameter Integer p = 1 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n  parameter Integer nz = 23 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[2] = %s;\n"
  "  parameter Real u0[1] = %s;\n"
  "  parameter Real z0[23] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = [%s];\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = [%s];\n"
  "  parameter Real Cz[nz, n] = [%s];\n"
  "  parameter Real Dz[nz, p] = [%s];\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_Gate_Angle' = x[1];\n""  Real 'x_Gate_Rotation' = x[2];\n"
  "  Real 'u_Safe_Passage' = u[1];\n"
  "  Real 'y_ColorState_output' = y[1];\n""  Real 'y_Gate_Angle_output' = y[2];\n""  Real 'y_Intersection_output' = y[3];\n"
  "  Real 'z_Gate_Angle_output' = z[1];\n""  Real 'z_Intersection_output' = z[2];\n""  Real 'z_Off.outerStatePort.subgraphStatePort.activeSteps' = z[3];\n""  Real 'z_OffToOn.t' = z[4];\n""  Real 'z_OffToOn.t_dummy' = z[5];\n""  Real 'z_OffToOn.t_start' = z[6];\n""  Real 'z_On.outerStatePort.subgraphStatePort.activeSteps' = z[7];\n""  Real 'z_OnToOff.t' = z[8];\n""  Real 'z_OnToOff.t_dummy' = z[9];\n""  Real 'z_OnToOff.t_start' = z[10];\n""  Real 'z_OnToRed.t' = z[11];\n""  Real 'z_OnToRed.t_dummy' = z[12];\n""  Real 'z_OnToRed.t_start' = z[13];\n""  Real 'z_Red.outerStatePort.subgraphStatePort.activeSteps' = z[14];\n""  Real 'z_RedToOff.t' = z[15];\n""  Real 'z_RedToOff.t_dummy' = z[16];\n""  Real 'z_RedToOff.t_start' = z[17];\n""  Real 'z_RedToOn.t' = z[18];\n""  Real 'z_RedToOn.t_dummy' = z[19];\n""  Real 'z_RedToOn.t_start' = z[20];\n""  Real 'z_Safe_Passage' = z[21];\n""  Real 'z_stateGraphRoot.subgraphStatePort.activeSteps' = z[22];\n""  Real 'z_stateGraphRoot.subgraphStatePort.activeStepsDummy' = z[23];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_TrainLight;\n";
}
#if defined(__cplusplus)
}
#endif

