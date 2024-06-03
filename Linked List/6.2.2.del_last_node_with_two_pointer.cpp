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
void del_last(struct node *head)
{
    if (head == NULL)
        cout << "List is enpty";
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;

        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_end(ptr, 98);
    ptr = add_end(ptr, 23);

    cout << "Before Deleting : ";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;

    cout << "After Deleting node at the last position: ";
    del_last(head);
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}