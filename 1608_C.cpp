#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

void dfs(int v, vector<vector<int>> &g, vector<bool> &visited) {
    visited[v] = true;
    for (int u : g[v]) {
        if (!visited[u])
            dfs(u,g,visited);
    }
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,int>> a(n), b(n);
        vector<vector<int>> g(n);
        vector<bool> visited(n);
        fore(i,0,n) {cin>>a[i].first; a[i].second=i;}
        fore(i,0,n) {cin>>b[i].first; b[i].second=i;}
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        fore(i,0,n-1) g[a[i+1].second].push_back(a[i].second);
        fore(i,0,n-1) g[b[i+1].second].push_back(b[i].second);
        dfs(a[0].second, g, visited);
        fore(i,0,n) {
            int s = visited[i]?1:0;
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}