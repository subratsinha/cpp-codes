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

//searching in linkedlist

void search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"Element Found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Element Not Found!!"<<endl;
}

//deleiton of a particular node

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    
    
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    
    node* todelete=temp->next;
    temp->next=temp->next->next;
    
    
    delete todelete;
    
    
    
    
}

void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    
    delete todelete;
}


//insert at Elementat a given position

void insertatpos(node* &head,int pos,int data)
{
    node* n=new node(data);
    
    node* temp=head;
    
    int i=0;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
    n->next=temp->next;
    temp->next=n;
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
    
    //search(head,60);
    
    deletion(head,30);
    display(head);
    
    deleteathead(head);
    display(head);
    
    
    insertatpos(head,1,25);
    display(head);
    
    
    return 0;
}















