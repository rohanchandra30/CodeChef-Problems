playingwithstrings: playingwithstrings.o makeinitials.o
	g++ playingwithstrings.o makeinitials.o -o binary

playingwithstrings.o: playingwithstrings.cpp initials.h
	g++ -c playingwithstrings.cpp

makeinitials.o: makeinitials.cpp initials.h
	g++ -c makeinitials.cpp

clean:
	rm *.o 