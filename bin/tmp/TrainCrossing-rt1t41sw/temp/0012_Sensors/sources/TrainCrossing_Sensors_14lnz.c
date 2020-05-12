/* Linearization */
#include "TrainCrossing_Sensors_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_Sensors_linear_model_frame()
{
  return "model linear_TrainCrossing_Sensors\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 5 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n"
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
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_LengthVec[1]' = u[3];\n""  Real 'u_LengthVec[2]' = u[4];\n""  Real 'u_SensorFail' = u[5];\n"
  "  Real 'y_Intersection' = y[1];\n""  Real 'y_Sensor1_Active' = y[2];\n""  Real 'y_Sensor2_Active' = y[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_Sensors;\n";
}
const char *TrainCrossing_Sensors_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_Sensors\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 5 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n  parameter Integer nz = 6 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[5] = %s;\n"
  "  parameter Real z0[6] = %s;\n"
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
  "  Real 'u_DistanceVec[1]' = u[1];\n""  Real 'u_DistanceVec[2]' = u[2];\n""  Real 'u_LengthVec[1]' = u[3];\n""  Real 'u_LengthVec[2]' = u[4];\n""  Real 'u_SensorFail' = u[5];\n"
  "  Real 'y_Intersection' = y[1];\n""  Real 'y_Sensor1_Active' = y[2];\n""  Real 'y_Sensor2_Active' = y[3];\n"
  "  Real 'z_$outputAlias_Intersection' = z[1];\n""  Real 'z_DistanceVec[1]' = z[2];\n""  Real 'z_DistanceVec[2]' = z[3];\n""  Real 'z_Intersection' = z[4];\n""  Real 'z_LengthVec[1]' = z[5];\n""  Real 'z_LengthVec[2]' = z[6];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_Sensors;\n";
}
#if defined(__cplusplus)
}
#endif

