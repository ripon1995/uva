#include<stdio.h>
int main()
{
    int i,j,p,bu,h,w,c,b;
    while(scanf("%d %d %d %d", &p,&bu,&h,&w)!=EOF)
    {
        int total=0,cost=3000000;
        for(i=1;i<=h;i++)
        {
            int counter=0;
            scanf("%d", &c);
            for(j=1;j<=w;j++)
            {
                scanf("%d", &b);
                if(b>=p) counter=1;
            }
            if(counter)
            {
                total=c*p;
                if(total<cost)
                {
                    cost=total;
                }
            }
        }
        if(cost<=bu) printf("%d\n",cost);
        else printf("stay home\n");
    }
    return 0;
}

