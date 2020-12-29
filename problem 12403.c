#include<stdio.h>
int main()
{
    int T;
    int bal,total=0;
    scanf("%d", &T);
    while(T--)
    {
        char S[6];
        scanf("%s", S);
        if(S[0]=='d')
        {
            scanf("%d", &bal);
            total=total+bal;
        }
        if(S[0]=='r') printf("%d\n", total);
    }
    return 0;
}

