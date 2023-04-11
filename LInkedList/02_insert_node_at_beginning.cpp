/*
    Insert a node to a linked list at beginning
*/

#include "stdio.h"
#include "iostream"
// Define node type
struct Node
{
    int num;
    Node *next;
};
// Use a reference to update the head node directly
void Insert(int num, Node **head)
{
    // create a node
    Node *temp = new Node();
    temp->num = num;
    temp->next = *head;
    *head = temp;
};
void PrintLinkedList(Node *head)
{
    printf("Linked list items: ");
    while (head != NULL)
    {
        printf(" %d ", head->num);
        head = head->next;
    }
    printf("\n");
};
int main()
{
    // Linked list is empty
    // A local head node
    Node *head = NULL;
    // Ask user to define the capacity of the linked list
    int capacity, num;
    printf("How many items of the linked list? \n");
    scanf("%d", &capacity);
    for (int i = 0; i < capacity; i++)
    {
        printf("Input the num of node: \n");
        scanf("%d", &num);
        // Insert the new node to current linked list
        Insert(num, &head);
        // Print entire items of linked list
        PrintLinkedList(head);
    }
}