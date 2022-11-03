#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
    
};

void insertathead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if (head!=NULL)
    {
        head->prev=NULL;    
    }
    head=n;
    
}

void insertattail(node* &head, int val)
{
    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }
    
    node* n=new node(val);
    node* temp=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    
    delete todelete;
}

void deletion(node* &head, int pos)
{
    
    if (pos==1)
    {
        deleteathead(head);
        return;
    }
    
    node* temp=head;
    int count=1;
    
    while(temp!=NULL && count<pos)
    {
        temp=temp->next;
        count++;
    }
    
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    
    delete temp;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    display(head);
    
    insertathead(head,50);
    display(head);
    
    
    deletion(head,5);
    display(head);
    
    deletion(head,1);
    display(head);
    
    
    return 0;
    
}
