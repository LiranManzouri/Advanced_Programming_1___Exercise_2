# Advanced Programming 1 - Exercise 2

In order to run the project, you will need to save a "classified.csv" file (in that name), like we've seen in exercise 1
in the directory you are in at the time you run the project. Next, you'll need to open 2 terminals, in each you'll need
to move into the directory where the code files + the classified.csv file are. One terminal for the server, which the
compile command and the run command are:
Compile command - "g++ -std=c++11 Server/*.cpp Server/*.h *.cpp *.h -o bin/Server.out". Run command - "./bin/Server.out"
. The second terminal is for the client, which the compile command and the run command are:
Compile command - "g++ -std=c++11 Client/*.cpp Client/*.h *.cpp *.h -o bin/Client.out". Run command - "./bin/Client.out"
.

# Shortcut for compilation and running commands
SHORTCUT: you can write "bash run.sh" in the command line, and 2 terminals will automatically open.

# Notes and actions while running

After running, you'll be asked in the terminals for the unclassified path and the output path, write them seperated with
space. For example: "Unclassified.csv output.csv" (without the ""). You can close the client socket and stop the
communication anytime, by writing "close" (without the "") instead of the paths. For closing the server socket, you'll
have to close the client socket first, and then press "2" in the little menu you will see, for waiting and accept
another client, press "1" in that menu, and then compile and run the Client again (same as mentioned up).

# Implantation

In this project, there are server and client. The client sends a path to unclassified flowers to the server, which
classify them by the knn algorithm we've implemented in exercise 1, with k = 7. After classifying, the server sends the
classifiers to the client, which writes them to an output file he has got.