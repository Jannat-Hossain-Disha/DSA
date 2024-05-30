#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_begin(struct node *head, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->link = head;
    head = ptr;

    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 112;
    current->link = NULL;
    head->link->link = current;

    int x = 999;
    head = add_begin(head, x);

    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}