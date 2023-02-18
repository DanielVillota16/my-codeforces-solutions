#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> ar(n);
        vector<int> removed(n,0);
        fore(i,0,n) cin>>ar[i];
        sort(ar.begin(), ar.end());
        int score = 0;
        for (int i = n - 1; i >= n-k; i--) score+= ar[i-k]/ar[i];
        fore(i,0,n-2*k)score+=ar[i];
        cout<<score<<endl;
    }
    return 0;
}