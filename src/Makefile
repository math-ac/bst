CC = clang
SRC = main.c
CFLAGS = -g -Wall -Wformat -Werror -o
LIBS = bst.c
BIN = bst
DOT = bst.dot
PDF = tree.pdf

all: clean tree graph

tree:
	$(CC) $(CFLAGS) $(BIN) $(SRC) $(LIBS)

graph:
	./$(BIN)
	dot $(DOT) -Tpdf > $(PDF)

clean:
	rm -f $(PDF) $(BIN) $(DOT)
