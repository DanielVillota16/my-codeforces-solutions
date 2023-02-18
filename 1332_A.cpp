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
    int t; cin >> t;
    while(t--){
        ll a,b,c,d,x,y,x1,y1,x2,y2;
        cin >>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if((a>0 && b>0 && x1==x2) || (c>0 && d>0 && y1==y2)) cout << "no\n";
        else{
            x+=b-a;
            y+=d-c;
            if(x1<=x && x2>= x && y1<= y && y2>= y)cout << "yes\n";
            else cout << "no\n";
        }
    }
    return 0;
}
