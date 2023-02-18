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
        ll a=1, b=1, i=2;
        set<int> count; count.insert(1);
        while(a<n){
            a=i*i; b=i*i*i;
            if(a<=n) count.insert(a);
            if(b<=n) count.insert(b);
            i++;
        }
        cout<<count.size()<<endl;
    }
    return 0;
}