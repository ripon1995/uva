#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    string name1,name2;
    while(getline(cin,name1),getline(cin,name2))
    {
        int sum1=0,sum2=0,value;
        for(int i=0;i<=name1.length();i++)
        {
            if(name1[i]>='a' && name1[i]<='z') name1[i]=toupper(name1[i]);
            if(name1[i]>='A' && name1[i]<='Z')
            {
                value=name1[i]-64;
                sum1=sum1+value;
            }
        }
        for(int i=0;i<=name2.length();i++)
        {
            if(name2[i]>='a' && name2[i]<='z') name2[i]=toupper(name2[i]);
            if(name2[i]>='A' && name2[i]<='Z')
            {
                value=name2[i]-64;
                sum2=sum2+value;
            }
        }
        if(sum1==0 || sum2==0)
        {
            if(!name1.empty() && !name2.empty())cout<<endl;
        }
        int key;
        double sum3=0,sum4=0;
        while(sum1>0)
        {
            key=sum1%10;
            sum1=sum1/10;
            sum3=sum3+key;
            if(sum1==0 && sum3>9)
            {
                sum1=sum3;
                sum3=0;
            }
        }
        while(sum2>0)
        {
            key=sum2%10;
            sum2=sum2/10;
            sum4=sum4+key;
            if(sum2==0 && sum4>9)
            {
                sum2=sum4;
                sum4=0;
            }
        }
        if(name1.empty()&&name2.empty()) cout<<endl;
        if(sum3!=0 || sum4!=0)
        {
            if(sum3>=sum4) printf("%.2lf %%\n", (sum4/sum3)*100);
            if(sum4>sum3) printf("%.2lf %%\n", (sum3/sum4)*100);
        }
    }
    return 0;
}

