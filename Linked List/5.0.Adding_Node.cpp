#include <bits/stdc++.h>
using namespace std;
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
// define node as pointer of data type struct linkedList
typedef struct linkedlist *node;

// Creating Node
node createNode()
{
    node head = (node)malloc(sizeof(struct linkedlist));
    head->next = NULL;
    return head;
}
node add_end(node ptr, int x)
{
    node tmp = createNode();
    tmp->data = x;
    ptr->next = tmp;
    return tmp;
}
node add_begin(node *head, int x)
{
    node tmp = createNode();
    tmp->data = x;
    tmp->next = *head;
    *head = tmp;
    return *head;
}
node add_pos(node head, int x, int pos)
{
    node tmp = createNode();
    tmp->data = x;
    node ptr = head;
    int c = 1;
    while (c != (pos - 1))
    {
        ptr = ptr->next;
    }
    tmp->next = ptr->next;
    ptr->next = tmp;
}
int main()
{
    node head = createNode();
    head->data = 23;

    // Adding node at the end of a linked list
    node ptr = head;
    ptr = add_end(ptr, 32);
    ptr = add_end(ptr, 45);
    ptr = add_end(ptr, 99);

    // Adding node at the beginning of a linked list
    ptr = head;
    add_begin(&head, 33);

    // Adding node at a given position of a linked list
    int pos = 2;
    add_pos(head, 100, pos);

    // Print list
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}