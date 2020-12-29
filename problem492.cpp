#include<iostream>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        int len=0;
        for(int i=0;i<str.length();i++)
        {
            if(isalpha(str[i])) len++;
            if(!isalpha(str[i]) || i==str.length()-1)
            {
                if(len)
                {
                    int j=i-len;
                    if(i==str.length()-1 && isalpha(str[i])) j=i-len+1;
                    if(str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U'||str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                    {
                        while(len--) cout<<str[j++];
                        cout<<"ay";
                    }
                    else
                    {
                        char ch=str[j];
                        j++;
                        len--;
                        while(len--) cout<<str[j++];
                        cout<<ch<<"ay";
                    }
                    len=0;
                }
                if(!isalpha(str[i]))cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

