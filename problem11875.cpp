#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int testCase=0,tc;
    cin>>tc;
    while(tc--)
    {
        int N;
        cin>>N;
        int age[N];
        for(int i=0;i<N;i++) cin>>age[i];
        sort(age,age+N);
        cout<<"Case "<<++testCase<<": "<<age[(N/2)]<<endl;
    }
    return 0;
}

