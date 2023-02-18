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
        if(n%2==0) cout<<n-3<<' '<<2<<' '<<1<<endl;
        else {
            fore(i,2,n){
                if(gcd(n-i-1,i)==1) {cout<<n-i-1<<' '<<i<<' '<<1<<endl; break;}
            }
        }
    }
    return 0;
}