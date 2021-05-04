CC = g++
OP ?= 
FSANITIZE = address
CFLAGS = $(OP) -Wall -Werror -std=c++17 -o
DFLAGS = $(DEBUG) #-fsanitize=$(FSANITIZE) 
DEBUG = #-D__DEBUG__

make:
	@make data;
	@make totest;
	@make std;
data:
	@$(CC) $(CFLAGS)   data.out   data.cpp $(DFLAGS)
totest:
	@$(CC) $(CFLAGS) totest.out totest.cpp $(DFLAGS) 	
std:
	@$(CC) $(CFLAGS)    std.out    std.cpp $(DFLAGS)
dp:
	@$(CC) $(CFLAGS)	dp			dp.cpp $(DFLAGS)
run:
	@if [ ! -e data.out ]; then 	\
		make data;					\
	fi
	@if [ ! -e totest.out ]; then	\
		make totest;				\
	fi
	@if [ ! -e std.out ]; then		\
		make std;					\
	fi
	./dp
test:
	make;
	./dp;
clean:
	@rm -f *.out *.txt *.in *.d
