CC=gcc
CFLAGS=-Wall
BUILD_DIR=build

all: $(BUILD_DIR) exercicio1 exercicio2

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

exercicio1:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio1 exercicio1.c

exercicio2:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio2 exercicio2.c

clean:
	rm -f $(BUILD_DIR)/*