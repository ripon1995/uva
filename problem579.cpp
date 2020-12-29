#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int hour,minute;
    char ch;
    double angle;
    while(cin>>hour>>ch>>minute)
    {
        if(hour==0 && minute==0) break;
        angle=abs(((60*hour)-(11*minute))/2.0);
        if(angle>180) printf("%.3lf\n", (360-angle));
        else printf("%.3lf\n", angle);
    }
    return 0;
}

