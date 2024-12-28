#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) // temp next jotokoon nh null hocca
    {
        temp=temp->next; // temp is last node obstan korca ...;
    }
    temp->next=newnode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL) // temp node jotokon nh null hoy....
    {
        cout<<temp->val;
        temp=temp->next;
    }
}
int main()
{
    Node *head = NULL;
    // Node *a = new Node(20);

    // head->next = a;
    insert_at_tail(head, 30);
    print_linked_list(head);

    return 0;
}