clang:
	clang++ lib.cpp -o libdows.o -fPIC -c -std=c++11
	clang++ lib.cpp main.cpp -o dowstest2 -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
	ar rs libdows.a libdows.o
	clang++ libdows.o -o ./libdows.so -shared -std=c++11
	clang++ main.cpp ./libdows.so -o dowstest -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
all:
	g++ lib.cpp -o libdows.o -fPIC -c -std=c++11
	g++ lib.cpp main.cpp -o dowstest2 -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
	ar rs libdows.a libdows.o
	g++ libdows.o -o ./libdows.so -shared -std=c++11
	g++ main.cpp ./libdows.so -o dowstest -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
clean:
	rm libdows.o
	rm libdows.so
	rm libdows.a
	rm dowstest
	rm dowstest2
