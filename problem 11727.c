#include<stdio.h>

int sort(int a,int b,int c)
{
    int arr[3]={a,b,c};
    int i,j;
    for(i=0;i<3;i++)
    {
        int temp;
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[1];
}
int main()
{
    int T,a,b,c,i=1;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d", &a,&b,&c);
        printf("Case %d: %d\n", i,sort(a,b,c));
        i++;
    }
    return 0;
}

