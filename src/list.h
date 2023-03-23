#include <stdio.h>
#include <stdlib.h>

#include "door_struct.h"

struct node;
struct node* init(struct door* door);
struct node* add_door(struct node* elem, struct door* door);
void door_list_output(struct node* elem);
void destroy(struct node* root);
