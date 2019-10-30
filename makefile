CCC = CC
CCFLAGS = -std=c++11
TARGETS = CFC.o errors.o libgenVal.a
all: $(TARGETS)
	$(CCC) $(CCFLAGS) $(TARGETS) -o CFC
CFC.o: CFC.cpp const.h generateValue.h
	$(CCC) $(CCFLAGS) -c CFC.cpp
errors.o: errors.cpp errors.h const.h
	$(CCC) $(CCFLAGS) -c errors.cpp
mint.o: mint.cpp mint.h
	$(CCC) $(CCFLAGS) -c mint.cpp
melt.o: melt.cpp melt.h
	$(CCC) $(CCFLAGS) -c melt.cpp
clean:
	rm -rf *o CFC
