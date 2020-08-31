#include<iostream>
#include<fstream>
using namespace std;
struct state
{
	int start_state;
	char input;
	int next_state;
	char isIt_last;
}check[4];
int main()
{
	int i=0;
	ifstream theFile;
	theFile.open("stateMachine.txt");
	while(theFile>> check[i].start_state >> check[i].input >> check[i].next_state >> check[i].isIt_last)
	{
//		cout<< check[i].start_state << check[i].input << check[i].next_state << check[i].isIt_last<<"\n";
		i++;
    }
    int curr_state=0,f=0;
    cout<<"Enter which string you want to check\n";
    string str;
	cin>>str;
	int length=str.length();
	int j=0;
	for(i=0;i<4;i++)
	{
		label:
		if(check[i].start_state==check[i].next_state && check[i].input==str[j])
		{
			j++;
			goto label;
		}
		else if(check[i].start_state==curr_state && check[i].input==str[j])
		{
			curr_state=check[i].next_state;
			if(check[i].isIt_last=='Y' && j==length-1)
			{
				f=1;
				break;
			}
			j++;
		}
	}
	if(f==0)
	{
		printf("Pattern not match\n");
	}
	else
	{
		printf("Pattern match\n");
	}
}
