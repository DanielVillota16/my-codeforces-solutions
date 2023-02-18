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
        int n,k; cin>>n>>k;
        int start=k/2;
        if(k%2) start=k/2+1;
        cout<<n-start<<endl;
        fore(i,start,n){
            if(i==k) continue;
            cout<<i<<' ';
        }
        if(start==n) cout<<endl<<endl;
        else{
            if(n!=k) cout<<n<<endl;
            else cout<<endl;
        }
    }
    return 0;
}