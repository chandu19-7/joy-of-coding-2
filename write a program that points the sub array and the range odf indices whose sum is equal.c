#include<stdio.h> 
void main()
{

    int a[50],sub[50],i,j,k; int sum,n,cursum;
 
     printf("enter the array size"); 
     scanf("%d",&n); 
      printf("enter elements"); 
       for(i=0;i<n;i++)
       {

          scanf("%d", &a[i]);
        }

          printf("enter sum"); 
          scanf("%d",&sum); 
          for(i=0;i<n;i++)
           {

               cursum=a[i]; 
               for(j=i+1;j<n;j++)
               { 
                   if(cursum==sum)
                   {
                       sub[i]=a[i];
                        printf("indice range from %d to %d\n",i,j-1);
                        printf("subarray[");
                         for(k=i;k<j;k++)
                        {

                        printf("%d,",sub[k]);
                        }

                           printf("]");
                    }

                     if(cursum>sum || j>n)
                     { 
                       break;
                    
            
                }
                    cursum=cursum+a[j];

                     sub[j]=a[j];
            }
        }
   }