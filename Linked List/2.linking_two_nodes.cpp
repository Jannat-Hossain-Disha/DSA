#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 54;
    current->link = NULL;

    head->link = current;

    cout << head->data << " " << current->data << endl;
}