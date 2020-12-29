#include<stdio.h>
int main()
{
    int val;
    long long int n,data;
    while(scanf("%lld", &n))
    {
        if(n==0) break;
        int sum=0;
        data=n;
        while(data>0)
        {
            val=data%10;
            data=data/10;
            sum=sum+val;
            if(data==0)
            {
                if(sum<10) break;
                data=sum;
                sum=0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

