clang:
	clang lib.c -o libnoopc.o -fPIC -c -std=c11
	clang lib.c main.c -o noopctest2 -std=c11
	ar rs libnoopc.a libnoopc.o
	clang libnoopc.o -o ./libnoopc.so -shared -std=c11
	clang main.c ./libnoopc.so -o noopctest -std=c11
all:
	gcc lib.c -o libnoopc.o -fPIC -c -std=c11
	gcc lib.c main.c -o noopctest2 -std=c11
	ar rs libnoopc.a libnoopc.o
	gcc libnoopc.o -o ./libnoopc.so -shared -std=c11
	gcc main.c ./libnoopc.so -o noopctest -std=c11
clean:
	rm libnoopc.o
	rm libnoopc.so
	rm libnoopc.a
	rm noopctest
	rm noopctest2
