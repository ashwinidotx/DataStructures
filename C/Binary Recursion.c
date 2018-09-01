#include <stdio.h>

int BinarySearch(int A[],int i,int j,int x)
{
	int m;
	
	m=(i+j)/2;

	if(A[m]==x)
		return m;
	else if(A[m]>x)
		BinarySearch(A,i,m-1,x);
	else if(A[m]<x)
		BinarySearch(A,m+1,j,x);
    
	if(i>j)
		return -1; 			// num not found, last(base) condition

}


int main()
{
	int A[]={2,4,5,7,13,14,15,23};
	printf("\nEnter a Number: ");
	int x;
	scanf("%d",&x);
	int index,i,j;
	i=0;
	j=8;

	index=BinarySearch(A,i,j,x);
	if(index!= -1)
		printf("\nElement %d found at position %d.",x,index+1);
	else
		printf("\nElement not found.");
	return 0;
}