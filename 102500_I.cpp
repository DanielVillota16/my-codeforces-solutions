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
    int n; cin>>n;
    int ar[n], sar[n];
    fore(i,0,n) {cin>>ar[i]; sar[i]=ar[i];}
    sort(sar,sar+n);
    int last = sar[0], ind=0, fdind=0;
    fore(i,0,n) {
        if(sar[i]==ar[i]){
            continue;
        }
        last=sar[i]; ind=i;
        break;      
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if(ar[i]==last) {fdind = i; break;}
    }
    vector<int> ans;
    fore(i,0,ind){
        ans.push_back(ar[i]);
    }
    for (int i = fdind; i >= ind; i--)
    {
        ans.push_back(ar[i]);
    }
    fore(i,fdind+1,n) ans.push_back(ar[i]);
    bool sorted = true;
    fore(i,0,n) if(ans[i]!=sar[i]) {sorted=false; break;}
    
    if(sorted) cout<<ind+1<<' '<<fdind+1<<endl;
    else cout<<"impossible"<<endl;
    return 0;
}