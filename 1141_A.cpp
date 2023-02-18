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

vector<ll> trial_division2(ll n) {
    vector<ll> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (ll d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

int solve(int n, int m){
    if(m/n>1 && m%n==0){
        vector<ll> res = trial_division2(m/n);
        for(ll e: res) if(e!=2 && e!=3) return -1;
        return SZ(res);
    } else if(m/n==1 && m%n==0) return 0;
    else return -1;
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,m; cin>>n>>m;
    cout<<solve(n,m)<<endl;
    return 0;
}