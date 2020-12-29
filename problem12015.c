#include<stdio.h>
int main()
{
    int T,i,key=1;
    scanf("%d", &T);
    while(T--)
    {
        char arr[20][110];
        int rel[10],max=0;
        for(i=0;i<10;i++)
        {
            scanf("%s %d", arr[i],&rel[i]);
            if(rel[i]>max) max=rel[i];
        }
        printf("Case #%d:\n", key);
        for(i=0;i<10;i++)
        {
            if(max==rel[i])
            {
                printf("%s\n",arr[i]);
            }
        }
        key++;
    }
    return 0;
}
