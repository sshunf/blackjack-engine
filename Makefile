a.out: main.o deck.o gamelogic.o player.o utils.o
	g++ main.o deck.o gamelogic.o player.o utils.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

deck.o: deck.cpp deck.h
	g++ -c deck.cpp

gamelogic.o: gamelogic.cpp gamelogic.h
	g++ -c gamelogic.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

utils.o: utils.cpp utils.h
	g++ -c utils.cpp

clean:
	rm -f *.o a.out