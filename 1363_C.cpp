#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define foreD(i,x,y) for(ll i=x;i>=y;i--)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
typedef long long ll;

int main() {FIN;
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        if(n==1){ cout<<"Ayush"<<endl; continue; }
        int deg[n+1];
        fill(deg,0);
        fore(i,1,n){
        	int u,v; cin>>u>>v;
        	deg[u]++;
        	deg[v]++;
        }
        if(deg[x]==1) cout<<"Ayush"<<endl;
        else{
        	if(n%2==1) cout<<"Ashish"<<endl;
        	else cout<<"Ayush"<<endl;
        }
    }
    return 0;
}