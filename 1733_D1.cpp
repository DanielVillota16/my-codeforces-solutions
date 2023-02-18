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
        ll n, x, y; cin>>n>>x>>y;
        string a, b; cin>>a>>b;
        ll uneq = 0;
        fore(i,0,n){
          if(a[i]!=b[i]) uneq++;
        }
        if(uneq%2){
          cout<<-1<<endl;
          continue;
        }
        if(uneq==2){
          bool isnext=false;
          fore(i,0,n){
            if(a[i]!=b[i]){
              if(a[i+1]!=b[i+1]){
                isnext=true;
                break;
              }
            }
          }
          ll ans=y;
          if(isnext) ans=min(x,2*y);
          cout<<ans<<endl;
          continue;
        }
        ll ans=(uneq/2)*y;
        cout<<ans<<endl;
    }
}