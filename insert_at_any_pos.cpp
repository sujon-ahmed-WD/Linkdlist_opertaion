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
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val); // ata new node value sat kora jonno
    newnode->next = head;          // new node and previus valu  link kora jonno
    head = newnode;                // new node ka value sat kora jonno
}
void setlist(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    while (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    //          temp at idx-1;

    newnode->next = temp->next; // new node next amier temp next hoyca .....
    temp->next = newnode;
}
int size(Node *head)
{
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        setlist(head, tail, val);
    }
    int idx;
    while (cin >> idx >> val)
    {
         int sz=size(head);
         if(idx>sz)
         {
            cout<<"Invalid\n";
         }
         else if(idx==sz)
         {
            setlist(head, tail, val);
             print(head);
         }
         else if(idx==0)
         {
            insert_at_head(head,val);
            print(head);
         }
         else
         {
            insert_at_any_pos(head,idx,val);
            print(head);
         }
    }

    return 0;
}