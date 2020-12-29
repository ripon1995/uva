#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int>hartals;

void countHartal(int h,int n)
{
    for(int i=h;i<=n;i+=h)
    {
        double checkFriday=(double)(((i-6)/7.0)+1);
        if(!(ceil(checkFriday)==floor(checkFriday))&&(i%7!=0)) hartals.push_back(i);
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,p,h;
        cin>>n;
        cin>>p;
        for(int i=1;i<=p;i++)
        {
            cin>>h;
            countHartal(h,n);
        }
        int counter=0;
        sort(hartals.begin(),hartals.end());
        for(int i=1;i<hartals.size();i++)
        {
            if(hartals[i-1]!=hartals[i])counter++;
        }
        if(!hartals.empty())cout<<counter+1<<endl;
        else cout<<counter<<endl;
        hartals.clear();
    }
    return 0;
}

