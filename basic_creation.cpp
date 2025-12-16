#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
     
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int main()
{
    Node* head=new Node(10);
    Node* first=new Node(20);
    head->next=first;
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}