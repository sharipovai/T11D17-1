#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
