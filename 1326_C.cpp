#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
using namespace std;
const int MOD = 998244353;

int main() {FIN;
    int n,k; cin >> n>>k;
    ll M=0;
    set<int> mxs;
    fore(i,n-k+1,n+1) {M+= i; mxs.insert(i);}
    vector<int> positions;
    fore(i,0,n) {int curr; cin >> curr; if(mxs.find(curr) != mxs.end()) positions.pb(i);}
    ll pwm=1;
    fore(i,1,positions.size()){ pwm*=(positions[i]-positions[i-1]); pwm=pwm%MOD;}
    cout << M << " " << pwm%MOD <<'\n';
    return 0;
}
