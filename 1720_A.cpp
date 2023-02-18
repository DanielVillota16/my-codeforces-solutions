#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

using namespace std;
typedef long long ll;

int main(){FIN;
    int t; cin>>t;
    while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        if(a*d==b*c) {cout<<0<<endl; continue;}
        int ans = 2;
        if(a == 0) ans--;
        if(c == 0) ans--;
        if(ans == 2 && max(a*d,b*c)%min(a*d,b*c)==0) ans--;
        cout<<ans<<endl;
    }
}