#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(cin.eof()) break;
        int num=0;
        for(int i=0;i<=str.length();i++)
        {
            if(str[i]=='!'|| str[i]=='\0') cout<<endl;
            if(isdigit(str[i]))
            {
                int digit=str[i]-'0';
                num=num+digit;
            }
            if((str[i]>='A' && str[i]<='Z')|| str[i]=='*')
            {
                for(int j=1;j<=num;j++) cout<<str[i];
                num=0;
            }
            if(str[i]=='b')
            {
                for(int j=1;j<=num;j++) cout<<" ";
                num=0;
            }
        }
    }
    return 0;
}

