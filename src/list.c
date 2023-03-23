#include "list.h"
struct node {
    struct door* elem;
    struct node* next;
};

struct node* init(struct door* door) {
    struct node* f_node = calloc(1, sizeof(struct node));
    f_node.elem* = door;
    f_node.next* = NULL;
    return f_node;
}

struct node* add_door(struct node* elem, struct door* door) {
    struct node* new_node = calloc(1, sizeof(struct node));
    *new_node.elem = door;
    *new_node.next = elem.next;
    *elem.next = new_node.elem;
}
