#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head, int val)
{
    node* n=new node(val);
    
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

void insertathead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
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


// Find the length of linked list 

int linkedlength(node* head)
{
    int len=0;
    node* temp=head;
    
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    
    return len;
}


//Append K last node in the linkedlist

node* Kappend(node* &head, int k)
{
    int l=linkedlength(head);
    
    node* newhead;
    node* newtail;
    node* tail=head;
    k=k%l;
    
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;
        }
        
        if(count==l-k+1)
        {
            newhead=tail;
        }
        
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    
    return newhead;
    
}




int main()
{
    node* head=NULL;
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    insertattail(head,50);
    insertattail(head,60);
    insertattail(head,70);
    insertattail(head,80);
    

    display(head);
    
    node* NewHead=Kappend(head,4);
    
    display(NewHead);


    
    return 0;
}
