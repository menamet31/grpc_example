# grpc_example
C++ GRPC server/client example (with python integration tests) of  sending integer, string and file (which can be really big so we need to send it as a chunks).

# quick start (Ubuntu 16.04)
1) install/configure grpc environment - https://grpc.io/
2) open the terminal 
3) change directory to current rep root
4) make all # build the library/grpc files
5a) python3 test.py # perform tests
5b) it is possible to run tests by hands - take a look at client_app / server_app binaries (created during "make all" stage)
