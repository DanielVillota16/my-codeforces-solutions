#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define limit 1e4+1
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
using namespace std;

int main() {FIN;
    int t; cin >> t;
    fore(i,0,t){
        int n; cin >> n;
        vector<int> vec;
        fore(j,0,n){int a; cin >> a; vec.pb(a);}
        sort(vec.begin(),vec.end());
        int con=0;
        fore(j,0,n){
            vector<int>::iterator low = lower_bound(vec.begin(),vec.end(),vec[j]+32);
            int pos = (low-vec.begin())-1;
            if(j < pos){
                if(abs(vec[j]-vec[pos]) < 32) con+=pos-j;
            }
        }
        cout << con << endl;
    }
    return 0;
}
