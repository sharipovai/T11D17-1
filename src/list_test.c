#include "list.h"

int main() {
    struct door doors[DOORS_COUNT];
    initialize_doors(doors);
    struct node* door_list = init(doors);
    struct node* tmp = door_list;
    for (int i = 1; i < DOORS_COUNT; i++) {
        tmp = add_door(tmp, &doors[i]);
    }
    door_list_output(door_list);
    destroy(door_list);
}

void initialize_doors(struct door* doors) {
    srand(time(0));
    int seed = rand() % MAX_ID_SEED;
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = rand() % 2;
    }
}
