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
        int n; cin>>n;
        int ar[n];
        int max=0;
        int maxtake=0;
        fore(i,0,n) {cin>>ar[i]; if(max < ar[i]) {max=ar[i]; maxtake=i;} }
        bool taken[n]; fore(i,0,n) taken[i]=0;
        int res[n];
        res[0]=max;
        taken[maxtake]=1;
        int gcd=max;
        fore(i,1,n) {
        	int maxg=0;
        	int pos=0;
        	fore(j,0,n){
        		int cgcd = __gcd(gcd, ar[j]);
        		if(maxg<cgcd && !taken[j]) {maxg=cgcd; pos=j;}
        	}
        	if(!taken[pos]){
        		res[i]=ar[pos];
        		taken[pos]=1;
        	} else{
        		res[i]=ar[i];
        	}
        	gcd=maxg;
        }
        fore(i,0,n-1){
        	cout<<res[i]<<' ';
        }
        cout<<res[n-1]<<endl;
    }
    return 0;
}