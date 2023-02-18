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
    int t; cin >> t;
    fore(i,0,t){
        int n; cin >> n;
        ostringstream os;
        if(n > 1) { fore(j,0,n-1) { os << 9;} os << 8; cout << os.str() << endl;}
        else cout << -1 << endl;
    }
    return 0;
}
