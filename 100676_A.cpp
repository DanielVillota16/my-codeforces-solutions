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
    fore(i,0,t){
        int a,b;
        string op;
        cin >> a >> op >> b;
        if(op == "<") {string ans = (a < b)?"true":"false"; cout << ans << endl;}
        else if(op == ">") {string ans = (a > b)?"true":"false"; cout << ans << endl;}
        else if(op == ">=") {string ans = (a >= b)?"true":"false"; cout << ans << endl;}
        else if(op == "<=") {string ans = (a <= b)?"true":"false"; cout << ans << endl;}
        else if(op == "==") {string ans =(a == b)?"true":"false"; cout <<  ans<< endl;}
        else if(op == "!=") {string ans = (a != b)?"true":"false"; cout << ans<< endl;}
    }
    return 0;
}
