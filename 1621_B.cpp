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

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int minl=0x7FFFFFFF, maxr=0, lc=0x7FFFFFFF, rc=0x7FFFFFFF, maxSize=0, cMax=0x7FFFFFFF;
        fore(i,0,n){
            int l,r,c; cin>>l>>r>>c;
            if(l<minl) minl=l, lc=c;
            if(l==minl) lc=min(lc,c);
            if(r>maxr) maxr=r, rc=c;
            if(r==maxr) rc=min(rc,c);
            if(maxSize<r-l+1) maxSize = r-l+1, cMax=c;
            if(maxSize==r-l+1) cMax = min(cMax, c);
            int ans = lc+rc;
            if(maxSize==maxr-minl+1) ans=min(ans,cMax);
            cout<<ans<<endl;
        }
    }
    return 0;
}