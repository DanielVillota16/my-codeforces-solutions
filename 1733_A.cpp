#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

using namespace std;
typedef long long ll;

int main(){FIN;
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<ll> ar(n);
        fore(i,0,n) cin>>ar[i];
        ll ans=0;
        fore(i,0,k){
            ll mx=0;
            for(int j=i; j<n; j+=k){
                mx=max(ar[j], mx);
            }
            ans+=mx;
        }
        cout<<ans<<endl;
    }
}