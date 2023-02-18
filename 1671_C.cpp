#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

//1671C

int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        ll ar[n];
        fore(i,0,n) cin>>ar[i];
        sort(ar, ar+n);
        ll sum=0, ans=0;
        fore(i,0,n) {
            sum+=ar[i];
            if(sum>x) break;
            ans+=(x-sum)/(i+1) + (sum<=x);
        }
        cout<<ans<<endl;
    }
	return 0;
}