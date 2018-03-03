all: PointTest

point.o:
		g++ -c point.cc

PointTest: point.o
	g++ -o PointTest main.cpp

clean:
	rm -f PointTest point.o
