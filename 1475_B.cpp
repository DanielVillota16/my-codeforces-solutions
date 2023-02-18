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
        int n; cin>>n;
        if(n<2020) cout<<"NO"<<endl;
        else {
            int rem = n%2020;
            int times = n/2020;
            if(times>=rem) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}