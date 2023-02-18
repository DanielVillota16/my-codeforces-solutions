#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

using namespace std;
typedef long long ll;

int solve(string s, string sub){
	int res=0;
	fore(i,0,s.size()-2) if(s.substr(i,2).compare(sub) == 0) res++;
	return res;
}
 
int main() {FIN;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string s1 = '1'+s+'0', s2 = '0'+s+'1';
		string sub0 = "00", sub1 = "11";
		int ans = min((solve(s1,sub0) + solve(s1,sub1)), (solve(s2, sub0) + solve(s2, sub1)));
		cout<<ans/2+ans%2<<endl;
    }
    return 0;
}