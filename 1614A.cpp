#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int p=0;
        for(int i=0;i<n;i++){
            if(a[i]>=l && a[i]<=r && k>=a[i]){
                k-=a[i];
                p++;
            }
        }
        cout<<p<<endl;
 
    }
    return 0;
}