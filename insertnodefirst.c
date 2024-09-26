// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;            // Data part of the node
    struct Node* next;   // Pointer to the next node
};
void insertAtBeginning(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;

    new_node->next = *head;
    
    *head = new_node;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; 
    int num, n;

    printf("Enter the number of nodes you want to insert: ");
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &num);
        insertAtBeginning(&head, num); 
    }
    printf("Linked list: ");
    printList(head); 

    return 0;
}