CC=g++
CFLAGS=-Wall

STDIN=/dev/stdin

OBJS=main.o messages.o battleshipgame.o board.o ship.o
BIN=./battleship.out

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $^

run: $(BIN)
	$^ < $(STDIN) |more
clean:
	rm a.out *.o $(BIN)
