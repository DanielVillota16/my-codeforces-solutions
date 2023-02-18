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
        string s; cin>>s;
        vector<int> fts,lts, ms;
        fore(i,0,n){
            if(s[i]=='T'){
                if(fts.size() < n/3) fts.push_back(i);
                else lts.push_back(i);
            } else ms.push_back(i);
        }
        string ans="YES";
        if(ms.size()==fts.size())
        fore(i,0,ms.size()){
            if(fts[i]<ms[i] && ms[i]<lts[i]) continue;
            ans="NO";
        } else ans = "NO";
        cout<<ans<<endl;
    }
    return 0;
}