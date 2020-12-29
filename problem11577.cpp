#include<vector>
#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;



int main()
{
    vector<char>letter;
    vector<int>counter;
    for(int i=97;i<123;i++)letter.push_back((char)i);
    //for(int i=0;i<letter.size();i++) cout<<letter[i]<<endl;
    int tc;
    string st;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,st);
        int maximum=-1;
        counter.assign(26,0);
        for(int i=0;i<st.length();i++)
        {
            if(st[i]>='A'&&st[i]<='Z' || st[i]>='a'&&st[i]<='z')
            {
                st[i]=tolower(st[i]);
                int value=(int)st[i]-97;
                counter[value]=counter[value]+1;
                if(maximum<counter[value])maximum=counter[value];
            }
        }
            for(int i=0;i<counter.size();i++)
            {
                if(maximum==counter[i])cout<<letter[i];
            }
            cout<<endl;
    }
    return 0;
}

