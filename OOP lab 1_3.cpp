//Q3
#include<iostream>
using namespace std;

void power(double m,int n=2)
{
	int result=1;
	for(int i=0;i<n;i++)
	{
		result*=m;
	}
	cout<<"result="<<result;
}

int main()
{
	double m;
	int n;
	cout<<"enter no. and its power\n";
	cin>>m>>n;
	power(m,n);
}
