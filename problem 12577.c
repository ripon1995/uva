#include<stdio.h>
int main()
{
    char ch;
    int c=1;
    while(scanf("%c", &ch))
    {
        if(ch=='*') break;
        if(ch=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",c);
            c++;
        }
        if(ch=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",c);
            c++;
        }
    }
    return 0;
}

