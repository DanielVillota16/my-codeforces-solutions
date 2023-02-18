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
        string s; cin>>s;
        int n=s.length();
        int ans=0;
        vector<bool> tochange(n);
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1] && !tochange[i-1]) tochange[i]=true;
            if(i>1 && s[i]==s[i-2] && !tochange[i-2]) tochange[i]=true;
            ans+=tochange[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}