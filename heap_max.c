#include <stdio.h>
#include <stdbool.h>
bool isHeap();
void printArray(); 
void heapify(); 
void insertNode() ;
void swap ();
int a[50]; 
void main()
{  

    int i;
    int n;
    int a[50];
    int key;
	char cha;
	printf("enter no of elements in array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for( i=0 ; i<n; i++)
	scanf("%d",&a[i]);
	isHeap(a, 0, n)? printf("Yes"): printf("No");
	printf("\n do you want to enter new value (Y/N)\n");
	scanf("%c", &cha);
	printf("enter value to enter\n");
	scanf("%d",&key);
    insertNode(a, n, key); 
    printArray(a, n);
}

bool isHeap(int a[], int i, int n) 
{ 
// If a leaf node 
if (i > (n - 2)/2) 
    return true; 
  
// If an internal node and is greater than its children, and 
// same is recursively true for the children 
if (a[i] >= a[2*i + 1] && a[i] >= a[2*i + 2] && 
    isHeap(a, 2*i + 1, n) && isHeap(a, 2*i + 2, n)) 
    return true; 
  
return false; 
} 

void printArray(int a[], int n) 
{     int i;
    for ( i = 0; i < n; ++i) 
        printf ("%d\n", &a[i] ); 
} 

// Function to insert a new node to the Heap 
void insertNode(int a[], int n, int key) 
{ 
    // Increase the size of Heap by 1 
    n = n + 1; 
  
    // Insert the element at end of Heap 
    a[n - 1] = key; 
  
    // Heapify the new node following a 
    // Bottom-up approach 
    heapify(a, n, n - 1); 
} 

  
// Function to heapify ith node in a Heap 
// of size n following a Bottom-up approach 
void heapify(int a[], int n, int i) 
{ 
    // Find parent 
    int parent = (i - 1) / 2; 
  
    if (a[parent] > 0) { 
        // For Max-Heap 
        // If current node is greater than its parent 
        // Swap both of them and call heapify again 
        // for the parent 
        if (a[i] > a[parent]) { 
            swap(a[i], a[parent]); 
  
            // Recursively heapify the parent node 
            heapify(a, n, parent); 
        } 
    } 
} 

void swap (int i,int parent)
{   
	int temp;
	a[temp]=a[i];
	a[i]=a[parent];
	a[parent]=a[temp];
	return ;
}
