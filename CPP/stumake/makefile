.SUFFIXES:.c .o

CC=gcc
SRCS=hello.c\
		header.c
OBJS=$(SRCS:.c=.o)
EXEC=hello

start:$(OBJS)
	@gcc -o $(EXEC) $(SRCS)
	@echo "----------OK"
.c.o:
	@gcc -o $@ -c $<
clean:
	@rm -rf $(OBJS) $(EXEC)
