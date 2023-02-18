#include <bits/stdc++.h>
#include <math.h>

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
        ll n; cin>>n;
        while(n%2==0) n/=2;
        if(n>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}