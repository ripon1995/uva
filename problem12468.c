#include<stdio.h>

int directCounter(int a,int b)
{
    int ch;
    ch=b-a;
    return abs(ch);
}

int byDirectCounter(int a,int b)
{
    int ch1;
    ch1=99-abs(b-a)+1;
    return abs(ch1);
}

int main()
{
    int a,b;
    while(scanf("%d %d", &a,&b))
    {
        if(a==-1 && b==-1) break;
        if(directCounter(a,b)<byDirectCounter(a,b)) printf("%d\n", directCounter(a,b));
        else printf("%d\n", byDirectCounter(a,b));
    }
    return 0;
}

