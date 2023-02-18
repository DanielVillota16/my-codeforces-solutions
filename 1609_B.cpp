#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,q; cin>>n>>q;
    string s; cin>>s;
    int ind; string c;
    int count=0;
    fore(i,0,n) if(s.substr(i,3).compare("abc")==0) count++;
    fore(i,0,q) {
        cin>>ind>>c;
        ind--;
        if(s.substr(ind,3).compare("abc")==0
            || (ind>0 && s.substr(ind-1,3).compare("abc")==0)
            || (ind>1 && s.substr(ind-2,3).compare("abc")==0)) count--;
        s[ind]=c[0];
        if(c[0]=='a'){
            if(s.substr(ind,3).compare("abc")==0) count++;
        } else if(c[0]=='b'){
            if(ind>0 && s.substr(ind-1,3).compare("abc")==0) count++;
        } else {
            if(ind>1 && s.substr(ind-2,3).compare("abc")==0) count++;
        }
        if(count<0) count=0;
        cout<<count<<endl;
    }
    return 0;
}