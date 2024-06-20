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
struct node *merge_list(struct node *head, struct node *head1)
{
    struct node *ptr = head;
    struct node *ptr1 = head1;
    vector<int> v;
    while (ptr != NULL)
    {
        v.push_back(ptr->data);
        ptr = ptr->link;
    }
    while (ptr1 != NULL)
    {
        v.push_back(ptr1->data);
        ptr1 = ptr1->link;
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    sort(v.begin(), v.end());

    struct node *result = (struct node *)malloc(sizeof(struct node));
    result->data = -1;
    result->link = NULL;
    struct node *tmp = result;
    for (int i = 0; i < v.size(); i++)
    {
        struct node *tmp1 = (struct node *)malloc(sizeof(struct node));
        tmp1->data = v[i];
        tmp1->link = NULL;

        result->link = tmp1;
        result = result->link;
    }

    tmp = tmp->link;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->link;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr, 2);
    ptr = add_end(ptr, 4);

    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 1;
    head1->link = NULL;

    struct node *ptr1 = head1;
    ptr1 = add_end(ptr1, 3);
    ptr1 = add_end(ptr1, 4);

    merge_list(head, head1);
}