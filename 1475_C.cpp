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
        int a,b,k; cin>>a>>b>>k;
        int ar[k], br[k];
        map<int,int> amp,bmp;
        fore(i,0,k) {
            cin>>ar[i];
            amp[ar[i]]++;
        }
        fore(i,0,k) {
            cin>>br[i];
            bmp[br[i]]++;
        }
        ll count=0;
        fore(i,0,k) count += k-amp[ar[i]]-bmp[br[i]]+1;
        cout<<count/2<<endl;
    }
    return 0;
}