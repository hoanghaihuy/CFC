CCC = CC
CCFLAGS = -std=c++11
TARGETS = CFC.o errors.o libgenVal.a mint.o melt.o codeword.o codebook.o
all: $(TARGETS)
	$(CCC) $(CCFLAGS) $(TARGETS) -o CFC
CFC.o: CFC.cpp const.h generateValue.h codeword.h codebook.h mint.h melt.h
	$(CCC) $(CCFLAGS) -c CFC.cpp
errors.o: errors.cpp errors.h const.h
	$(CCC) $(CCFLAGS) -c errors.cpp
mint.o: mint.cpp mint.h
	$(CCC) $(CCFLAGS) -c mint.cpp
melt.o: melt.cpp melt.h
	$(CCC) $(CCFLAGS) -c melt.cpp
codeword.o: codeword.cpp codeword.h mint.h melt.h
	$(CCC) $(CCFLAGS) -c codeword.cpp
codebook.o: codebook.cpp codebook.h
	$(CCC) $(CCFLAGS) -c codebook.cpp
clean:
	rm -rf *o CFC
