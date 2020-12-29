#include<stdio.h>
int main()
{
    int T;
    int farmyard,animal,fef,farmers,i;
    scanf("%d", &T);
    while(T--)
    {
        int sum=0;
        scanf("%d", &farmers);
        for(i=1;i<=farmers;i++)
        {
            scanf("%d %d %d", &farmyard,&animal,&fef);
            //here in this problem it was said that input will be terminated by EOF. But as this problem also uses test case so
            //there is no need to use EOF
            sum=sum+(farmyard*fef);
        }
        printf("%d\n", sum);
    }
    return 0;
}

