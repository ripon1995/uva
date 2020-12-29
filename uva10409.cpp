#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int value;
    string str;
    while(cin>>value)
    {
        int top=1,north=2,west=3,south=5,east=4,bottom=6;
        if(value==0)break;
        for(int i=1;i<=value;i++)
        {
            cin>>str;
            if(str=="north")
            {
                int temp1=top;
                top=south;
                int temp2=north;
                north=temp1;
                int temp3=bottom;
                bottom=temp2;
                south=temp3;

            }
            else if(str=="south")
            {
                int temp1=top;
                top=north;
                int temp2=south;
                south=temp1;
                int temp3=bottom;
                bottom=temp2;
                north=temp3;


            }
            else if(str=="east")
            {
                int temp1=east;
                east=top;
                int temp2=bottom;
                bottom=temp1;
                int temp3=west;
                west=temp2;
                top=temp3;
            }
            else if(str=="west")
            {
                int temp1=west;
                west=top;
                int temp2=bottom;
                bottom=temp1;
                int temp3=east;
                east=temp2;
                top=temp3;
            }
        }
        cout<<top<<endl;
    }
    return 0;
}

