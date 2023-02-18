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
    fore(i,0,n){
        int x; cin>>x;
        int c1=0x7fffffff,c2=0x7fffffff,c3=0x7fffffff;
        if(x%32768==0) c1=0;
        if(x<32768) c2=32768-x;
        fore(j,0,16){
            int tmp=x+j;
            int cnt=j;
            while(tmp%32768!=0){
                tmp*=2;
                tmp%=32768;
                cnt++;
            }
            c3=min(cnt,c3);
        }
        cout<<min({c1,c2,c3})<<" ";
    }
	return 0;
}