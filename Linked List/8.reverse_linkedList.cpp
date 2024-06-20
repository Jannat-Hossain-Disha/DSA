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
    node temp = createNode();
    temp->data = x;
    ptr->next = temp;
    return temp;
}
node reverse(node head)
{
    node temp = NULL;
    node temp2 = NULL;
    while (head != NULL)
    {
        temp2 = head->next;
        head->next = temp;
        temp = head;
        head = temp2;
    }
    head = temp;
    return head;
}
int main()
{
    node head = createNode();
    head->data = 1;
    node ptr = head;
    ptr = add_end(ptr, 2);
    ptr = add_end(ptr, 3);
    ptr = add_end(ptr, 4);
    ptr = add_end(ptr, 5);

    cout << "Before reverse : ";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "After reverse : ";
    head = reverse(head);
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
