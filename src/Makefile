CC=gcc
CFLAGS=-c Wall -Werror -Wextra
LDFLAGS=-Wall -Werror -Wextra

door_struct: dmanager_module.c
	$(CC) $(LDFLAGS) dmanager_module.c -o ../build/Quest_1

clean: rm -rf *.o

rebuild: clean door_struct
