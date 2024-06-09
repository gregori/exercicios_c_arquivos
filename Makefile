CC=gcc
CFLAGS=-Wall
BUILD_DIR=build

all: $(BUILD_DIR) exercicio1 exercicio2 exercicio3 exercicio4

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

exercicio1:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio1 exercicio1.c

exercicio2:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio2 exercicio2.c

exercicio3:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio3 exercicio3.c

exercicio4:
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/exercicio4 exercicio4.c

clean:
	rm -f $(BUILD_DIR)/*