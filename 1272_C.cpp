#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
using namespace std;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,k; cin >>n>>k;
    string s; cin >> s;
    set<char> av;
    while(k--){
        char c; cin >> c;
        av.insert(c);
    }
    string bin;
    fore(i,0,n) {
        if(av.find(s[i]) == av.end()) bin+='0';
        else bin+='1';
    }
    ll st,e,ans=0;
    fore(i,0,n){
        if(bin[i] == '1'){
            st=e=i;
            fore(j,i+1,n){
                if(bin[j]=='0') {e=j; break;}
                else e=j;
            }
            if(e==n-1 && bin[e]=='1') e=n;
            ans+=(e-st)*(e-st+1)/2;
            i=e;
        }
    }
    cout << ans<<'\n';
    return 0;
}
