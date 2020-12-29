#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H,U,D,F;
    while(scanf("%d %d %d %d", &H,&U,&D,&F))
    {
        if(H==0) break;
        int counter=0;
        double inHeight=0,disClimbed,afterDay,afterNight;
        while(1)
        {
            counter++;
            disClimbed=disClimbed-((F/100.0)*U);
            if(disClimbed<=0) disClimbed=0;
            if(counter==1) disClimbed=(double)U;
            afterDay=inHeight+disClimbed;
            if(afterDay>H || afterDay<0) break;
            inHeight=afterDay-(double)D;
            if(inHeight<0) break;
        }
        if(afterDay>H) cout<<"success on day "<<counter<<endl;
        if(afterDay<0 || inHeight<0) cout<<"failure on day "<<counter<<endl;

    }
    return 0;
}

