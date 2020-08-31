# include <stdio.h>
#include<time.h>
int arr[100],n;
void CheckNode();
void display()
{       int i;
	if(n==0)
	{
		printf("Heap is empty\n");
		return;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}/*End of display()*/

void insert(int num,int loc)
{
	int par;
	while(loc>0)
	{
		par=(loc-1)/2;
		if(num<=arr[par])
		{
			arr[loc]=num;
			return;
		}
		arr[loc]=arr[par];
		loc=par;
	}/*End of while*/
	arr[0]=num; /*assign num to the root node */
}/*End of insert()*/

void del(int num)
{
	int left,right,i,temp,par;

	for(i=0;i<n;i++)
	{
		if(num==arr[i])
		break;
	}
	if( num!=arr[i] )
	{
		printf("%d not found in heap\n",num);
		return;
	}
	arr[i]=arr[n-1];
	n=n-1;
	par=(i-1)/2;   /*find parent of node i */
	if(arr[i] > arr[par])
	{
		insert( arr[i],i);
		return;
	}
	left=2*i+1;  /*left child of i*/
	right=2*i+2; /* right child of i*/
	while(right < n)
	{
		if( arr[i]>=arr[left] && arr[i]>=arr[right] )
			return;
		if( arr[right]<=arr[left] )
		{
			temp=arr[i];
			arr[i]=arr[left];
			arr[left]=temp;
			i=left;
		}
		else
		{
			temp=arr[i];
			arr[i]=arr[right];
			arr[right]=temp;
			i=right;
		}
		left=2*i+1;
		right=2*i+2;
	}/*End of while*/
	if( left==n-1 && arr[i]<arr[left] ) /* right==n */
	{	temp=arr[i];
		arr[i]=arr[left];
		arr[left]=temp;
	}
}/*End of del()*/

main()
{  clock_t t;
     t=clock();
     
	int choice,num,index,counter,val;
	n=0;/*Represents number of nodes in the heap*/
	while(1)
	{    
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("5.Check element\n");
		printf("4.quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("Enter the number to be inserted : ");
			scanf("%d",&num);
			insert(num,n);
			n=n+1;
			break;
		 case 2:
			printf("Enter the number to be deleted : ");
			scanf("%d",&num);
			del(num);
			break;
		 case 3:
			display();
			break;
		 case 4:
            break;
            case 5:
            	printf("enter value of k");
            	scanf("%d",&index);
            	printf("enter value of x");
            	scanf("%d",&val);
            	 counter = 0;
        CheckNode(index,val,counter);
     	t=clock()-t;
		double time_taken=((double)t)/CLOCKS_PER_SEC;
		printf ("\n CheckNode() took %f seconds to execute",time_taken);
		 default:
		printf("o")	;
		}
	}
}

void CheckNode(int k, int x, int counter)
    {  int i;
       for(i=0;i<k;i++)
        if(arr[i]<x)
        printf("heap element is smaller\n");
        else
       printf("heap element is greater\n");
    }
    
