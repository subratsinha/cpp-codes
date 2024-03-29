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


//Making two linkedlist intersect each other at a specific position

void intersect(node* &head1, node* &head2, int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;
}


// to find intersection in the linked list...

int intersection(node* &head1, node* &head2)

{
    int l1=linkedlength(head1);
    int l2=linkedlength(head2);
    
    int d=0;
    node* ptr1;
    node* ptr2;
    
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }
    
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        
        {
            cout<<"Intersection found at node: ";
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}



int main()
{
    node* head1=NULL;
    insertattail(head1,10);
    insertattail(head1,20);
    insertattail(head1,30);
    insertattail(head1,40);
    insertattail(head1,50);
    insertattail(head1,60);
    insertattail(head1,70);
    insertattail(head1,80);
    
    node* head2=NULL;
    insertattail(head2,90);
    insertattail(head2,100);
    
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;  
    
    
    
    


    
    

    
    return 0;
}
