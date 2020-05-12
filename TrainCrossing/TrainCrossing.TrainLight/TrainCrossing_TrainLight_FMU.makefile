# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica//include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainCrossing_TrainLight.fmutmp/sources/TrainCrossing_TrainLight_init.xml
	cp -a "E:/Modelica//share/omc/runtime/c/fmi/buildproject/"* TrainCrossing_TrainLight.fmutmp/sources
	cp -a TrainCrossing_TrainLight_FMU.libs TrainCrossing_TrainLight.fmutmp/sources/

