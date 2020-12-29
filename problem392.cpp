#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    vector<int>v(9);
    while(cin>>v[8]>>v[7]>>v[6]>>v[5]>>v[4]>>v[3]>>v[2]>>v[1]>>v[0])
    {
        int signCounter=0,part=0,partCounter=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]<0 && !partCounter)
            {
                signCounter++;
                part++;
            }
            if(signCounter)
            {
                if(v[i]<0 && part==0) cout<<" - ";
                else if(v[i]>0 && part==0) cout<<" + ";
                else if(part)
                {
                    cout<<"-";
                    part=0;
                }
            }
            if(v[i]!=0)
            {
                if(v[i]!=1 && v[i]!=-1) cout<<abs(v[i]);
                if((v[i]==1 || v[i]==-1)&& i==0) cout<<abs(v[i]);
                if(i>1) cout<<"x^"<<i;
                if(i==1)cout<<"x";
                signCounter++;
                partCounter++;
            }
        }
        if(!signCounter && !partCounter) cout<<"0";
        cout<<endl;
    }
    return 0;
}

