#include<iostream>
#include<cstdio>

using namespace std;

int i=0;

class student
{
	int age,marks[5];
	string name,branch;
	char sex;
	
	public:
		float percent;
		void input()
		{
			cout<<"input name, branch,sex,age,and marks\n";
			cin>>name;
			cin>>branch;
			cin>>sex;
			cin>>age;
			for(i=0;i<5;i++)
				cin>>marks[i];
		}
		
		void show()
		{
			cout<<"\nName :"<<name;
			cout<<"\nBranch :"<<branch;
			cout<<"\nAge :"<<age;
			cout<<"\nSex :"<<sex;
			for(i=0;i<5;i++)
				cout<<marks[i]<<" ";
		}
		
		void per()
		{
			int sum=0;
			for(i=0;i<5;i++)
			{
				sum+=marks[i];
			}
			percent = (sum*100)/500;
			cout<<"per "<<percent<<endl;
		}
};

int main()
{
	student s[10];
	int n;
	cout<<"enter no. of students";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].input();
		s[i].per();
		if(s[i].percent>70)
			s[i].show();
	}
	
}
