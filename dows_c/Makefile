clang:
	clang lib.c -o libdowsc.o -fPIC -c -std=c11
	clang lib.c main.c -o dowsctest2 -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c11
	ar rs libdowsc.a libdowsc.o
	clang libdowsc.o -o ./libdowsc.so -shared -std=c11
	clang main.c ./libdowsc.so -o dowsctest -lboost_system -lcpprest -lpthread -lssl -lcrypto -lz -std=c11
all:
	gcc lib.c -o libdowsc.o -fPIC -c -std=c11 -I/home/tgraupmann/Public/libwebsockets/include
	gcc lib.c main.c -o dowsctest2 /home/tgraupmann/Public/libwebsockets/lib/libwebsockets.a -std=c11 -I/home/tgraupmann/Public/libwebsockets/include -lssl -lcrypto
	#ar rs libdowsc.a libdowsc.o
	#gcc libdowsc.o -o ./libdowsc.so -shared -std=c11 -I/home/tgraupmann/Public/libwebsockets/include
	#gcc main.c ./libdowsc.so /home/tgraupmann/Public/libwebsockets/lib/libwebsockets.a -o dowsctest -std=c11 -I/home/tgraupmann/Public/libwebsockets/include -lssl -lcrypto
clean:
	rm libdowsc.o
	rm libdowsc.so
	rm libdowsc.a
	rm dowsctest
	rm dowsctest2
