#include "list.h"
struct node {
    struct door* value;
    struct node* next;
};

struct node* init(struct door* door) {
    struct node* f_node = calloc(1, sizeof(struct node));
    f_node->value = door;
    f_node->next = NULL;
    return f_node;
}

struct node* add_door(struct node* elem, struct door* door) {
    struct node* new_node = calloc(1, sizeof(struct node));
    new_node->value = door;
    new_node->next = elem->next;
    elem->next = new_node;
    return new_node;
}

void door_list_output(struct node* elem) {
    while (elem->next != NULL) {
        printf("%d, %d\n", elem->value->id, elem->value->status);
        elem = elem->next;
    }
}

void destroy(struct node* root) {
    struct node* p = root;
    while (p != NULL) {
        free(p);
        p = p->next;
    }
    p = NULL;
}
