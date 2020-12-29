#include<stdio.h>
int main()
{
    int N,i,event,c=1;
    while(scanf("%d", &N))
    {
        int sum=0;
        if(N==0) break;
        for(i=1;i<=N;i++)
        {
            scanf("%d", &event);
            if(event>0 && event<100) sum=sum+1;
            else if(event==0) sum=sum-1;
        }
        printf("Case %d: %d\n", c,sum);
        c++;
    }
    return 0;
}

