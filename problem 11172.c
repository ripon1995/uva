#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a,&b);
        if(a>b) printf(">");
        else if(a<b) printf("<");
        else if(a==b) printf("=");
        printf("\n");
    }
    return 0;
}

