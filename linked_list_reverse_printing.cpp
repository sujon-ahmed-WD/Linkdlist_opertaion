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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL) // temp node jotokon nh null hoy....
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void print_reverse(Node *temp)
{
    // base case
    if (temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout<<temp->val<<endl;

}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
     print_reverse(head);

    return 0;
}