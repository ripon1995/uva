#include<stdio.h>

int mileCost(int dur)
{
    int cost=0;
    if(dur>=30)
    {
        cost=cost+10*(dur/30);
        dur=dur%30;
    }
    if(dur<30) cost=cost+10;
    return cost;
}

int juiceCost(int dur)
{
    int cost=0;
    if(dur>=60)
    {
        cost=cost+15*(dur/60);
        dur=dur%60;
    }
    if(dur<60) cost=cost+15;
    return cost;
}

int main()
{
    int T,key=1;
    scanf("%d", &T);
    while(T--)
    {
        int n,i,dur,value1=0,value2=0;
        scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
            scanf("%d", &dur);
            value1=value1+mileCost(dur);
            value2=value2+juiceCost(dur);
        }
        if(value1<value2) printf("Case %d: Mile %d\n",key,value1);
        if(value2<value1) printf("Case %d: Juice %d\n",key,value2);
        if(value1==value2) printf("Case %d: Mile Juice %d\n", key,value1);
        key++;
    }
    return 0;
}
