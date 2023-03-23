CC=gcc
CFLAGS=-c Wall -Werror -Wextra
LDFLAGS=-Wall -Werror -Wextra

door_struct: dmanager_module.c
	$(CC) $(LDFLAGS) dmanager_module.c -o ../build/Quest_1

list_test: list.c list_test.c
	$(CC) $(LDFLAGS) list.c list_test.c -o ../build/Quest_2
clean: rm -rf *.o

rebuild: clean door_struct
