/* Linearization */
#include "TrainCrossing_Collection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_Collection_linear_model_frame()
{
  return "model linear_TrainCrossing_Collection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 6 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'y_DistanceVec[1]' = y[1];\n""  Real 'y_DistanceVec[2]' = y[2];\n""  Real 'y_DistanceVec[3]' = y[3];\n""  Real 'y_LengthVec[1]' = y[4];\n""  Real 'y_LengthVec[2]' = y[5];\n""  Real 'y_LengthVec[3]' = y[6];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_Collection;\n";
}
const char *TrainCrossing_Collection_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_Collection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 6 \"number of outputs\";\n  parameter Integer nz = 12 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[12] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'y_DistanceVec[1]' = y[1];\n""  Real 'y_DistanceVec[2]' = y[2];\n""  Real 'y_DistanceVec[3]' = y[3];\n""  Real 'y_LengthVec[1]' = y[4];\n""  Real 'y_LengthVec[2]' = y[5];\n""  Real 'y_LengthVec[3]' = y[6];\n"
  "  Real 'z_DistanceVec[1]' = z[1];\n""  Real 'z_DistanceVec[2]' = z[2];\n""  Real 'z_DistanceVec[3]' = z[3];\n""  Real 'z_LengthVec[1]' = z[4];\n""  Real 'z_LengthVec[2]' = z[5];\n""  Real 'z_LengthVec[3]' = z[6];\n""  Real 'z_distanceVec[1]' = z[7];\n""  Real 'z_distanceVec[2]' = z[8];\n""  Real 'z_distanceVec[3]' = z[9];\n""  Real 'z_lengthVec[1]' = z[10];\n""  Real 'z_lengthVec[2]' = z[11];\n""  Real 'z_lengthVec[3]' = z[12];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_Collection;\n";
}
#if defined(__cplusplus)
}
#endif

