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
    insert_at_head(head, 100);
    print_all_linkd(head);

    return 0;

  
}