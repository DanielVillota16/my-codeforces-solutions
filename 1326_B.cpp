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
    int n; cin >> n;
    int b[n], x[n], a[n];
    int M = INT_MIN;
    fore(i,0,n) {cin >> b[i];x[i]=0; a[i] = 0;}
    fore(i,0,n-1){
        a[i] = x[i]+b[i];
        if(M < a[i]) M = a[i];
        x[i+1] = M;
    }
    a[n-1] = x[n-1]+b[n-1];
    fore(i,0,n-1) cout << a[i] << " ";
    cout << a[n-1] << endl;
    return 0;
}
