#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;
 
int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        set<int> st;
        fore(i,0,n) st.insert(ar[i]-k);
        bool can=0;
        fore(i,0,n){
            if(st.find(ar[i])!=st.end()) {
                can=1; break;
            }
        }
        string ans=can?"YES":"NO";
        cout<<ans<<endl;
    }
	return 0;
}