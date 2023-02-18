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

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        ll k, x; cin>>k>>x;
        ll hi=k, lo=1;
        while(hi>lo){
            ll mid = (hi+lo)/2;
            ll count = (mid*(mid+1))/2;
            if(count<x) lo=mid+1;
            else hi=mid-1;
        }
        ll val = (lo*(lo+1))/2;
        if(val<x && lo<2*k-1){
            ll ans = lo;
            x-=val;
            hi=k-1, lo=1;
            ll ck=k-1;
            while(hi>=lo){
                ll mid = (hi+lo)/2;
                ll count = (ck*(ck+1))/2 - (mid*(mid+1))/2;
                if(count<x) hi=mid-1;
                else lo=mid+1;
            }
            ans+=ck-lo+1;
            cout<<ans<<endl;
        } else cout<<lo<<endl;
    }
    return 0;
}