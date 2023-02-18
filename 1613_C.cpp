#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        ll n,h; cin>>n>>h;
        ll ar[n];
        fore(i,0,n) cin>>ar[i];
        ll hi=h, lo=0, k=0;
        while(hi>=lo){
            ll mid = (hi+lo)/2, ch=h-mid;
            fore(i,0,n-1){
                ch-= ar[i]+mid>=ar[i+1]?ar[i+1]-ar[i]:mid;
            }
            if(ch>0) lo = mid+1;
            else hi = mid-1;
        }
        k=lo;
        cout<<k<<endl;
    }
    return 0;
}