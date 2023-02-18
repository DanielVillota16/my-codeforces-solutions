#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

using namespace std;
typedef long long ll;

int main(){FIN;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        fore(i,0,n) cin>>ar[i];
        int ans=0;
        fore(i,1,n) ans+=ar[i]/(ar[0]*2-1)-(ar[i]%(ar[0]*2-1)==0);
        cout<<ans<<endl;
    }
}