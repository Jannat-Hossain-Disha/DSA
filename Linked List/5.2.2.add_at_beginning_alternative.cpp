#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *ptr, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}
struct node *add_begin(struct node **head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    temp->link = *head;
    *head = temp;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 54;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr, 32);
    ptr = add_end(ptr, 45);

    add_begin(&head, 99);

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}