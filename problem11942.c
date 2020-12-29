#include<stdio.h>
int main()
{
    int i,n,beard[10],key=1;
    scanf("%d", &n);
    while(n--)
    {
        int counter;
        for(i=0;i<10;i++)
        {
            scanf("%d", &beard[i]);
        }
        if(beard[0]>beard[1])
        {
            for(i=1;i<10;i++)
            {
                if(beard[i-1]>beard[i]) counter=1;
                else
                {
                    counter=0;
                    break;
                }
            }
        }
        if(beard[0]<beard[1])
        {
            for(i=1;i<10;i++)
            {
                if(beard[i-1]<beard[i]) counter=1;
                else
                {
                    counter=0;
                    break;
                }
            }
        }
        if(key==1) printf("Lumberjacks:\n");
        if(counter==1) printf("Ordered\n");
        else printf("Unordered\n");
        key++;
    }
    return 0;
}

