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
    int t; cin >> t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        cout << max(0LL,max(b,c)+1-a) <<" ";
        cout << max(0LL,max(a,c)+1-b) <<" ";
        cout << max(0LL,max(a,b)+1-c) << endl;
    }
    return 0;
}