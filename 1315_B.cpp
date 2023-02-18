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
        int a,b,p; cin >>a>>b>>p;
        string s; cin >> s;
        int n = s.length();
        ll vals[n];
        vals[n-1]=s[n-1]=='A'?a:b;
        vals[n-2]=s[n-2]=='A'?a:b;
        for(int i=n-3;i>=0;i--){;
            if(s[i] == s[i+1]){
                vals[i]=vals[i+1];
            }else{
                ll val = s[i]=='A'?a+vals[i+1]:b+vals[i+1];
                vals[i]=val;
            }
        }
        ll ans = n;
        fore(i,0,n-1){
            if(vals[i] <= p) {
                ans = i+1;
                break;
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}
