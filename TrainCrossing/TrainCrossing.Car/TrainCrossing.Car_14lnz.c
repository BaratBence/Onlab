/* Linearization */
#include "TrainCrossing.Car_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_Car_linear_model_frame()
{
  return "model linear_TrainCrossing_Car\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer p = 9 \"number of inputs\";\n  parameter Integer q = 2 \"number of outputs\";\n"
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
  "  Real 'x_acceleration' = x[1];\n""  Real 'x_distance' = x[2];\n""  Real 'x_speed' = x[3];\n"
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_DistanceVec[3]' = u[3];\n""  Real 'u_Gate_Angle' = u[4];\n""  Real 'u_LengthVec[1]' = u[5];\n""  Real 'u_LengthVec[2]' = u[6];\n""  Real 'u_LengthVec[3]' = u[7];\n""  Real 'u_LightColor' = u[8];\n""  Real 'u_Target' = u[9];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_Car;\n";
}
const char *TrainCrossing_Car_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_Car\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer p = 9 \"number of inputs\";\n  parameter Integer q = 2 \"number of outputs\";\n  parameter Integer nz = 13 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[3] = %s;\n"
  "  parameter Real u0[9] = %s;\n"
  "  parameter Real z0[13] = %s;\n"
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
  "  Real 'x_acceleration' = x[1];\n""  Real 'x_distance' = x[2];\n""  Real 'x_speed' = x[3];\n"
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_DistanceVec[3]' = u[3];\n""  Real 'u_Gate_Angle' = u[4];\n""  Real 'u_LengthVec[1]' = u[5];\n""  Real 'u_LengthVec[2]' = u[6];\n""  Real 'u_LengthVec[3]' = u[7];\n""  Real 'u_LightColor' = u[8];\n""  Real 'u_Target' = u[9];\n"
  "  Real 'y_Distance' = y[1];\n""  Real 'y_Length' = y[2];\n"
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_BreakingDistance' = z[2];\n""  Real 'z_Distance' = z[3];\n""  Real 'z_DistanceVec[1]' = z[4];\n""  Real 'z_DistanceVec[2]' = z[5];\n""  Real 'z_DistanceVec[3]' = z[6];\n""  Real 'z_Gate_Angle' = z[7];\n""  Real 'z_Length' = z[8];\n""  Real 'z_LengthVec[1]' = z[9];\n""  Real 'z_LengthVec[2]' = z[10];\n""  Real 'z_LengthVec[3]' = z[11];\n""  Real 'z_Target' = z[12];\n""  Real 'z_tmp' = z[13];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_Car;\n";
}
#if defined(__cplusplus)
}
#endif

