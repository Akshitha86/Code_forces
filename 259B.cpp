#include <bits/stdc++.h>
using namespace std;




int main()
{
    vector<vector<int>> v;
    vector<int> temp;

    int a,sum=0;
    for(int i=0;i<9;i++){
        cin>>a;
         temp.push_back(a);
        if((i+1)%3==0){
            v.push_back(temp);
            temp.clear();
        }
       
        sum+=a;
    }
    sum/=2;

    for(int i=0;i<3;i++){
        a=v[i][0]+v[i][1]+v[i][2];
        v[i][i]=sum-a;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}