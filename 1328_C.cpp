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
    int t; cin >> t;
    while(t--){
        int n; string x; cin >>n >> x;
        string a,b;
        int last=n;
        fore(i,0,n){
            if(x[i] == '2'){
                a+='1';
                b+='1';
            } else if(x[i] == '0'){
                a+='0';
                b+='0';
            } else{
                a+='1';
                b+='0';
                last=i;
                break;
            }
        }
        if(n==last){
            cout <<a<<'\n'<<b<<'\n';
            continue;
        }
        while(n-(++last)){
            a+='0';
            b+=x[last];
        }
        cout <<a<<'\n'<<b<<'\n';
    }
    return 0;
}
