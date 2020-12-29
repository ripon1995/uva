#include<stdio.h>
int main()
{
    int T,p,s,i,key=1;
    scanf("%d", &T);
    while(T--)
    {
        int minSp=-1;
        scanf("%d", &p);
        for(i=1;i<=p;i++)
        {
            scanf("%d", &s);
            if(s>minSp) minSp=s;
        }
        printf("Case %d: %d\n", key,minSp);
        key++;
    }
    return 0;
}

