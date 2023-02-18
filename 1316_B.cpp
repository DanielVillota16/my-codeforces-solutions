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
        int n; string s;
        cin >> n >> s;
        string mi = s;
        ll corr = 1;
        fore(k,1,n){
            string curr = s;
            if(s[k] <= s[0]){
                if((n-k)%2 == 0){
                    curr = s.substr(k, n-k) + s.substr(0,k);
                } else {
                    string sub = s.substr(0,k);
                    reverse(sub.begin(), sub.end());
                    curr = s.substr(k, n-k) + sub;
                }
            }
            if(curr.compare(mi) < 0) {mi = curr; corr = k+1;}
        }
        cout << mi << "\n" << corr << "\n";
    }
    return 0;
}
