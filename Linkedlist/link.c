#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void insert_before(Node** head, int value, int before_value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;

    if (*head == NULL) {
        *head = new_node;
        new_node->next = NULL;
        return;
    }

    if ((*head)->data == before_value) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node* current = *head;
    while (current->next != NULL && current->next->data != before_value) {
        current = current->next;
    }

    if (current->next == NULL) {
        printf("Element not found in linked list\n");
        return;
    }

    new_node->next = current->next;
    current->next = new_node;
}

void print_list(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    insert_before(&head, 2, 4);
    print_list(head); // Output: Element not found in linked list

    insert_before(&head, 2, 1);
    print_list(head); // Output: 2

    insert_before(&head, 1, 2);
    print_list(head); // Output: 1 2

    insert_before(&head, 3, 2);
    print_list(head); // Output: 1 3 2

    insert_before(&head, 4, 2);
    print_list(head); // Output: 1 3 4 2

    return 0;
}