#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int r;
        vector<int>s;
        cin>>r;
        for(int i=1;i<=r;i++)
        {
            int value;
            cin>>value;
            s.push_back(value);
        }
        sort(s.begin(),s.end());
        int index=floor(s.size()/2);
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum=sum+abs(s[index]-s[i]);
        }

        cout<<sum<<endl;
    }
    return 0;
}

