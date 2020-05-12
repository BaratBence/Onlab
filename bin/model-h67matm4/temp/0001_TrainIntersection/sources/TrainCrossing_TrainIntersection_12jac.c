/* Jacobians 5 */
#include "TrainCrossing_TrainIntersection_model.h"
#include "TrainCrossing_TrainIntersection_12jac.h"
int TrainCrossing_TrainIntersection_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainIntersection_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainIntersection_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TrainCrossing_TrainIntersection_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TrainCrossing_TrainIntersection_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TrainCrossing_TrainIntersection_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

int TrainCrossing_TrainIntersection_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_TrainIntersection_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_TrainIntersection_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TrainCrossing_TrainIntersection_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int TrainCrossing_TrainIntersection_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+14] = {0,1,0,1,1,0,1,1,0,1,0,0,0,0,1};
  const int rowIndex[7] = {2,1,5,4,8,7,12};
  int i = 0;
  
  jacobian->sizeCols = 14;
  jacobian->sizeRows = 14;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((14+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 7;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (14+1)*sizeof(int));
  
  for(i=2;i<14+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 7*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[9] = 1;
  jacobian->sparsePattern->colorCols[10] = 1;
  jacobian->sparsePattern->colorCols[11] = 1;
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[7] = 1;
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[6] = 1;
  jacobian->sparsePattern->colorCols[12] = 1;
  jacobian->sparsePattern->colorCols[13] = 1;
  TRACE_POP
  return 0;
}


