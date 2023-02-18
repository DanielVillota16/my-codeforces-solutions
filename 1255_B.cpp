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
    int t;
    cin >> t;
    fore(i,0,t){
        int n,m;
        cin >> n >> m;
        int ar[n];
        fore(j,0,n) cin >> ar[j];
        if(n == 2){
            cout << -1 << endl;
        } else {
            if(n == m){
                int cost = 0;
                int chains[n][2];
                fore(j,0,n-1) chains[j][0] = j+1 , chains[j][1] = j+2, cost += ar[j]+ ar[j+1];
                chains[n-1][0] = n;
                chains[n-1][1] = 1;
                cost += ar[n-1] + ar[0];
                cout << cost << endl;
                fore(j,0,n) cout << chains[j][0] << " " << chains[j][1] << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
