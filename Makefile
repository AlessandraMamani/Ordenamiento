CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = piratas

OBJS = main.o sorting.o comparador.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c piratas.h sorting.h comparador.h
	$(CC) $(CFLAGS) -c main.c

sorting.o: sorting.c sorting.h
	$(CC) $(CFLAGS) -c sorting.c

comparador.o: comparador.c comparador.h piratas.h
	$(CC) $(CFLAGS) -c comparador.c

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
