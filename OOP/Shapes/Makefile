all: Main

Shapes.o:
	g++ -c Shapes.cc

Circle.o:
	g++ -c Circle.cc

Rectangle.o:
	g++ -c Rectangle.cc

Triangle.o:
	g++ -c Triangle.cc

Main: Shapes.o Circle.o Rectangle.o Triangle.o
	g++ -o Main Shapes.o Circle.o Rectangle.o Triangle.o Shapes.cpp

clean:
	rm -f Shapes.o Circle.o Rectangle.o Triangle.o Main
