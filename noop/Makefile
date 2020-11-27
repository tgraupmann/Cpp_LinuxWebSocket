clang:
	clang++ lib.cpp -o libnoop.o -fPIC -c -std=c++11
	clang++ lib.cpp main.cpp -o nooptest2 -std=c++11
	ar rs libnoop.a libnoop.o
	clang++ libnoop.o -o ./libnoop.so -shared -std=c++11
	clang++ main.cpp ./libnoop.so -o nooptest -std=c++11
all:
	g++ lib.cpp -o libnoop.o -fPIC -c -std=c++11
	g++ lib.cpp main.cpp -o nooptest2 -std=c++11
	ar rs libnoop.a libnoop.o
	g++ libnoop.o -o ./libnoop.so -shared -std=c++11
	g++ main.cpp ./libnoop.so -o nooptest -std=c++11
clean:
	rm libnoop.o
	rm libnoop.so
	rm libnoop.a
	rm nooptest
	rm nooptest2
