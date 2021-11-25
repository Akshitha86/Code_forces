#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n,ans;
    cin>>x>>y>>n;
    int x1=x,x2=y,x3=y-x,x4=-x,x5=-y,x6=x-y;
    switch(n%6){
        case 1 : ans=x1; break;
        case 2 : ans=x2; break;
        case 3 : ans=x3; break;
        case 4 : ans= x4; break;
        case 5 : ans=x5; break;
        case 0 : ans=x6; break;
    }
    
    if(ans>=0) cout<<(ans%1000000007);
    else if((ans)%1000000007==0) cout<<0;
    else cout<< ((ans)%1000000007)+1000000007;
    return 0;
}