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

const int MAXN = 2e5+1;
int ar[MAXN][19];

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    fore(i,0,MAXN) fore(j,0,19) ar[i][j]=0;
    fore(i,0,19){
        int sum = 0;
        fore(j,1,2e5+1){
            if(j&(1<<i)) sum++;
            ar[j][i]=sum;
        }
    }
    int t; cin>>t;
    while(t--){
        int l, r; cin>>l>>r;
        int m=0;
        fore(i,0,19) m=max(ar[r][i]-ar[l-1][i],m);
        cout<<r-l+1-m<<endl;
    }
    
    return 0;
}