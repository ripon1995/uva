#include<iostream>
#include<cstring>
#include<map>
#include<cstdio>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    map<int,int>m;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int player,ladder,die;
        cin>>player>>ladder>>die;
        for(int i=0;i<ladder;i++)
        {
            int value,jump;
            cin>>value>>jump;
            m.insert(pair<int,int>(value,jump));
        }
        map<int,int>::iterator it;
        if(player>=die)
        {
            int  counter=0;
            for(int i=1;i<=die;i++)
            {
                int value;
                cin>>value;
                it=m.find(value+1);
                if(it!=m.end())
                {
                    cout<<"Position of player "<<i<<" is "<<it->second<<"."<<endl;
                    if(it->second>=100)counter=100;
                }
                else if(counter!=100) cout<<"Position of player "<<i<<" is "<<value+1<<"."<<endl;
                else cout<<"Position of player "<<i<<" is "<<1<<"."<<endl;
            }
            for(int i=die+1;i<=player;i++)cout<<"Position of player "<<i<<" is "<<1<<"."<<endl;
        }
        else if(player<die)
        {
            vector<int>res(player,1);
            int counter=0,p=0;
            for(int i=1;i<=die;i++)
            {
                int value;
                cin>>value;
                it=m.find(value+res[p]);
                if(counter<100)
                {
                    if(it!=m.end())res[p]=it->second;
                    else res[p]=value+res[p];
                }

                if(res[p]>=100)
                {
                    counter=100;
                    res[p]=100;
                }
                p++;
                if(i%player==0)p=0;
            }
            for(int i=0;i<res.size();i++)cout<<"Position of player "<<i+1<<" is "<<res[i]<<"."<<endl;
        }
        m.clear();
    }
    return 0;
}

