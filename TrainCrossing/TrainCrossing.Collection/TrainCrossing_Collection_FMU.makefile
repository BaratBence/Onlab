# FIXME: before you push into master...
RUNTIMEDIR=E:/Modelica//include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f TrainCrossing_Collection.fmutmp/sources/TrainCrossing_Collection_init.xml
	cp -a "E:/Modelica//share/omc/runtime/c/fmi/buildproject/"* TrainCrossing_Collection.fmutmp/sources
	cp -a TrainCrossing_Collection_FMU.libs TrainCrossing_Collection.fmutmp/sources/

