#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void count_node(struct node *head)
{
    int c = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->link;
    }
    cout << c << endl;
}
void print_list(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
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

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 15;
    current->link = NULL;

    head->link->link->link = current;

    count_node(head);
    print_list(head);
}