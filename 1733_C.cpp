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
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        if(((ar[0])%2)^((ar[n-1])%2)) ar[n-1]=ar[0];
        else ar[0]=ar[n-1];
        bool fstodd = ar[0]%2;
        if(n==1){cout<<0<<endl; continue;}
        cout<<n-1<<endl;
        cout<<1<<' '<<n<<endl;
        fore(i,1,n-1) {
            bool currodd = ar[i]%2;
            if(fstodd^currodd) cout<<1<<' '<<i+1<<endl;
            else cout<<i+1<<' '<<n<<endl;
        }
    }
}