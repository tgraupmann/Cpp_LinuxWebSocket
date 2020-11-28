clang:
	clang lib.c -o libdowsc.o -fPIC -c -std=c11 -lwsclient
	clang lib.c main.c -o dowsctest2 /home/tgraupmann/Public/libwsclient/.libs/base64.o /home/tgraupmann/Public/libwsclient/.libs/sha1.o /home/tgraupmann/Public/libwsclient/.libs/wsclient.o -lpthread -lssl -lcrypto -std=c11
	ar rs libdowsc.a libdowsc.o
	clang libdowsc.o -o ./libdowsc.so -shared -std=c11
	clang main.c ./libdowsc.so -o dowsctest /home/tgraupmann/Public/libwsclient/.libs/base64.o /home/tgraupmann/Public/libwsclient/.libs/sha1.o /home/tgraupmann/Public/libwsclient/.libs/wsclient.o -lpthread -lssl -lcrypto -std=c11
all:
	gcc lib.c -o libdowsc.o -fPIC -c -std=c11 -lwsclient
	gcc lib.c main.c -o dowsctest2 /home/tgraupmann/Public/libwsclient/.libs/base64.o /home/tgraupmann/Public/libwsclient/.libs/sha1.o /home/tgraupmann/Public/libwsclient/.libs/wsclient.o -lpthread -lssl -lcrypto -std=c11
	ar rs libdowsc.a libdowsc.o
	gcc libdowsc.o -o ./libdowsc.so -shared -std=c11
	gcc main.c ./libdowsc.so -o dowsctest /home/tgraupmann/Public/libwsclient/.libs/base64.o /home/tgraupmann/Public/libwsclient/.libs/sha1.o /home/tgraupmann/Public/libwsclient/.libs/wsclient.o -lpthread -lssl -lcrypto -std=c11
clean:
	rm libdowsc.o
	rm libdowsc.so
	rm libdowsc.a
	rm dowsctest
	rm dowsctest2
