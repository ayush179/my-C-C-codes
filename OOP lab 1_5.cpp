#include<iostream>

using namespace std;

class matrix
{
int a[3][3] , b[3][3] , i , j , k;

public:
	void input()
	{
		cout<<"ENTER 3x3 MATRIX :\n";
		for(i=0;i<3;i++)
		
		    for(j=0;j<3;j++)
				cin>>a[i][j];			
		cout<<"\n\n\n";		
	}
		
	void multiply(matrix m1 , matrix m2)
	{
		for(k=0;k<3;k++) 
		for(i=0;i<3;i++)
		{
			b[k][i]=0;
			for(j=0;j<3;j++)
			{
				b[k][i] = b[k][i] + ( m1.a[k][j] * m2.a[j][i]);
			}
		}		
		output();	
	}
	
	void output()
	{
		cout<<"MULTIPLICATION :\n\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			cout<<b[i][j]<<"  ";
			cout<<endl<<endl;
		}
	}

};

int main()
{
	matrix a,b,c;	
	a.input();
	b.input();	
	c.multiply(a,b);
}
