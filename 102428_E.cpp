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
    string in;
    ll s, sum = 0;
    cin >> in >> s;
    string dup = in+in;
    vector<int> posit;
    fore(i,0,in.length()) { if(in[i] == 'E') {posit.pb(i); posit.pb(in.length()+i);}}
    sort(posit.begin(), posit.end());
    if(!posit.empty()){
        fore(i,0,in.length()){
            if(in[i] == 'E') sum+= s;
            else {
                int pos = upper_bound(posit.begin(), posit.end(), i) - posit.begin();
                if(pos < posit.size()){
                    if(i+s-1 >= posit[pos]){
                        sum+= s-(posit[pos]-i);
                    }
                }
            }
        }
        cout << sum << "\n";
    } else cout << 0 << "\n";
    return 0;
}
