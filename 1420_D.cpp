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
ll MOD=998244353;
vector<ll> fact(300001);

ll f(){
    ll temp=1;
    fact[0]=fact[1]=1;
    fore(i,1,300001) {
        fact[i]=fact[i-1]*i;
        fact[i]=fact[i]%MOD;
    }
    return temp;
}

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
    f();
    int n, k; cin>>n>>k;
    vector<pair<int,int>> vec;
    fore(i,0,n){
        int x,y; cin>>x>>y;
        vec.push_back({x,1});
        vec.push_back({y+1,-1});
    }
    sort(ALL(vec));
    ll open=0;
    ll ans=0;
    fore(i,0,2*n){
        if(vec[i].second==1) open++;
        else {
            open--;
            if(open+1>=k) ans+=(fact[open])*inv(fact[k-1]*fact[open-k+1]%MOD)%MOD;
        }
    }
    cout<<ans%MOD<<endl;
    return 0;
}