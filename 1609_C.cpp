#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int n=1e6;
vector<bool> is_prime(n+1, true);
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    sieve();
    int t; cin>>t;
    while(t--){
        int n,e; cin>>n>>e;
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        ll ans=0;
        vector<ll> ones_l(n,-1), ones_r(n,-1);
        for (int i = 0; i < e; i++) {
            int count=0;
            for (int j = i; j < n; j+=e){
                ones_l[j]=count;
                if(ar[j]==1) count++;
                else count=0;
            }
        }
        for (int i = n-1; i >= n-e; i--) {
            int count=0;
            for (int j = i; j >= 0; j-=e){
                ones_r[j]=count;
                if(ar[j]==1) count++;
                else count=0;
            }
        }
        fore(i,0,n){
            if(is_prime[ar[i]]) ans+=ones_l[i]+ones_r[i]+ones_l[i]*ones_r[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}