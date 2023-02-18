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

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int last = 1e9+1;
        bool enters = false;
        fore(i,0,n) {
            int x; cin>>x;
            if(last > x) last = x;
            else enters = true;
        }
        string ans = enters?"YES":"NO";
        cout<<ans<<endl;
    }
    return 0;
}