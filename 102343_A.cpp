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
    int n,d; cin >> n>>d;
    int ar[n];
    int sum = 0;
    fore(i,0,n) {cin >> ar[i]; sum+= ar[i];}
    fore(i,0,n) cout << (d/sum)*ar[i]<<"\n";
    return 0;
}
