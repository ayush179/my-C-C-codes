#include <stdio.h>
#include <stdbool.h>
bool isHeap();
void main()
{int n,a[50];
	printf("enter no of elements in array");
	scanf("%d",&n);
	printf("enter the elemtnts");
	for (int i=0 ; i<n; i++)
	scanf("%d",&a[i]);
	isHeap(a, 0, n)? printf("Yes"): printf("No");
}

	// Returns true if arr[i..n-1] represents a 
// max-heap 
bool isHeap(int arr[], int i, int n) 
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
}
