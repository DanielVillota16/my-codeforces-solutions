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

const int MOD = 1e9+7;
const int maxN = 2000+10;
vector<int> g[maxN];
bool visited[maxN];
ll ways[maxN];
ll numL = 0;

void dfs(int src){
    visited[src] = true;
    if(g[src].empty()){
        ways[src] = 1;
        numL++;
    } else {
        for(auto v : g[src]){
            if(!visited[v]) dfs(v);
            ways[src] += ways[v]%MOD;
        }
    }
}

int main() {FIN;
    int n, l;
    cin >> n >> l;
    fore(i,0,maxN) {visited[i] = false; ways[i] = 0;}
    fore(i,1,l+1){
        int k;
        cin >> k;
        while(k--){
            int vert;
            cin >> vert;
            g[i].pb(vert);
        }
    }
    dfs(1);
    cout << ways[1]%MOD << " " << numL%MOD << "\n";
    return 0;
}
