/* Linearization */
#include "TrainCrossing_Collection_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TrainCrossing_Collection_linear_model_frame()
{
  return "model linear_TrainCrossing_Collection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 20 \"number of inputs\";\n  parameter Integer q = 20 \"number of outputs\";\n"
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
  "  Real 'u_Distance1' = u[1];\n""  Real 'u_Distance10' = u[2];\n""  Real 'u_Distance2' = u[3];\n""  Real 'u_Distance3' = u[4];\n""  Real 'u_Distance4' = u[5];\n""  Real 'u_Distance5' = u[6];\n""  Real 'u_Distance6' = u[7];\n""  Real 'u_Distance7' = u[8];\n""  Real 'u_Distance8' = u[9];\n""  Real 'u_Distance9' = u[10];\n""  Real 'u_Length1' = u[11];\n""  Real 'u_Length10' = u[12];\n""  Real 'u_Length2' = u[13];\n""  Real 'u_Length3' = u[14];\n""  Real 'u_Length4' = u[15];\n""  Real 'u_Length5' = u[16];\n""  Real 'u_Length6' = u[17];\n""  Real 'u_Length7' = u[18];\n""  Real 'u_Length8' = u[19];\n""  Real 'u_Length9' = u[20];\n"
  "  Real 'y_DistanceVec[1]' = y[1];\n""  Real 'y_DistanceVec[2]' = y[2];\n""  Real 'y_DistanceVec[3]' = y[3];\n""  Real 'y_DistanceVec[4]' = y[4];\n""  Real 'y_DistanceVec[5]' = y[5];\n""  Real 'y_DistanceVec[6]' = y[6];\n""  Real 'y_DistanceVec[7]' = y[7];\n""  Real 'y_DistanceVec[8]' = y[8];\n""  Real 'y_DistanceVec[9]' = y[9];\n""  Real 'y_DistanceVec[10]' = y[10];\n""  Real 'y_LengthVec[1]' = y[11];\n""  Real 'y_LengthVec[2]' = y[12];\n""  Real 'y_LengthVec[3]' = y[13];\n""  Real 'y_LengthVec[4]' = y[14];\n""  Real 'y_LengthVec[5]' = y[15];\n""  Real 'y_LengthVec[6]' = y[16];\n""  Real 'y_LengthVec[7]' = y[17];\n""  Real 'y_LengthVec[8]' = y[18];\n""  Real 'y_LengthVec[9]' = y[19];\n""  Real 'y_LengthVec[10]' = y[20];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TrainCrossing_Collection;\n";
}
const char *TrainCrossing_Collection_linear_model_datarecovery_frame()
{
  return "model linear_TrainCrossing_Collection\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 20 \"number of inputs\";\n  parameter Integer q = 20 \"number of outputs\";\n  parameter Integer nz = 40 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[20] = %s;\n"
  "  parameter Real z0[40] = %s;\n"
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
  "  Real 'u_Distance1' = u[1];\n""  Real 'u_Distance10' = u[2];\n""  Real 'u_Distance2' = u[3];\n""  Real 'u_Distance3' = u[4];\n""  Real 'u_Distance4' = u[5];\n""  Real 'u_Distance5' = u[6];\n""  Real 'u_Distance6' = u[7];\n""  Real 'u_Distance7' = u[8];\n""  Real 'u_Distance8' = u[9];\n""  Real 'u_Distance9' = u[10];\n""  Real 'u_Length1' = u[11];\n""  Real 'u_Length10' = u[12];\n""  Real 'u_Length2' = u[13];\n""  Real 'u_Length3' = u[14];\n""  Real 'u_Length4' = u[15];\n""  Real 'u_Length5' = u[16];\n""  Real 'u_Length6' = u[17];\n""  Real 'u_Length7' = u[18];\n""  Real 'u_Length8' = u[19];\n""  Real 'u_Length9' = u[20];\n"
  "  Real 'y_DistanceVec[1]' = y[1];\n""  Real 'y_DistanceVec[2]' = y[2];\n""  Real 'y_DistanceVec[3]' = y[3];\n""  Real 'y_DistanceVec[4]' = y[4];\n""  Real 'y_DistanceVec[5]' = y[5];\n""  Real 'y_DistanceVec[6]' = y[6];\n""  Real 'y_DistanceVec[7]' = y[7];\n""  Real 'y_DistanceVec[8]' = y[8];\n""  Real 'y_DistanceVec[9]' = y[9];\n""  Real 'y_DistanceVec[10]' = y[10];\n""  Real 'y_LengthVec[1]' = y[11];\n""  Real 'y_LengthVec[2]' = y[12];\n""  Real 'y_LengthVec[3]' = y[13];\n""  Real 'y_LengthVec[4]' = y[14];\n""  Real 'y_LengthVec[5]' = y[15];\n""  Real 'y_LengthVec[6]' = y[16];\n""  Real 'y_LengthVec[7]' = y[17];\n""  Real 'y_LengthVec[8]' = y[18];\n""  Real 'y_LengthVec[9]' = y[19];\n""  Real 'y_LengthVec[10]' = y[20];\n"
  "  Real 'z_Distance1' = z[1];\n""  Real 'z_Distance10' = z[2];\n""  Real 'z_Distance2' = z[3];\n""  Real 'z_Distance3' = z[4];\n""  Real 'z_Distance4' = z[5];\n""  Real 'z_Distance5' = z[6];\n""  Real 'z_Distance6' = z[7];\n""  Real 'z_Distance7' = z[8];\n""  Real 'z_Distance8' = z[9];\n""  Real 'z_Distance9' = z[10];\n""  Real 'z_DistanceVec[1]' = z[11];\n""  Real 'z_DistanceVec[2]' = z[12];\n""  Real 'z_DistanceVec[3]' = z[13];\n""  Real 'z_DistanceVec[4]' = z[14];\n""  Real 'z_DistanceVec[5]' = z[15];\n""  Real 'z_DistanceVec[6]' = z[16];\n""  Real 'z_DistanceVec[7]' = z[17];\n""  Real 'z_DistanceVec[8]' = z[18];\n""  Real 'z_DistanceVec[9]' = z[19];\n""  Real 'z_DistanceVec[10]' = z[20];\n""  Real 'z_Length1' = z[21];\n""  Real 'z_Length10' = z[22];\n""  Real 'z_Length2' = z[23];\n""  Real 'z_Length3' = z[24];\n""  Real 'z_Length4' = z[25];\n""  Real 'z_Length5' = z[26];\n""  Real 'z_Length6' = z[27];\n""  Real 'z_Length7' = z[28];\n""  Real 'z_Length8' = z[29];\n""  Real 'z_Length9' = z[30];\n""  Real 'z_LengthVec[1]' = z[31];\n""  Real 'z_LengthVec[2]' = z[32];\n""  Real 'z_LengthVec[3]' = z[33];\n""  Real 'z_LengthVec[4]' = z[34];\n""  Real 'z_LengthVec[5]' = z[35];\n""  Real 'z_LengthVec[6]' = z[36];\n""  Real 'z_LengthVec[7]' = z[37];\n""  Real 'z_LengthVec[8]' = z[38];\n""  Real 'z_LengthVec[9]' = z[39];\n""  Real 'z_LengthVec[10]' = z[40];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TrainCrossing_Collection;\n";
}
#if defined(__cplusplus)
}
#endif

