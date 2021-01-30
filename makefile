main: main.cpp
	g++ main.cpp savefunctions.cpp -o gssg

savefunctions: savefunctions.cpp
	g++ savefunctions.cpp -o savefunctions
