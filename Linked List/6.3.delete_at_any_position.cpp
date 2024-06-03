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
void del_any(struct node **head, int pos)
{
    struct node *previous = *head;
    struct node *current = *head;
    if (*head == NULL)
        cout << "List is empty\n";
    else if (pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
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

    cout << "After Deleting node at the given position: ";
    del_any(&head, 2);
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}