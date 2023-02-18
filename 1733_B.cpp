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

int main(){FIN;
    int t; cin>>t;
    while(t--){
        int n,x,y; cin>>n>>x>>y;
        if((x!=0 && y!=0) || (x==0 && y==0)) {
            cout<<-1<<endl;
            continue;
        }
        if(x==0){
            if((n-1)%y==0){
                for(int i=2; i<=n; i+=y){
                    fore(j,i,i+y) cout<<i<<' ';
                }
                cout<<endl;
            } else cout<<-1<<endl;
            continue;
        }
        if((n-1)%x==0){
            for(int i=2; i<=n; i+=x){
                fore(j,i,i+x) cout<<i<<' ';
            }
            cout<<endl;
        } else cout<<-1<<endl;
    }
}