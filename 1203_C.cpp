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
    int n;
	cin >> n;
	ll g = 0;
	for (int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		g = __gcd(g, x);
	}
	int ans = 0;
	for (ll i = 1; i*i <= g; i++) {
		if (g%i == 0) {
			ans++;
			if (i != g/i) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
