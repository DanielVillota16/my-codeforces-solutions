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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        pair<int,int> ori(0,0);
        vector<pair<int,int> > points;
        points.pb(ori);
        int x=0,y=0;
        fore(i,0,n) {
            if(s[i] == 'L') x--;
            else if(s[i] == 'R') x++;
            else if(s[i] == 'U') y++;
            else y--;
            pair<int,int> p(x,y);
            points.pb(p);
        }
        map<pair<int,int>, vector<int>> st;
        n++;
        fore(i,0,n){
            st[points[i]].pb(i);
        }
        int l=0,r=0,dif=INT_MAX;
        for(auto e: st){
            fore(j,0,e.snd.size()-1){
                if(dif>e.snd[j+1]-e.snd[j]){
                    l=e.snd[j]; r = e.snd[j+1];
                    dif = r-l;
                }
            }
        }
        if(dif == INT_MAX)cout << -1 <<'\n';
        else cout << l+1 << ' ' << r << '\n';
    }

    return 0;
}
