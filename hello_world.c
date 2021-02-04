#include "stdlib.h"
#include "stdio.h"

typedef struct list {
    // A doubly-linked list in under 3 minutes :D
    struct list* prev;
    struct list* next;
    int value;
} list;

// Insert as first element, return pointer to head.
list* insert(list* head, int value) {
    list* new_head = (list*)malloc(sizeof(list));
    new_head->value = value;
    new_head->prev = NULL;

    if (head) {
        new_head->next = head;
        head->prev = new_head;
    } else {
        new_head->next = NULL;
    }

    return new_head;
}

list* find(list* l, int value) {
    while (l) {
        if (l->value == value) {
            return l;
        } else {
            l = l->next;
        }
    }

    return NULL;
}

// Need the double pointer?
list* delete(list* head, int elem) {
    if (!head) return NULL;

    list* ptr = find(head, elem);
    if (ptr) {
        if (ptr == head) {
            // removing head
            list* new_head = head->next;
            free(head);
            return new_head;
        } else {
            list* prev = ptr->prev;
            prev->next = ptr->next;
            free(ptr);
            return head;
        }
    }

    // element not found
    return head;
}

void print_list(list* l) {
    while (l) {
        printf("%i ", l->value);
        l = l->next;
    }
    printf("\n");
}

int main() {
    list* l = insert(NULL, 5);
    l = insert(l, 6);

    print_list(l);

    list* five = find(l, 5);
    if (five) printf("%i found!\n", five->value);

    for (int i = 0; i < 10; i++) {
        l = insert(l, i);
    }

    l = delete(l, 4);
    print_list(l);

    l = delete(l, 0);
    print_list(l);

    l = delete(l, 9);
    print_list(l);

    return 0;
}
