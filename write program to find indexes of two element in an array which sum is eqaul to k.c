#include<stdio.h>
int main()
{
int arr[20],n,k,i,j;
printf("enter number of arrays\n");
scanf("%d",&n);
printf("enter the arrays\n");
for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
} 
printf("enter the values for k\n");
scanf("%d",&k);
for(i=0 ; i<n ; i++)
{
	for(j=i+1 ;j<n ; j++)
	{
	if(arr[i]+arr[j]==k)		
		{
			printf("indices are found at %d and %d",i,j);
		}
	}
}
}
