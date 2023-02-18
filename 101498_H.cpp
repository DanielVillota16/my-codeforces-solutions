#include <bits/stdc++.h>

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
        while(t--){
            int n, s;
            cin >> n >> s;
            if(s == 1){
                    if(n == 1){
                        cout << 1 << "\n";
                    } else {
                        cout << -1 << "\n";
                    }
            } else if(n == 1 && s < 10){
                cout << s << "\n";
            } else if(n == 1 && s >= 10){
                cout << -1 << "\n";
            } else {
                int ar[n];
                //fore(k,0,n) ar[k] = 0;
                int i = 0, j = n-1;
                while(i <= j){
                    int aux;
                    if(i == j){
                        aux = s;
                    } else {
                        aux = s/2;
                    }
                    if(aux > 9) aux = 9;
                    ar[i] = aux;
                    ar[j] = aux;
                    if(i == j) s -= aux;
                    else s-= 2*aux;
                    i++;
                    j--;
                }
                if(s > 0){
                    cout << -1 << "\n";
                } else {
                    fore(k,0,n) cout << ar[k];
                    cout << "\n";
                }
            }
        }
    return 0;
}
