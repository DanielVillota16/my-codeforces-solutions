#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define CHECK_BIT(var,pos) (((var)>>(pos)) & 1)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

//1669H

int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        for(int i=30;i>=0;i--){
            int cnt=0;
            fore(j,0,n){
                if(CHECK_BIT(ar[j], i)==0){
                    cnt++;
                }
            }
            //cout<<i<<":"<<cnt<<" ";
            if(cnt<=k){
                fore(j,0,n){
                    ar[j] |= (1<<i);
                }
                k-=cnt;
            }
        }
        int ans=ar[0];
        fore(i,1,n){
            ans&=ar[i];
        }
        cout<<ans<<endl;
    }
	return 0;
}