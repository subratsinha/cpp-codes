#include<iostream>
using namespace std;
class convert
{
	public:
	int n;
	int binarynum[32];
	int i=0;
	void inputdata()
	{
		cout<<"enter a number";
		cin>>n;
		
	}
	void calc();
	
};
void convert::calc()
{
	
	while (n>0){
	binarynum[i]=n%2;
		n=n/2;
		i++;
	         }
	for(int j=i-1;j>=0;j--)
	cout<<binarynum[j];
	
}
int main()
{
	convert x;
	x.inputdata();
	x.calc();
	return 0;
}
