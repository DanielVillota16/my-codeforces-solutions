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
        int n; cin>>n;
        string ar[n-2];
        char last='c';
        int index = -1;
        fore(i,0,n-2) {
            cin>>ar[i];
            if(last=='c') {
                last = ar[i][1];
                continue;
            }
            if(ar[i][0]!=last) index = i;
            last = ar[i][1];
        }
        string ans = "";
        if(index==-1){
            fore(i,0,n-2)cout<<ar[i][0];
            cout<<ar[n-3][1]<<"a"<<endl;
        } else {
            fore(i,0,n-2){
                ans+=ar[i][0];
                if(i+1==index){
                    ans+=ar[i][1];
                }
            }
            ans+=ar[n-3][1];
            cout<<ans<<endl;
        }
    }
    return 0;
}