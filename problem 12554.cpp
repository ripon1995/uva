#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char strSong[20][10]={"Happy", "birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char strName[110][110];
    int n,i,k,m;
    cin>>n;
    getchar();
    for(i=0;i<n;i++) gets(strName[i]);
    k=n/16;
    int j=0;
    for(i=0;i<=k;i++)
    {
        for(m=0;m<16;m++)
        {
            if(j==n) j=0;
            cout<<strName[j]<<": "<<strSong[m]<<endl;
            j++;
        }
    }
    return 0;
}

