.SUFFIXES:.c .o

CC=gcc
SRCS=hello.c\
	 	head.c
OBJS=$(SRCS:.c=.o)
EXEC=hello

start:$(OBJS)
	@#echo "second"
	@$(CC) -o $(EXEC) $(SRCS) -g
	@echo "------------ok"
.c.o:
	@#echo "first"
	@$(CC) -o $@ -c $<
clean:
	@rm -rf $(EXEC) $(OBJS)
