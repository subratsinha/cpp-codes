#include<iostream>
using namespace std;
class student
{
	protected:
		char name[30];
		char rollno[30];
		char gender;
		public:
		void student_details()  
		{
			cout <<"enter the name:";
			cin>>name;
			cout<<"enter the rollno:";
			cin>>rollno;
			cout<<"enter the gender:";
			cin>>gender;
		}
		void display_student_details()
		{
			cout<<"name is:"<<name<<endl;
			cout<<"roll no is:"<<rollno<<endl;
			cout<<"gender is:"<<gender<<endl;
		}
};
class internal_marks:virtual public student
{   protected:
	int marks1[6],i;
	public:
	void inputmarks()
	{	
			cout<<"enter the internal marks of 6 subjects:"<<endl;
			for(i=0;i<6;i++){
				cin>>marks1[i];
			}
		}
	void showmarks()
	{
		cout<<"internal marks are:"<<endl;
		for(int j=0;j<6;j++){
			cout<<marks1[j]<<" ";
		}
		}	
};
class external_marks:public virtual student
{   
    public:
	int marks[6],i;
	public:
	void getmarks(){
		cout<<"\nenter the external marks of 6 subjects:"<<endl;
		for(i=0;i<6;i++){
			cin>>marks[i];
		}
	}
	void displaymarks(){
		cout<<"external marks are:"<<endl;
		for(int j=0;j<6;j++){
			cout<<marks[j]<<" "<<endl;
		}
	}
 };
 class result :public internal_marks,public external_marks
 {
 	public:
 		int i,sum=0,sum1=0;
 		void calc()
 		{
 		for(i=0;i<6;i++){
 		sum+=marks1[i];
 		
		 }
		 cout<<"internal marks"<<sum<<endl;		 
		 	for(int j=0;j<6;j++){
		 	sum1+=marks[j];		 	
			 }
			 cout<<"external marks"<<sum1<<endl; 
		
		 	int total;
		 	sum=(40*sum)/100;
		 	sum1=(60*sum1)/100;
		 	total=sum+sum1;
		 	cout<<"total marks:"<<total<<endl;
		 }
 			
  };
  int main()
  {
  	result x;
  	x.student_details();
  	x.display_student_details();
  	x.inputmarks();
  	x.showmarks();
  	x.getmarks();
    x.displaymarks();  	
  	x.calc();
  	return 0;
  }
