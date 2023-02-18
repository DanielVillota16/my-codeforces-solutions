#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define rep(i,n) for(ll i=0;i<(n);++i)
#define repA(i,a,n) for(ll i=a;i<=(n);++i)
#define repD(i,a,n) for(ll i=a;i>=(n);--i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//#define oper min
#define NEUT 0

using namespace std;
typedef long long ll;

ll oper(ll a, ll b){
	return a+b;
}

struct STree {

	vector<ll> st;ll n;

	STree(ll n): st(4*n+5,NEUT), n(n) {}

	void init(ll k, ll s, ll e, ll *a){

		if(s+1==e){st[k]=a[s];return;}

		ll m=(s+e)/2;

		init(2*k,s,m,a);init(2*k+1,m,e,a);

		st[k]=oper(st[2*k],st[2*k+1]);

	}

	void upd(ll k, ll s, ll e, ll p, ll v){

		if(s+1==e){st[k]=v;return;}

		ll m=(s+e)/2;

		if(p<m)upd(2*k,s,m,p,v);

		else upd(2*k+1,m,e,p,v);

		st[k]=oper(st[2*k],st[2*k+1]);

	}

	ll query(ll k, ll s, ll e, ll a, ll b){

		if(s>=b||e<=a)return NEUT;

		if(s>=a&&e<=b)return st[k];

		ll m=(s+e)/2;

		return oper(query(2*k,s,m,a,b),query(2*k+1,m,e,a,b));

	}

	void init(ll *a){init(1,0,n,a);}

	void upd(ll p, ll v){upd(1,0,n,p,v);}

	ll query(ll a, ll b){return query(1,0,n,a,b);}

}; // usage: STree rmq(n);rmq.init(x);rmq.upd(i,v);rmq.query(s,e);

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n], b[n], c[2*n];
        rep(i,n){
        	cin>>a[i]>>b[i];
        }
        c[0]=c[n]=(a[0]-b[n-1])<=0?0:(a[0]-b[n-1]);
        fore(i,1,n){
        	c[i]=c[i+n]=(a[i]-b[i-1])<=0?0:(a[i]-b[i-1]);
        }
        STree rmq(2*n); rmq.init(c);
        ll ans=LLONG_MAX;
        rep(i,n){
        	rmq.upd(i,a[i]);
        	ll cur = rmq.query(i,i+n);
        	ans=min(ans,cur);
        }
        cout<<ans<<'\n';
    }
    return 0;
}