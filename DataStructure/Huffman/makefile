.SUFFIX:.cpp .o

CC=g++
SRCS=main.cpp\
	 	Huffman.cpp\
			File.cpp

OBJS=$(SRCS:.cpp=.o)
EXEC=zip

start:$(OBJS)
	@$(CC) -o $(EXEC) $(SRCS)
	@echo "----------OK"
.cpp.o:
	@$(CC) -o $@ -c $<
clean:
	@rm -rf $(OBJS) $(EXEC)
