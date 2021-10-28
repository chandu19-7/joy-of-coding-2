#include<stdio.h> 
int main()
{

     int a[10][10],b[10][10],m,n,i,j;
     printf("enter the number of rows and column:\n"); 
     scanf("%d%d",&m,&n);
      printf("\n enter the element of matrix:\n"); 
      for(i=0;i<m;++i)
     {

       for(j=0;j<n;++j)
{

scanf("%d",&a[i][j]);
}
}

printf("\nThe Elements of Matrix are:\n");
for(i=0;i<m;++i)
{

for(j=0;j<n;++j)
{

printf("%d",a[i][j]);
}

if(j=m-1) 
 printf("\n");
}

printf("The Transpose matrix is:\n"); 
for(j=n-1;j>=0;j--)
{

for(i=0;i<n;i++)
{

printf("%d\t",a[i][j]);
}
if(i=n-1) printf("\n");
}
}