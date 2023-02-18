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
        int n,k; cin>>n>>k;
        if(k>n/2+n%2){
            cout<<-1<<endl;
            continue;
        }
        fore(i,0,n){
            fore(j,0,n){
                if(i==j && i%2==0 && k>0) {cout<<'R'; k--;}
                else cout<<'.';
            }
            cout<<endl;
        }
    }
    return 0;
}