BIN=battleship.out

all: build
build: *.cpp
	g++ *.cpp -o $(BIN)
run: $(BIN)
	$(BIN)
clean: $(BIN)
	rm $(BIN)
