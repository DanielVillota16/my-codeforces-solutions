#include <bits/stdc++.h>
#include <math.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define repA(i,a,n) for(ll i=a;i<=(n);++i)
#define repD(i,a,n) for(ll i=a;i>=(n);--i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;

const int M = 3e5+10;

int colors[M];
vector<int> g[M];
int red, blue, ans;

pair<int, int> dfs(int src, int p){
	int r = (colors[src] == 1), b = (colors[src] == 2);
	for (int s : g[src]) {
		if (s != p){
			auto tmp = dfs(s, src);
			ans += (tmp.fst == red && tmp.snd == 0);
			ans += (tmp.fst == 0 && tmp.snd == blue);
			r += tmp.fst;
			b += tmp.snd;
		}
	}
	return make_pair(r, b);
}

int main() {
	#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
	int n; cin>>n;
	red=blue=ans=0;
	fore(i,0,n){
		cin>>colors[i];
		red += (colors[i] == 1);
		blue += (colors[i] == 2);
	}
	fore(i,0,n-1){
		int src, dest;
		cin>>src>>dest;
		--src; --dest;
		g[src].pb(dest);
		g[dest].pb(src);
	}
	dfs(0,-1);
	cout<<ans<<'\n';
	return 0;
}