CC = gcc	# compiler gcc
FLAGS = -g 	# debug flag, can be used when needed debugging through gdb
SRC = $(wildcard *.c)
HDR = $(wildcard *.h)
TARGET = app

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CC) $(SRC) -o $(TARGET)

run: 
	./$(TARGET)

clean:
	rm -f  $(TARGET)
phonyTarget: clean
