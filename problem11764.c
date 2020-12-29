
#include<stdio.h>
int main()
{
    int T,w,i,h,key=1;
    scanf("%d", &T);
    while(T--)
    {
        int hj=0,lj=0,count=0;
        scanf("%d", &w);
        for(i=1;i<=w;i++)
        {
            scanf("%d", &h);
            if(h>count) hj++;
            if(h<count) lj++;
            count=h;
        }
        printf("Case %d: %d %d",key,hj-1,lj);
        printf("\n");
        key++;
    }
    return 0;
}
