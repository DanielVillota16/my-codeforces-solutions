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

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    string s; cin >> s;
    int n = (int) s.length();
    vector<int> z = z_function(s);
    vector<int> poss;
    fore(i,1,n){
        if(z[i]+i==n) poss.pb(i);
    }
    for(int i:poss){
        fore(j,1,n-z[i]){
            if(z[j]>=z[i]){
                cout << s.substr(i,n-i) << '\n';
                return 0;
            }
        }
    }
    cout << "Just a legend\n";
    return 0;
}
