all: a.out rand.png random_walks.txt

rand.png: python.py
	python python.py

random_walks.txt: a.out
	./a.out

a.out: hola.c
	gcc hola.c -lm

clean:
	rm rand.png random_walks.txt a.out
