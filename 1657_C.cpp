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
        string s; cin>>s;
        s+="#";
        int cnt=0;
        char fst=s[0];
        int last=0;
        fore(i,1,n){
            if((fst=='(' && s[i]==')') || fst==s[i]){
                cnt++;
                fst=s[i+1];
                last=i+1;
                i++;
            }
        }
        cout<<cnt<<' '<<n-last<<endl;
    }
	return 0;
}