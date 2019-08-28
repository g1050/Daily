.SUFFIXES:.cpp .o

GG=g++
SRCS=vector.cpp\
		header.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=vector
start:$(OBJS)
	@#echo $(OBJS)
	@$(GG) -o $(EXEC) $(SRCS) -g
	@echo "------------------OK!"
.cpp.o: 
	@$(GG) -Wall -o $@ -c $<

clean:
	@rm -rf $(EXEC) $(OBJS)
