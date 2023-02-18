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

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,a,b,k,points=0; cin >>n>>a>>b>>k;
    int ar[n];
    fore(i,0,n) {
        cin >> ar[i];
        ar[i]%= a+b;
        if(ar[i] ==0) ar[i] = a+b;
        ar[i] = ceil(((double)ar[i])/((double)a))-1;
    }
    sort(ar,ar+n);
    fore(i,0,n){
        if(ar[i] <= k){
            k-=ar[i];
            points++;
        }
    }
    cout << points <<'\n';
    return 0;
}
