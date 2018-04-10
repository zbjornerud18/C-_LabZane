CXX = g++
CXXFLAGS = -Wall -g

main: main.o planet.o earth.o saturn.o
	$(CXX) $(CXXFLAGS) -o main main.o earth.o saturn.o planet.o

main.o: main.cpp planet.hpp earth.hpp saturn.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

planet.o: planet.hpp

earth.o: earth.hpp planet.hpp

saturn.o: saturn.hpp planet.hpp


