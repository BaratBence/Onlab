# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica//include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainCrossing_Sensors.fmutmp/sources/TrainCrossing_Sensors_init.xml
	cp -a "E:/Modelica//share/omc/runtime/c/fmi/buildproject/"* TrainCrossing_Sensors.fmutmp/sources
	cp -a TrainCrossing_Sensors_FMU.libs TrainCrossing_Sensors.fmutmp/sources/

