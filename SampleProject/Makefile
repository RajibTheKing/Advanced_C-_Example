CC=g++
CFlag=-std=c++11
OUT_EXE = SampleProject
LIB = -lpthread

DIRS = ./Tools/

FILES=	StartingPoint.cpp\
		CalculationEngine.cpp \
		./Tools/Utility.cpp

build:
	$(CC) $(CFlag) -I $(DIRS) $(LIB) $(FILES) -o $(OUT_EXE) -g $^

all:
	build

clean:
	rm -f *.o
	rm -f $(OUT_EXE)
	
