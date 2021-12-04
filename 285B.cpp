#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n,s,t;
    cin>>n>>s>>t;

    vector<int> v(n+1);
    for(int i=1;i<n+1;i++) cin>>v[i];

    int k=1,P=0;
    if(s==t) {
        cout<<"0\n";
        return 0;
    }
    for(int i=1;i<n+1;i++){
        if(v[s]==t){
            P=1;break;
        }else if(v[s]==s){
            break;
        }else{
            s=v[s];
            k++;
        }
    }
    if(P==1) cout<<k<<"\n";
    else cout<<"-1\n";
    return 0;
}