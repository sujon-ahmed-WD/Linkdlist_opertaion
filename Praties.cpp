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
   Node* newnode=new Node(val);
   if(head==NULL)
   {
    head=newnode ;
    return ;
   }

   Node*temp=head;
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
   temp->next=newnode;

            
}
void print_all_linkd(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
Node *head = new Node(10); // প্রথম নোড তৈরি এবং head পয়েন্টার সেট
Node *a = new Node(20);    // দ্বিতীয় নোড তৈরি
head->next = a;            // head এবং a কে লিঙ্ক করা            


    head->next = a;
    insert_at_tail(head, 30);
    print_all_linkd(head);

    return 0;

    /*
6.5 & 7 - 28.12.24
7.5 & 8 - 29.12.24
9 & 10( 1st 50% )- 30.12.24
10.5 & 11- 31.12.24
11 & 11.5 - 01.12.24
    */
}