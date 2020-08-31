#include<iostream>
#include<math.h>

using namespace std;
int A;
int area(int r)
{   
	return A=3.14*r*r;
}

int area(int l,int b)
{
	return A=l*b;
}

int area(int a,int b, int c)
{
	float s;
	s = (a+b+c)/2;
	float A;
	A = sqrt((s-a)*(s-b)*(s-c));
    return A;
	}

int main()
{
	label:
	int sel;
	cout<<"\t1. area of rect\n\
	2. area of circle\n\
	3. area of triangle\n\
	4. exit\n";
	cin>>sel;
	
	if(sel == 1)
	{
		int l,b;
		cout<<"input length and breadth\n";
		cin>>l>>b;
		area(l,b);
		cout<<"area="<<A<<"\n";
		goto label;
	}
	
	else if(sel == 2)
	{
		int r;
		cout<<"enter radius\n";
		cin>>r;
		area(r);
		cout<<"area="<<A<<"\n";
		goto label;
	}
	
	else if(sel == 3)
	{
		int a,b,c;
		cout<<"enter sides";
		cin>>a>>b>>c;
		area(a,b,c);
		cout<<"area="<<A<<"\n";
		goto label;
	}
	else 
		exit(1);
}
