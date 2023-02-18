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
    int n; cin >> n;
    multiset<int> b;
    int a[n];
    int c[n];
    fore(i,0,n) cin >> a[i];
    fore(i,0,n) {
        int bi; cin >> bi;
        b.insert(bi);
    }
    fore(i,0,n){
        auto it = b.lower_bound(n-a[i]);
        if(it == b.end()){
            it = b.begin();
            c[i] = (a[i]+*it)%n;
            b.erase(it);
        } else {
            auto mini = b.begin();
            if((a[i]+*it)%n < (a[i]+*mini)%n){
                c[i] = (a[i]+*it)%n;
                b.erase(it);
            } else {
                c[i] = (a[i]+*mini)%n;
                b.erase(mini);
            }
        }
    }
    fore(i,0,n-1) cout << c[i]<<' ';
    cout << c[n-1] <<'\n';
    return 0;
}
