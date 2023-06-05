#include "stdio.h"

// Define Node type
struct Node
{
    int data;
    Node *next;
};
// Global head node
Node *head;
void Insert(int data, int position)
{
    // Initialize the pending node
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    // Insert node at beginning
    if (position == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    // Create the temp node to loop current linked list to find the node before the particular position
    Node *temp2 = head;
    for (int i = 0; i < position - 2; i++)
    {
        temp2 = temp2->next;
    }
    // Update the next node of temp2
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void PrintLinkedList()
{
    printf("The Linked List elements:");
    Node *temp = head;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    // head node point at NULL
    head = NULL;
    Insert(5, 1); // 5
    Insert(7, 2); // 5, 7
    Insert(6, 3); // 5, 7, 6
    Insert(4, 2); // 5, 4, 7, 6
    Insert(8, 1); // 8, 5, 4, 7, 6
    PrintLinkedList();
}