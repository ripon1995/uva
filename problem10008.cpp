#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    vector<char>charVector;
    for(int i=65;i<91;i++) charVector.push_back((char)i);
    vector<int>v(26,0);
    int line;
    cin>>line;
    getchar();
    while(line--)
    {
        string str;
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a'&&str[i]<='z')str[i]=toupper(str[i]);
            if(str[i]>='A' && str[i]<='Z')
            {
                int pos;
                for(int j=0;j<26;j++) if(charVector[j]==str[i]) v[j]=v[j]+1;
            }
        }
    }
    while(v.size()>0)
    {
        int maximum=-1,pos=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>maximum)
            {
                maximum=v[i];
                pos=i;
            }
        }
        if(maximum>0)cout<<charVector[pos]<<" "<<maximum<<endl;
        charVector.erase(charVector.begin()+pos);
        v.erase(v.begin()+pos);
    }
    v.assign(26,0);
    return 0;
}

