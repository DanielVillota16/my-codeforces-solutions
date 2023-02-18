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
    fore(i,0,n){
        int a,b,x,y;
        cin >> a >> b>> x >> y;
        cout << max(max((a-x-1)*b,(x*b)), max((b-y-1)*a,y*a)) <<"\n";
    }
    return 0;
}