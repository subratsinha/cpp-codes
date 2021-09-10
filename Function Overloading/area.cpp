#include<iostream>
#include<stdlib.h>
using namespace std;
class areas
{
	public:
	int a,b;
	areas(int side1,int side2)
	{
		a=side1;
		b=side2;
	}
	void choice()
	{
		
		cout<<"press 1--to calculate area of square"<<endl;
		cout<<"press 2--to calculate area of rectangle"<<endl;
		cout<<"press 3--to calculate area of triangle"<<endl;
		cout<<"press 4--to exit the program"<<endl;
	}
	
	int calculate(int a)
	{
		int area;
		area=a*a;
		cout<<"area of square is:"<<area<<endl;
		return area;
	}
	int calaulate(int a,int b)
	{
		int area;
		area=a*b;
		cout<<"area of rectangle is:"<<area<<endl;
		return area;
	}
	float calculate(float a,float b)
	{
		float area;
		area=(a*b)/2;
		cout<<"area of triangle is:"<<area<<endl;
		return area;
	}
};

int main()
{
	areas x(10,20);
	x.choice();
	int n,i=1;
	cout<<"enter a number";
	cin>>n;	
	
		if (n==1)
	{
		x.calculate(10);		
	
	}
	else if(n==2)
	{
		x.calaulate(10,20);
		
	
	}
	else if(n==3)
	{
		x.calculate(10.5,20.5);	

	}
	
	else if(n==4)
	{
		n=0;
	}
	else
	cout<<"invalid number"<<endl<<"please try again";

	

	return 0;
}
