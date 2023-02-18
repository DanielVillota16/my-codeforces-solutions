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

        int n;
        cin >> n;
        int rob[n];
        int bio[n];
        fore(i,0,n) cin >> rob[i];
        fore(i,0,n) cin >> bio[i];
        int r = 0, b = 0;
        fore(i,0,n) {
            if(rob[i] > bio[i]) r++;
            else if(rob[i] < bio[i]) b++;
        }
        if(r > 0 && b >= r) cout << b/r + 1 << "\n";
        else if(r > 0 && b < r) cout << 1 << "\n";
        else cout << -1 << "\n";
    return 0;
}
