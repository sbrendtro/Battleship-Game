CC=g++
CFLAGS=-Wall

all: battleship.out

battleship.out: main.o battleshipgame.o board.o ship.o
	$(CC) $(CFLAGS) -o $(BIN) $@ $^
%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $^

clean:
	rm a.out *.o $(BIN)
