#include<bits/stdc++.h>
#include <iomanip>
using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	int n,k=0,h;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i>0 && v[i] > v[i-1]){
			k++;
		}
	} 
	if(k==0){
		cout<<"yes"<<nline;
		cout<<1<<" "<<n;
	}
	else if(k==n-1){
		cout<<"yes"<<nline;
		cout<<1<<" "<<1;
	}
	else{
		int flag=1,p=0;
		vector<int> a=v;
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			if(v[i]!=a[i]){
				h=i;
				for(int j=0;j<n;j++){
					if(a[j]==v[i]){
						k=j;
						p=1;
					}
					else if(p==1 && v[j]!=a[j]){
						flag=0;
						break;
					}
				}
				break;
			}
		}
		if(flag!=0){
			int i=k,j=h;
			while(i>=h && j<=k){
				if(a[i]!=v[j]){
					flag=0;
					break;
				}
				i--;
				j++;
			}
		}
		if(flag==0) cout<<"no";
		else{
			cout<<"yes"<<nline;
			cout<<h+1<<" "<<k+1;
		}

	}
	cout<<nline;
	return 0;
}