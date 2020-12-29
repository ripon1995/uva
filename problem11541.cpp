#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
    int tc,testCase=0;
    vector<char>v;
    cin>>tc;
    getchar();
    while(tc--)
    {
        string str;
        char ch;
        int n=0,counter=0,charCounter=0;
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(isalpha(str[i]))
            {
                if(charCounter==1)
                {
                    for(int j=1;j<=n;j++)v.push_back(ch);
                    charCounter=0;
                    counter=0;
                    n=0;
                }
                ch=str[i];
                charCounter++;
            }
            if(isdigit(str[i]))
            {
                if(counter==0)n=n+(str[i]-'0');
                if(counter==1) n=(n*10)+(str[i]-'0');
                if(counter==2) n=(n*100)+(str[i]-'0');
                counter++;
            }
            if(i==str.length()-1) for(int j=1;j<=n;j++) v.push_back(ch);
        }
        cout<<"Case "<<++testCase<<": ";
        for(int i=0;i<v.size();i++) cout<<v[i];
        cout<<endl;
        v.clear();
    }
    return 0;
}

