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

//1671B

int main(){FIN;
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n];
        fore(i,0,n) cin>>ar[i];
        int dif3=0, dif2=0;
        string ans="YES";
        fore(i,0,n-1){
            if(ar[i+1]-ar[i]>3){
                ans="NO";
                break;
            } else if(ar[i+1]-ar[i]==3){
                dif3++;
            } else if(ar[i+1]-ar[i]==2){
                dif2++;
            }
        }
        if(dif3>1 or dif2>2 or (dif3==1 and dif2>=1)) ans="NO";
        cout<<ans<<endl;
    }
	return 0;
}