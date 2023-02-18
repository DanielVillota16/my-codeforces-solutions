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
    int n,a; cin>>n>>a;
    a--;
    int ar[n]; fore(i,0,n) cin>>ar[i];
    int count=0;
    if(ar[a]) count++;
    fore(i,1,n) {
        if(a-i>=0 && a+i<n) {if(ar[a+i]+ar[a-i]==2) count+=2;}
        else if(a-i>=0) {if(ar[a-i]) count++;}
        else if(a+i<n) {if(ar[a+i]) count++;}
        else break;
    }
    cout<<count<<endl;
    return 0;
}