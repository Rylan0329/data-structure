/*
    Implement a basic linked list using c++
*/
#include "stdio.h"
#include "stdlib.h"
// Define a linked list type is int based on struct
struct Node
{
    int num;
    Node *next;
};
int main()
{
    // TODO: Create a linked list includes three nodes (4,5,6)
    // Define a Head node store the address of head node
    Node *head;
    head = NULL;
    // Create a temp node (num: 4)
    Node *temp = new Node();
    temp->num = 4;
    temp->next = NULL;
    head = temp;
    // create a new temp node (num: 5)
    temp = new Node();
    temp->num = 5;
    temp->next = NULL;
    // create the node to operate the linked list to add new node
    Node *temp1 = head;
    // shift the temp1 to the end of linked list beginning from head node
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    // temp1 is the last node of current linked list hence add the Node(5)
    temp1->next = temp;
    // create the Node(6)
    temp = new Node();
    temp->num = 6;
    temp->next = NULL;
    temp1 = head;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    // test current linked list elements
    Node *test = head;
    printf("The current linked list content is :");
    while (test->next != NULL)
    {
        printf("%d ", test->num);
        test = test->next;
    }
    printf("%d ", test->num);
    return 0;
}