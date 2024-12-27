#include<bits/stdc++.h>
using namespace std;
class Node
{
    // this step is Node radi kora 
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
// this function use kora karone hocca    insert kora 
void insert_at_head(Node* &head,int val)
{
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
// this function use holo print kora ...
void print_linked_list(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
         cout<<temp->val<<endl;
         temp=temp->next;
    }

}
int main()
{
    Node* head=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);

    head->next=b;
    b->next=c;
    insert_at_head(head,100);
    print_linked_list(head);


}