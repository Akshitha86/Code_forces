#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main()
{
    string s,t;
    cin>>s>>t;
 
    vector<int> u(26,0),v(26,0);
 
    for(int i=0;i<s.length();i++) u[s[i]-'a']++;
 
    for(int i=0;i<t.size();i++) v[t[i]-'a']++;
 
    if(s!=t){
        if(s.length()==t.length() && v==u){
            cout<<"array"<<endl;
        }
        else{
            int k=0;
            for(int i=0;i<26;i++){
                if(u[i]<v[i]){
                    k=1;
                    break;
                }
            }
            if(k==0){
                int j=0;
                
                for(int i=0;i<s.length();i++){
 
                    if(s[i]==t[j]) j++;
                    if(j==t.length()) break;
                }
              
                if(j==t.length()) cout<<"automaton"<<endl;
                else cout<<"both"<<endl;
            }
            else{
                cout<<"need tree"<<endl;
            }
            
        }
    }
    return 0;
}