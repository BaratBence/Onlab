/* Linearization */
#include "TrainCrossing_TrainIntersectionController_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_TrainIntersectionController_linear_model_frame()
{
  return "model linear_TrainCrossing_TrainIntersectionController\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 2 \"number of inputs\";\n  parameter Integer q = 1 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = [%s];\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'u_Sensor1_Active' = u[1];\n""  Real 'u_Sensor2_Active' = u[2];\n"
  "  Real 'y_Safe_Passage' = y[1];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_TrainIntersectionController;\n";
}
const char *TrainCrossing_TrainIntersectionController_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_TrainIntersectionController\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 2 \"number of inputs\";\n  parameter Integer q = 1 \"number of outputs\";\n  parameter Integer nz = 0 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[2] = %s;\n"
  "  parameter Real z0[0] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = [%s];\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'u_Sensor1_Active' = u[1];\n""  Real 'u_Sensor2_Active' = u[2];\n"
  "  Real 'y_Safe_Passage' = y[1];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_TrainIntersectionController;\n";
}
#if defined(__cplusplus)
}
#endif

