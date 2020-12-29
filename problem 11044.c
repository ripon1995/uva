#include<stdio.h>
int main()
{
    int T,n,m;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &n,&m);
        printf("%d\n", (n/3)*(m/3));
    }
    return 0;
}

