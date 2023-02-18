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
        int k1=0, k2=0;
        fore(i,1,n) if(s[i]<s[i-1]) k1++; else break;
        k2=k1;
        fore(i,k1+1,n) if(s[i]<=s[i-1]) k2++; else break;
        string ans1 = s.substr(0,k1+1), rans1 = ans1;
        reverse(ALL(rans1));
        ans1+= rans1;
        string ans2 = s.substr(0,k2+1), rans2 = ans2;
        reverse(ALL(rans2));
        ans2+= rans2;
        string ans = ans1.compare(ans2)<0?ans1:ans2;
        cout<<ans<<endl;
    }
    return 0;
}