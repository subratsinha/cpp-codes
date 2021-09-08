/* a simple program in c++ to implement the concept of class in c++ */

#include<iostream>
using namespace std;
class student
{
	public:
		char name[30];
		char rollno[20];
		int sapid;
		void inputdata();
		void outputdata();
		
};

void student::inputdata()
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter rollno";
	cin>>rollno;
	cout<<"enter sapid";
	cin>>sapid;
}
void student::outputdata()
{
	cout<<"name"<<name<<endl;
	cout<<"rollno"<<rollno<<endl;
	cout<<"sapid"<<sapid<<endl;
}
int main()
{
	student x[4];
	for (int i=0;i<4;i++)
	{
		x[i].inputdata();
	}
	for(int j=0;j<4;j++)
	{
		x[j].outputdata();
	}
	return 0;

}
