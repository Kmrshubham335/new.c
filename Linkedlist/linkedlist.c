#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int newData) 
{
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));   
    // Assign the new data and set the next pointer to the current head node
    newNode->data = newData;
    newNode->next = *head;   
    // Update the head pointer to point to the new node
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Test the functions
int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;
    
    // Insert some nodes at the beginning of the list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    
    // Print the list to verify the nodes were inserted correctly
    printf("Linked list: ");
    printList(head);
    return 0;
}
