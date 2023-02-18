#include <bits/stdc++.h>

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
        int n, x;
        cin >> n >> x;
        if(n>1){
            vector<int> posibles;
            int ranges[n];
            fore(i,0,n) cin >> ranges[i];
            int actual = 1;
            posibles.pb(1);
            fore(i,0,n-1){
                if(ranges[i] + x >= ranges[i+1]){
                    actual++;
                } else {
                    if(actual > 1){
                        posibles.pb(actual);
                        actual = 1;
                    }
                }
            }
            posibles.pb(actual);
            int m = posibles[0];
            fore(i,0,posibles.size()) if(posibles[i] > m) m = posibles[i];
            cout << m << "\n";
        } else {
            cout <<  1 << "\n";
        }
    return 0;
}
