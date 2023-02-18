#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}

ll solve(ll ans, vector<ll> ar, ll evens, ll odds){
    if(ans==evens){
        for(int i = 1; i < ar.size(); i+=2){
            if(ar[i]%ans==0) {
                ans=0;
                break;
            }
        }
    } else {
        for(int i = 0; i < ar.size(); i+=2){
            if(ar[i]%ans==0) {
                ans=0;
                break;
            }
        }
    }
    return ans;
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> ar(n,0);
        //ll ar[n];
        fore(i,0,n) cin>>ar[i];
        ll evens=0, odds=0;
        for (int i = 0; i < n; i+=2) evens = gcd(evens,ar[i]);
        for (int i = 1; i < n; i+=2) odds = gcd(odds,ar[i]);
        ll mx = max(evens,odds);
        ll mn = min(evens,odds);
        ll ans1 = solve(mx,ar,evens,odds);
        ll ans2 = solve(mn,ar,evens,odds);
        if(ans1!=0)cout<<ans1<<endl;
        else if(ans2!=0)cout<<ans2<<endl;
        else cout<<0<<endl;
        
    }
    return 0;
}