# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica//include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainCrossing_Train.fmutmp/sources/TrainCrossing_Train_init.xml
	cp -a "E:/Modelica//share/omc/runtime/c/fmi/buildproject/"* TrainCrossing_Train.fmutmp/sources
	cp -a TrainCrossing_Train_FMU.libs TrainCrossing_Train.fmutmp/sources/

