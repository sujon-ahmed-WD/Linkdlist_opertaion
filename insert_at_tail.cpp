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
void insert_at_tail(Node *&head,Node* &tail, int val)
{
    Node *newnode = new Node(val);
  

    if(head==NULL)
    {

        head=newnode;
        // temp==newnode;
        return; 
    }
     Node *temp = head;
    while (temp->next != NULL) // temp next jotokoon nh null hocca
    {
        temp=temp->next; // temp is last node obstan korca ...;
    }
    temp->next=newnode;
    tail=newnode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL) // temp node jotokon nh null hoy....
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head = NULL;
    // Node *tail = NULL;
    // Node *a = new Node(20);


    // head->next = a;
    insert_at_tail(head,tail, 30);
    insert_at_tail(head, tail,40);
    insert_at_tail(head,tail, 50);
    insert_at_tail(head,tail, 60);
    insert_at_tail(head,tail, 70);
    print_linked_list(head);
    // cout<<head->val<<endl<<tail->val;

    return 0;
}