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
        int n,k;
        cin >>n>>k;
        int b1=n-1,b2=n;
        int con1=0,con2=1;
        string ans;
        fore(i,0,n) ans+='a';
        while(con1 < k){
            con1+=con2;
            con2++;
            b1--; b2--;
        }
        b2+=(con1-k);
        ans[b1] = 'b'; ans[b2]='b';
        cout << ans << '\n';
    }
    return 0;
}
