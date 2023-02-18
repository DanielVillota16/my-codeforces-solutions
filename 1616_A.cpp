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
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        map<int, int> mp;
        fore(i,0,n) if(mp[abs(ar[i])]<2) mp[abs(ar[i])]++;
        int count=0;
        for(auto e: mp){
            if(e.first==0) count++;
            else count+= e.second;
        }
        cout<<count<<endl;
    }
    return 0;
}