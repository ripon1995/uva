#include<stdio.h>
#include<string.h>
int main()
{
    char S[14];
    int i=1,j;
    while(gets(S)!=NULL)
    {
        j=0;
        if(S[0]=='#') break;
        if(!strcmp(S,"HELLO"))
        {
            printf("Case %d: ENGLISH\n", i);
            j++;
        }
        if(!strcmp(S,"HOLA"))
        {
            printf("Case %d: SPANISH\n", i);
            j++;
        }
        if(!strcmp(S,"HALLO"))
        {
            printf("Case %d: GERMAN\n", i);
            j++;
        }
        if(!strcmp(S,"BONJOUR"))
        {
            printf("Case %d: FRENCH\n", i);
            j++;
        }
        if(!strcmp(S,"CIAO"))
        {
            printf("Case %d: ITALIAN\n", i);
            j++;
        }
        if(!strcmp(S,"ZDRAVSTVUJTE"))
        {
            printf("Case %d: RUSSIAN\n", i);
            j++;
        }
        if(j==0) printf("Case %d: UNKNOWN\n",i);
        i++;
    }
    return 0;
}

