#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        sort(ar,ar+n);
        reverse(ar,ar+n);
        bool seg=0, one=0;
        fore(i,0,n){
            if(ar[i]==1) one=1;
            if(i<n-1 && ar[i+1]+1==ar[i]) seg=1;
        }
        string ans=one&&seg?"NO":"YES";
        cout<<ans<<endl;
    }
	return 0;
}