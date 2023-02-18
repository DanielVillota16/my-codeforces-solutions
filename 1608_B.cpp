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
        int n,a,b; cin>>n>>a>>b;
        if(a+b<=n-2 && abs(a-b)<=1){
            if(a<b){
                for (int i=1; i<=2*b; i+=2) cout<<i+1<<' '<<i<<' ';
                fore(i,2*b+1,n) cout<<i<<' ';
                cout<<n<<endl;
            } else if(a>b){
                for (int i=n; i>=n-2*b; i-=2) cout<<i-1<<' '<<i<<' ';
                for (int i=n-2*b-2; i>1; i--) cout<<i<<' ';
                cout<<1<<endl;
            } else {
                cout<<1<<' ';
                for (int i=2; i<=2*b+1; i+=2) cout<<i+1<<' '<<i<<' ';
                fore(i,2*b+2,n) cout<<i<<' ';
                cout<<n<<endl;
            }
        } else cout<<-1<<endl;
    }
    return 0;
}