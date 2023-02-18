#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(ll i=a;i<=(n);++i)
#define repD(i,a,n) for(ll i=a;i>=(n);--i)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    bool ar[201];
    while(t--){
        int n,x;
        fill(ar,false);
        cin>>n>>x;
        rep(i,n) {
        	int pos; cin>>pos;
        	ar[pos]=true;
        }
        int ans=1;
        repA(i,2,200){
        	int con=0;
        	repA(j,1,i){
        		if(!ar[j]) con++;
        	}
        	if(con<=x) ans=i;
        }
        cout<<ans<<'\n';
    }
    return 0;
}