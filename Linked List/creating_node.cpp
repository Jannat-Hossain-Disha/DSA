#include <bits/stdc++.h>
using namespace std;
// Self Refential Structure
//  Self Referential Structure is a Structure which contains a pointer to a structure of the same type.
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    cout << head->data << endl;
}