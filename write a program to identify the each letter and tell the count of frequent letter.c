#include<stdio.h>
#define MAXN 100
int main()
{
    char s[MAXN];
    scanf("%[^\n]", s);
    int f[26] = {0};
    int maxf = 0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] != ' ')
        {
            f[s[i]-'a']++;
            if(f[s[i]-'a']> f[maxf]) maxf = s[i]-'a';
        }
    }
    printf("%c %d", maxf+'a',f[maxf]);
    return 0;
}
