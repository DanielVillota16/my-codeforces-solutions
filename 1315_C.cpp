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

#define oper min
#define INF 1e6+1
#define NEUT INF

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int b[n];
        int ans[2*n];
        fore(i,0,n) cin >> b[i];
        set<int> a;
        fore(i,0,2*n) a.insert(i+1);
        fore(i,0,n){
            ans[2*i] = b[i];
            a.erase(b[i]);
        }
        bool poss = true;
        fore(i,0,n){
            set<int>::iterator up = upper_bound(a.begin(),a.end(),b[i]);
            if(up != a.end()){
                ans[2*i+1] = *up;
                a.erase(up);
            } else {
                cout << -1<<'\n';
                poss =false;
                break;
            }
        }
        if(poss){
            fore(i,0,2*n-1)cout << ans[i] << ' ';
            cout << ans[2*n-1] <<'\n';
        }
    }
    return 0;
}
