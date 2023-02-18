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
	int n,m,k; cin>>n>>m>>k;
	vector<ll> ar(n),l(m),r(m),d(m);
	fore(i,0,n) cin>>ar[i];
	fore(i,0,m) {
		ll lt,rt,dt; cin>>lt>>rt>>dt;
		l[i]=lt-1;
		r[i]=rt-1;
		d[i]=dt;
	}
	vector<ll> x(k),y(k);
	fore(i,0,k){
		ll xt,yt; cin>>xt>>yt;
		x[i]=xt-1;
		y[i]=yt-1;
	}
	vector<pair<ll,ll>> sweep;
	fore(i,0,k){
		sweep.push_back({x[i],1});
		sweep.push_back({y[i]+1,-1});
	}
	sort(all(sweep));
	vector<ll> count(m+1,-1);
	ll cnt=0;
	fore(i,0,sz(sweep)){
		cnt+=sweep[i].second;
		count[sweep[i].first]=cnt;
	}
	if(count[0]==-1) count[0]=0;
	ll last=count[0];
	fore(i,1,m){
		if(count[i]==-1) count[i]=last;
		else last=count[i];
	}
	fore(i,0,m) d[i]*=count[i];
	vector<pair<ll,ll>> fsweep;
	fore(i,0,m){
		fsweep.push_back({l[i],d[i]});
		fsweep.push_back({r[i]+1,-d[i]});
	}
	sort(all(fsweep));
	vector<ll> fcount(n+1,-1);
	ll fcnt=0;
	fore(i,0,sz(fsweep)){
		fcnt+=fsweep[i].second;
		fcount[fsweep[i].first]=fcnt;
	}
	if(fcount[0]==-1) fcount[0]=0;
	ll flast=fcount[0];
	fore(i,1,n){
		if(fcount[i]==-1) fcount[i]=flast;
		else flast=fcount[i];
	}
	fore(i,0,n) ar[i]+=fcount[i];
	fore(i,0,n) cout<<ar[i]<<" ";
	return 0;
}