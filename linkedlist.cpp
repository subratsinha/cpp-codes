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



//reverse linkedlist using iterator method

node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    
    return prevptr;
}

//reverse linkedlist using recursion

node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newhead=reverseRecursive(head->next);
    
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}


//reverse K nodes of a linkedlist

node* reversek(node* &head, int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    
    if (nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);
    }
    
    return prevptr;
}


//making cycle in linkedlist

void makecycle(node* & head, int pos)
{
    node* temp=head;
    node* startnode;
    
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}


bool detectcycle(node* &head)
{
    node* fast=head;
    node* slow=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow)
        {
            cout<<"cycle detected";
            return true;
        }
    }
    
    cout<<"no cycle detected";
    
    return false;
}


void removecycle(node* &head)
{
    node* fast=head;
    node* slow=head;
    
    do{
        fast=fast->next->next;
        slow=slow->next;
    }
    while(fast!=slow);
    
    
    fast=head;
    while(slow->next!=fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
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
    
    
    makecycle(head,3);
    cout<<detectcycle(head);
    removecycle(head);
    cout<<detectcycle(head);
    
    display(head);
    
    // node* newhead=reversek(head,2);
    // display(newhead);
    
    // insertathead(head,50);
    // display(head);
    
    // //search(head,60);
    
    // deletion(head,30);
    // display(head);
    
    // deleteathead(head);
    // display(head);
    
    
    // insertatpos(head,1,25);
    // display(head);
    
    
    return 0;
}














