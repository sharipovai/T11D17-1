#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "door_struct.h"

#define DOORS_COUNT 15
#define MAX_ID_SEED 10000

struct door {
    int id;
    int status;
};

void initialize_doors(struct door* doors);
void sort(struct door* door);
void output(struct door* door);
void zero_status(struct door* doors);

int main() {
    struct door doors[DOORS_COUNT];

    initialize_doors(doors);
    sort(doors);
    zero_status(doors);
    output(doors);
    return 0;
}

// Doors initialization function
// ATTENTION!!!
// DO NOT CHANGE!
void initialize_doors(struct door* doors) {
    srand(time(0));

    int seed = rand() % MAX_ID_SEED;
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = rand() % 2;
    }
}

void sort(struct door* doors) {
    double tmp;
    for (int j = 0; j < DOORS_COUNT; j++) {
        for (int i = 0; i < DOORS_COUNT - 1 - j; i++) {
            if (doors[i + 1].id < doors[i].id) {
                tmp = doors[i].id;
                doors[i].id = doors[i + 1].id;
                doors[i + 1].id = tmp;
            }
        }
    }
}

void output(struct door* doors) {
    for (int i = 0; i < DOORS_COUNT; i++) {
        printf("%d, %d\n", doors[i].id, doors[i].status);
    }
}

void zero_status(struct door* doors) {
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].status = 0;
    }
}
