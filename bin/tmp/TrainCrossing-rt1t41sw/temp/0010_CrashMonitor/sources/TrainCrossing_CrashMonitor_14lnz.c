/* Linearization */
#include "TrainCrossing_CrashMonitor_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_CrashMonitor_linear_model_frame()
{
  return "model linear_TrainCrossing_CrashMonitor\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 12 \"number of inputs\";\n  parameter Integer q = 1 \"number of outputs\";\n"
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
  "  Real 'u_CarDistanceVec[1]' = u[1];\n""  Real 'u_CarDistanceVec[2]' = u[2];\n""  Real 'u_CarDistanceVec[3]' = u[3];\n""  Real 'u_CarIntersection' = u[4];\n""  Real 'u_CarLengthVec[1]' = u[5];\n""  Real 'u_CarLengthVec[2]' = u[6];\n""  Real 'u_CarLengthVec[3]' = u[7];\n""  Real 'u_TrainDistanceVec[1]' = u[8];\n""  Real 'u_TrainDistanceVec[2]' = u[9];\n""  Real 'u_TrainIntersection' = u[10];\n""  Real 'u_TrainLengthVec[1]' = u[11];\n""  Real 'u_TrainLengthVec[2]' = u[12];\n"
  "  Real 'y_Failure' = y[1];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_CrashMonitor;\n";
}
const char *TrainCrossing_CrashMonitor_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_CrashMonitor\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 12 \"number of inputs\";\n  parameter Integer q = 1 \"number of outputs\";\n  parameter Integer nz = 12 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[12] = %s;\n"
  "  parameter Real z0[12] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = [%s];\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n"
  "  parameter Real Dz[nz, p] = [%s];\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'u_CarDistanceVec[1]' = u[1];\n""  Real 'u_CarDistanceVec[2]' = u[2];\n""  Real 'u_CarDistanceVec[3]' = u[3];\n""  Real 'u_CarIntersection' = u[4];\n""  Real 'u_CarLengthVec[1]' = u[5];\n""  Real 'u_CarLengthVec[2]' = u[6];\n""  Real 'u_CarLengthVec[3]' = u[7];\n""  Real 'u_TrainDistanceVec[1]' = u[8];\n""  Real 'u_TrainDistanceVec[2]' = u[9];\n""  Real 'u_TrainIntersection' = u[10];\n""  Real 'u_TrainLengthVec[1]' = u[11];\n""  Real 'u_TrainLengthVec[2]' = u[12];\n"
  "  Real 'y_Failure' = y[1];\n"
  "  Real 'z_CarDistanceVec[1]' = z[1];\n""  Real 'z_CarDistanceVec[2]' = z[2];\n""  Real 'z_CarDistanceVec[3]' = z[3];\n""  Real 'z_CarIntersection' = z[4];\n""  Real 'z_CarLengthVec[1]' = z[5];\n""  Real 'z_CarLengthVec[2]' = z[6];\n""  Real 'z_CarLengthVec[3]' = z[7];\n""  Real 'z_TrainDistanceVec[1]' = z[8];\n""  Real 'z_TrainDistanceVec[2]' = z[9];\n""  Real 'z_TrainIntersection' = z[10];\n""  Real 'z_TrainLengthVec[1]' = z[11];\n""  Real 'z_TrainLengthVec[2]' = z[12];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_CrashMonitor;\n";
}
#if defined(__cplusplus)
}
#endif

