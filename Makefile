all: main.cpp
	g++ -Wall -Werror -o main main.c
clean:
	$(RM) main