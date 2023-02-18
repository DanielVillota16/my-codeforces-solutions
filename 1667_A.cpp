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
	int n; cin>>n;
    ll ar[n];
    fore(i,0,n) cin>>ar[i];
    ll fcnt=0x7FFFFFFFFFFFFFFF;
    fore(i,0,n){
        ll b[n];
        fore(j,0,n) b[j]=ar[j];
        b[i]=0;
        ll cnt=1;
        for(int j=i-1; j>0; j--){
            ll times = b[j]/b[j-1]+1;
            cnt+=times;
            b[j-1]*=times;
        }
        fore(j,i+1,n){
            ll times=b[j-1]/b[j]+1;
            cnt+=times;
            b[j]*=times;
        }
        //fore(i,0,n) cout<<b[i]<<" ";
        //cout<<endl;
        fcnt=min(fcnt,cnt);
        //cout<<fcnt<<endl;
    }
    cout<<fcnt<<endl;
	return 0;
}