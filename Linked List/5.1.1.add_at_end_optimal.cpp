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
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr, 30);
    ptr = add_end(ptr, 99);
    ptr = add_end(ptr, 32);

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}