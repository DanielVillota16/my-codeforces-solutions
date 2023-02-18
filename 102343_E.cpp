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
    int n,k;
    cin >> n >> k;
    set<int> primes;
    fore(i,2,n+1) {
        bool prime = true;
        for(int j = 2; j*j <= i; j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime) primes.insert(i);
    }
    bool found = false;
    int nprime = n+1;
    while(!found){
        found = true;
        for(int j = 2; j*j <= nprime; j++){
            if(nprime%j == 0){
                found = false;
            }
        }
        if(!found) nprime++;
    }
    int ans = nprime*nprime;
    while(--k){
        ans++;
        bool foundn = false;
        while(!foundn){
            for(int i = 2; i*i <= ans; i++){
                if(ans%i == 0){
                    foundn = true;
                    break;
                }
            }
            if(!foundn) ans++;
        }
        for(int i : primes){
            if(ans%i == 0){
                k++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
