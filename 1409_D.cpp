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
        ll n,s; cin>>n>>s;
        int steps=0; string nstr = to_string(n);
        for(int i=0; i<nstr.length(); i++) {int ni = (int)(nstr[i]-'0'); steps+=ni;}
        if(steps<=s) cout<<0<<endl;
        else{
        	int i;
        	for(i=nstr.length()-1; i>=0; i--) {
        		steps-=(int)(nstr[i]-'0');
        		if(steps<s) break;
        	}
        	if(i==0){
        		string res="1";
        		for(int j=0; j<nstr.length(); j++) res+='0';
        		ll nextn = stoll(res);
        		cout<<nextn-n<<endl;
        	} else {
        		string res=nstr.substr(0,i);
        		res=to_string(stoll(res)+1);
        		for(int j=i; j<nstr.length(); j++) res+='0';
        		ll nextn = stoll(res);
        		cout<<nextn-n<<endl;
        	}
        }
    }
    return 0;
}