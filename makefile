CC = g++
CFLAGS = -g
CXXFLAGS = -std=c++11 
OBJS = markov.o 
MAIN = main.o
TEST = test.o
EXEC = markov

$(EXEC): $(OBJS) $(MAIN)
	$(CC) $(C_FLAGS) -o $@ $^

test: $(TEST) $(OBJS)
	$(CC) $(C_FLAGS) -o $@ $^

clean:
	rm $(EXEC) $(OBJS) $(MAIN)
