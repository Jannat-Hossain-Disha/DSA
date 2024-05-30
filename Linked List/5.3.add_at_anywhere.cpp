#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *ptr, int x)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->link = NULL;

    ptr->link = tmp;
    return tmp;
}
void add_any(struct node *head, int x, int pos)
{
    struct node *ptr = head;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->link = NULL;

    int c = 1;
    while (c != (pos - 1))
    {
        ptr = ptr->link;
        c++;
    }
    tmp->link = ptr->link;
    ptr->link = tmp;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr, 32);
    ptr = add_end(ptr, 76);

    int pos = 3;
    add_any(head, 65, pos);

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}