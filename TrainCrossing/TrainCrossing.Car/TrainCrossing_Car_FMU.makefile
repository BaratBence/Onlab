# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica//include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainCrossing_Car.fmutmp/sources/TrainCrossing_Car_init.xml
	cp -a "E:/Modelica//share/omc/runtime/c/fmi/buildproject/"* TrainCrossing_Car.fmutmp/sources
	cp -a TrainCrossing_Car_FMU.libs TrainCrossing_Car.fmutmp/sources/

