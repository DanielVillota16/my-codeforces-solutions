#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n; cin>>n;
    vector<int> ar(n); fore(i,0,n) cin>>ar[i];
    fore(i,0,n) ar.push_back(ar[i]);
    int max = 0;
    fore(i,0,2*n){
        int cmax = 0;
        while(ar[i] && i<2*n) {cmax++; i++;}
        if(cmax>max) max=cmax;
    }
    cout<<max<<endl;
    return 0;
}