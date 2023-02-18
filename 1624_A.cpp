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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> st;
        vector<int> ar;
        fore(i,0,n) {
            int x; cin>>x;
            st.insert(x);
        }
        for(int e: st) ar.push_back(e);
        int ans=0;
        fore(i,1,SZ(ar)){
            ans+=ar[i]-ar[i-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}