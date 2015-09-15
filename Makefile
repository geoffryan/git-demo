default: bin/app

bin/app: src/main.c src/func.c src/func.h
	gcc -o bin/app src/*.c

clean:
	rm -f bin/app
