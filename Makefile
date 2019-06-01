CC = g++
FLAGS = -Wall -Wextra -pedantic -O3
LINKS = -lncurses

default: build

frame.o: frame.cc
	$(CC) $(FLAGS) -c frame.cc $(LINKS)
	
render.o: render.cc
	$(CC) $(FLAGS) -c render.cc $(LINKS)
	
anim.o: anim.cc
	$(CC) $(FLAGS) -c anim.cc $(LINKS)
	
OBJS = frame.o render.o anim.o

build: $(OBJS)
	$(CC) $(FLAGS) -o ta8 $(OBJS) $(LINKS)
	
clean:
	rm *.o ta8