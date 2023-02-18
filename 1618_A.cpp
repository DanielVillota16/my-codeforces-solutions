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
    int t; cin >> t;
    while(t--){
        int ar[7];
        fore(i,0,7) cin>>ar[i];
        int thrd = ar[2];
        if(ar[0]+ar[1]==ar[2]){
            thrd = ar[3];
        }
        cout<<ar[0]<<" "<<ar[1]<<" "<<thrd<<endl;
    }
    return 0;
}