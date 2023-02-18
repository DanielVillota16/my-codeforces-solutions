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
    int t;
    cin >> t;
    fore(i,0,t){
        int n,m;
        cin >> n >> m;
        int ar[n];
        fore(j,0,n) cin >> ar[j];
        int k = 1;
        while(ar[0] < m && k < n){
            if(ar[k] + ar[0] > m){
                ar[0] = m;
            } else {
                ar[0] += ar[k];
            }
            k++;
        }
        cout << ar[0] << "\n";
    }
    return 0;
}
