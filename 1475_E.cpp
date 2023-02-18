#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

ll MOD = 1e9+7;
vector<ll> fact(1001);

ll pm(ll a, ll e){
	ll r=1;
	while(e){
		if(e&1)r=(r*a)%MOD;
		e>>=1;a=(a*a)%MOD;
	}
	return r;
}
ll inv(ll a){return pm(a,MOD-2);}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    fact[0]=fact[1]=1;
    fore(i,1,1001) {
        fact[i]=fact[i-1]*i;
        fact[i]=fact[i]%MOD;
    }
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<ll> ar(n);
        fore(i,0,n) cin>>ar[i];
        sort(ar.begin(),ar.end());
        ll setsize=0, gsize=1;
        fore(i,n-k+1,n) if(ar[i]==ar[n-k]) gsize++;
        setsize=gsize;
        for (int i = n-k-1; i >= 0; i--) if(ar[i]==ar[n-k]) setsize++;
        ll ans = (fact[setsize])*inv(fact[gsize]*fact[setsize-gsize]%MOD)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}