CC=g++
CFLAGS=-Wall

OBJS=main.o messages.o battleshipgame.o board.o ship.o
BIN=./battleship.out

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $^

run: $(BIN)
	$^
clean:
	rm a.out *.o $(BIN)