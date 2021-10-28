#include<stdio.h>
#include<string.h>
int main()
{
    char name[100], abv[20];
    int i, j=0, k=0;
    scanf("%[^\n]%*c",name);
    for(i=0; i<strlen(name);i++)
    {
        abv[k]=name[j];
        if(name[i]==' ')
        {
            k=k+1;
            j=i;
            abv[k]=name[j];
            j++;
        }
    }
    abv[k+1]='\0';
    printf("%s",abv);
    return 0;
}