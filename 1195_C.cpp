#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
using namespace std;
const int M=1e5+10;
ll ar[3][M];
int hs[2][M];
ll dp(int i, int n, int last){
    if(last == -1){
        if(i == n-1){
            ll index = max(hs[0][i], hs[1][i])== hs[0][i]?0:1;
            ar[index][i] = hs[index][i];
            return max(hs[0][i], hs[1][i]);
        }
        ll take0 = (ar[0][i] != -1)?ar[0][i]:dp(i+1,n,0) + hs[0][i];
        ll take1 = (ar[1][i] != -1)?ar[1][i]:dp(i+1,n,1) + hs[1][i];
        ll notTake = (ar[2][i] != -1)?ar[2][i]:dp(i+1,n,-1);
        ll maxx = max(take0, max(take1, notTake));
        ar[0][i]=take0;
        ar[1][i]=take1;
        ar[2][i]=notTake;
        return maxx;
    }
    if(last == 1){
        if(i == n-1) {
            ar[0][i] = hs[0][i];
            return hs[0][i];
        }
        ll take0 = ar[0][i] != -1?ar[0][i]:dp(i+1,n,0) + hs[0][i];
        ll notTake = ar[2][i]!= -1?ar[2][i]:dp(i+1,n,-1);
        ll maxx = max(take0, notTake);
        ar[0][i]=take0;
        ar[2][i]=notTake;
        return maxx;
    }
    if(last == 0){
        if(i == n-1) {ar[1][i] = hs[1][i];return hs[1][i];}
        ll take1 = ar[1][i] != -1?ar[1][i]:dp(i+1,n,1) + hs[1][i];
        ll notTake = ar[2][i] != -1?ar[2][i]:dp(i+1,n,-1);
        ll maxx = max(take1, notTake);
        ar[1][i]=take1;
        ar[2][i]=notTake;
        return maxx;
    }
}

int main() {FIN;
    int n; cin>>n;
    fore(i,0,3) fore(j,0,n) ar[i][j] = -1;
    fore(i,0,n) cin >> hs[0][i];
    fore(i,0,n) cin >> hs[1][i];
    cout << dp(0,n,-1) << endl;
    return 0;
}
