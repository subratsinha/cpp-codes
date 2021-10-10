

#include<iostream>
using namespace std;
int hash_table[20]={};
class hashing
{
	public:
		int hash_function(int x)
        {
	        int sum=0;
	        for(int a=x,i=0;i<3;i++,a=a/10)
	        sum=sum+(a%10);
	
	        while(sum>9)
	            {	    
		            int a=sum%10;
		            sum=sum/10;
		            sum=sum+a;
	            }
	        return sum;
	    }
	     	
		

		void insert_ele()
		{
			
		    int x,index,count=0;
	        char ch='y';
	        while(ch=='y'|| ch=='Y')
	        {	cout<<"Insert the value:- ";
			    cin>>x;
		        index=hash_function(x);
		        try
		        {	if(hash_table[index]!=0) 
			        {
					    throw index;
					}
			        else
					{
					    hash_table[index]=x;
					}
		        }
		       catch(int x)
		       {
		          cout<<"Collision occured at position "<<x<<endl;
		       }
		        
		       cout<<"do you want to continue(y/n)";
		       cin>>ch;
            }
        }
        void delete_ele()
        {
	        int x,index;
	        cout<<"Delete value: ";
			cin>>x;
	        index=hash_function(x);
	        hash_table[index]=0;
	        
	        cout<<"value is deleted from table"<<endl;
	    }
	    void search_ele()
        {
	        int x,index,count=0;
	        cout<<"Search value: ";
			cin>>x;
	        index=hash_function(x);
	
	        if(hash_table[index]==x)
			{
			    cout<<"Found at position "<<index<<endl;
			}
        }
        void display_ele()
        {
	        for(int i=0;i<10;i++)
	        cout<<hash_table[i]<<"\t";
	        cout<<endl;
        }
};
int main()
{
	hashing hash;
	int choice;
	int flag=1;
	while(flag)
	{
		cout<<"1.Insert"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Display"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"enter your choice:-";
		cin>>choice;
		switch(choice)
		{
			case 1: 
			{
			    hash.insert_ele();
			    break;
			}
			case 2:
			{
			    hash.delete_ele();
			    break;
			}
			case 3: 
			{
			    hash.search_ele();
			    break;
			}
			case 4:
			{
			    hash.display_ele();
			    break;
			}
			case 5: 
			{
				flag=0;
				break;
			}
			default :
			{
			    cout<<"please enter a valid choice"<<endl;
			}
		}
	}
}
  
