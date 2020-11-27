clang:
	clang++ main.cpp -o maintest -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
all:
	g++ main.cpp -o maintest -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c++11
clean:
	rm maintest
