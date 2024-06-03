#include <bits/stdc++.h>
using namespace std;
struct linkedList
{
    int data;
    struct linkedList *next;
};
typedef struct linkedList *node;
node createNode()
{
    node head = (node)malloc(sizeof(struct linkedList));
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
node delete_first_node(node head)
{
    if (head == NULL)
        cout << "The list is already empty\n";
    else
    {
        node tmp = head;
        head = head->next;
        free(tmp);
        tmp = NULL;
    }
    return head;
}
int main()
{
    node head = createNode();
    head->data = 20;

    node ptr = head;
    ptr = add_end(ptr, 30);
    ptr = add_end(ptr, 40);
    ptr = add_end(ptr, 50);

    cout << "Before Deleting : ";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    head = delete_first_node(head);
    head = delete_first_node(head);

    cout << "After Deleting first node: ";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}