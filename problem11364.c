#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int i,store,distance,max=0,min=999;
        scanf("%d", &store);
        for(i=1;i<=store;i++)
        {
            scanf("%d", &distance);
            if(max<distance) max=distance;
            if(min>distance) min=distance;
        }
        printf("%d\n", (max-min)*2);
    }
    return 0;
}
