# Cpp_LinuxWebSocket

These are various C and C++ sample projects for testing WebSocket clients.

## Dependencies

$ sudo apt update && sudo apt -y upgrade

$ sudo apt-get install make

$ sudo apt-get install gcc

$ sudo apt-get install g++

$ sudo apt-get install libtool

$ sudo apt-get install libssl-dev

$ sudo apt-get install build-essential gdb

**libwsclient**

```
$ cd ~
$ mkdir Public
$ cd Public
$ git clone https://github.com/tgraupmann/libwsclient
$ cd libwsclient
$ ./autogen.sh
$ ./configure && make && sudo make install
```

**json-c**
```
$ cd ~
$ mkdir Public
$ cd Public
$ git clone https://github.com/json-c/json-c
$ mkdir json-c-build
$ cd json-c-build
$ cmake ../json-c
$ make
$ make test
$ sudo make install
```
