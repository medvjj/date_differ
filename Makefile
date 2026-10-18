CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
TARGET = date_differ_1july
SOURCE = main.c

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean
