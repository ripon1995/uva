#include<stdio.h>
int main()
{
    int T,n,value;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        value=(((((567*n)/9)+7492)*235)/47)-498 ;
        value=value/10;
        value=value%10;
        printf("%d\n", abs(value));//convert the negative number into positive
    }
    return 0;
}
