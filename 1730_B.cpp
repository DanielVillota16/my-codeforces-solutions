#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
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
        int x[n], t[n];
        fore(i,0,n) cin>>x[i];
        fore(i,0,n) cin>>t[i];
        vector<int> x1;
        fore(i,0,n) {
            x1.push_back(x[i]+t[i]);
            x1.push_back(x[i]-t[i]);
        }
        int mx=x1[0], mn=x1[0];
        fore(i,0,2*n){
            mx=max(mx,x1[i]);
            mn=min(mn,x1[i]);
        }
        cout<<(mx+mn)/2;
        if((mx+mn)%2) cout<<".5";
        cout<<endl;
    }
}