CC = g++
CFLAGS = -g
OBJS = dictionary.o main.o
EXEC = tweet

$(EXEC): $(OBJS)
	$(CC) $^ -o $@

clean:
	rm $(EXEC) $(OBJS)
