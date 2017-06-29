# build an executable from tesuto.c
all: tesuto.c
	gcc -Wall -o besuto tesuto.c -lncurses
clean:
