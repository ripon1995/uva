#include<stdio.h>
int main()
{
    char ch;
    int counter=0;
    while(scanf("%c", &ch)!=EOF)
    {
        if(ch=='"')
        {
            counter++;
            if(counter%2!=0) printf("``");
            else if(counter%2==0) printf("''");
        }
        else printf("%c", ch);
    }
    return 0;
}

