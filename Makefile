all:a.o Clock.o Clock.h main.o
	g++ a.o -o lab3
	g++ -o main main.o Clock.o 

mian.o:main.cpp Clock.h
	g++ -c main.cpp

Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp

a.o:
	g++ -c a.cpp

clear:
	rm main.o clock.o a.o