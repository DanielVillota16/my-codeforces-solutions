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

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin >>t;
    while(t--){
        double a,b; cin >> a>>b;
        ll ans;
        if(a<=b){
            ans = b-a;
        } else{
            ans = (ll)(ceil(a/b)*b)-(ll)a;
        }
        cout << ans << '\n';
    }
    return 0;
}
