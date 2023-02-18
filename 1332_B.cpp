#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int nums[n],colors[n];
        fore(i,0,n) cin >> nums[i];
        int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int m=0;
        vector<int> used;
        fore(i,0,n){
            fore(j,0,11){
                if(nums[i]%primes[j]==0) {
                    int pos = -1;
                    fore(k,0,used.size()) if(used[k]==primes[j]) {pos = k; break;}
                    if(pos == -1){
                        used.pb(primes[j]);
                        colors[i] = used.size();
                    } else {
                        colors[i] = pos+1;
                    }
                    break;
                }
            }
        }
        cout << used.size()<<'\n';
        fore(i,0,n-1) cout << colors[i] <<' ';
        cout << colors[n-1]<<'\n';
    }
    return 0;
}
