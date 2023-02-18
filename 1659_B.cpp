#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

//1659B

int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string bin; cin>>bin;
        vector<int> ar(n,0);
        int ones,zeroes;
        if(k%2){
            ones=1; zeroes=0;
        } else {
            ones=0; zeroes=1;
        }
        int ck=k;
        fore(i,0,n){
            int cnt;
            if(bin[i]=='1'){
                cnt=ones;
            } else {
                cnt=zeroes;
            }
            cnt=min(cnt,k);
            ar[i]=cnt;
            k-=cnt;
            if(k==0) break;
        }
        if(k){
            ar[n-1]+=k;
        }
        fore(i,0,n){
            int times=(ck-ar[i])%2;
            if(times){
                if(bin[i]=='1'){
                    bin[i]='0';
                } else {
                    bin[i]='1';
                }
            }
        }
        cout<<bin<<endl;
        fore(i,0,n) cout<<ar[i]<<" ";
        cout<<endl;
    }
	return 0;
}