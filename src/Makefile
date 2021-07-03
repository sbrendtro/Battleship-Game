CC=g++
CFLAGS=-Wall

OBJS=main.o messages.o battleshipgame.o board.o ship.o

all: battleship.out

battleship.out: $(OBJS)
	$(CC) $(CFLAGS) -o $(BIN) $@ $^
%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $^

clean:
	rm a.out *.o $(BIN)
