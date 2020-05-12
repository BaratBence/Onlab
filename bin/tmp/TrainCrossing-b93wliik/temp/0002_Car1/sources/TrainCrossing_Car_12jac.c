/* Jacobians 5 */
#include "TrainCrossing_Car_model.h"
#include "TrainCrossing_Car_12jac.h"
int TrainCrossing_Car_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_Car_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_Car_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_Car_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int TrainCrossing_Car_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TrainCrossing_Car_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TrainCrossing_Car_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

int TrainCrossing_Car_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_Car_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_Car_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_Car_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int TrainCrossing_Car_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+3] = {0,1,0,1};
  const int rowIndex[2] = {2,1};
  int i = 0;
  
  jacobian->sizeCols = 3;
  jacobian->sizeRows = 3;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((3+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(2*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 2;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(3*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (3+1)*sizeof(int));
  
  for(i=2;i<3+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 2*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}


