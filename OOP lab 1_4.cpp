#include<iostream>
using namespace std;

class time 
{
	int hh,mm,ss;
	
	public:
		time (int h=0,int m=0,int s=0)
		{
			hh=h;
			mm=m;
			ss=s;
		}
		
		
		void show_time()
		{
			
			cout<<hh<<":"<<mm<<":"<<ss;
		}
		
		time operator + (time obj);
};

time time:: operator +(time obj)
{
	time t1 = *this;
	int a,b;
	a = t1.ss+obj.ss;
	if(a>60)
	{
		t1.mm++;
		a=a%60;
		t1.ss = a;
	}
	b= t1.mm+obj.mm;
	if(b>60)
	{
		t1.hh++;
		b=b%60;
		t1.mm = b;
	}
	b= t1.hh+obj.hh;
	if(b>24)
	{
		b=b%24;
		t1.hh = b;
	}
	return t1;
}

int main()
{
	time t1(10,30,35),t2(15,31,31),t3;
	t3 = t1 + t2;
	t3.show_time();
}
