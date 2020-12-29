#include<stdio.h>
#include<string.h>

int getString(char str[][15],int i)
{
    char temp[5];
    int n;
    sscanf(str[i],"%s %s %d", temp,temp,&n);
    if(strcmp(str[n-1],"LEFT")==0)
    {
        strcpy(str[n-1],"LEFT");
        return -1;
    }
    if(strcmp(str[n-1],"RIGHT")==0)
    {
        strcpy(str[n-1],"RIGHT");
        return 1;
    }
    if(strlen(str[n-1])>=9) getString(str,n-1);
}

int main()
{
    int T,i;
    scanf("%d", &T);
    while(T--)
    {
        int n,pos=0;
        scanf("%d", &n);
        getchar();
        char str[n][15];
        for(i=0;i<n;i++)
        {
            gets(str[i]);
            if(strcmp(str[i],"LEFT")==0) pos--;
            if(strcmp(str[i],"RIGHT")==0) pos++;
            if(strlen(str[i])>=9) pos=pos+getString(str,i);
        }
        printf("%d\n", pos);
    }
    return 0;
}

