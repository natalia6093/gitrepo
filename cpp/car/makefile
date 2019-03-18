CXX=g++
CXXFAGS=-Wall -I.
OBJS=samochod.o car.o

cal: samochod.o car.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o samochod.exe
	
.PHONY: clean

clean:
	rm -f *.o *.exe *~ core *~
