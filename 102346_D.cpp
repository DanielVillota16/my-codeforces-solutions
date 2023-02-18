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
    int n,k; cin >> n >> k;
    int parents[n+1];
    parents[1]=0;
    vector<int> tree[n+1];
    fore(i,2,n+1) {cin >> parents[i]; tree[parents[i]].pb(i);}
    vector<pair<pair<int,int>,int> > leaves;
    fore(i,1,n+1){
        if(tree[i].empty()) {
            pair<int,int> vals(0,0);
            pair<pair<int,int>,int> p(vals,i);
            leaves.pb(p);
        }
    }
    fore(i,0,leaves.size()) {
        int curr = leaves[i].snd, level=1;
        while(curr != 0) {curr = parents[curr]; level++;}
        leaves[i].fst.fst = level;
    }
    sort(leaves.rbegin(),leaves.rend());
    bool seen[n+1]; fore(i,0,n+1) seen[i]= false;
    vector<int> results;
    fore(i,0,leaves.size()){
        int curr = leaves[i].snd;
        int pa = 0;
        while(curr != 0) {
            if(!seen[curr]){
                pa++;
                seen[curr] = true;
                curr = parents[curr];
            } else break;
        }
        results.pb(pa);
    }
    int ans =0;
    sort(results.rbegin(), results.rend());
    fore(i,0,k) ans+= results[i];
    cout << ans << endl;
    return 0;
}
