/* simple program to show the complex numbers using the concept of constructor in c++ */

#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int a,int b)
		{
			real=a;
			img=b;
		}
		void add(complex x ,complex y)
		{
			real=x.real+y.real;
			img=x.img+y.img;
		}
		void display()
		{
			cout<<real;
			cout<<"+"<<img<<"j";
		}
};
int main()
{
	complex c1(10,20);
	complex c2(15,20);
    
    c1.add(c1,c2);
    c1.display();
	return 0;
}
