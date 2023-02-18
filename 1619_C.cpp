#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        string a, s; cin>>a>>s;
        string b;
        int i=s.size()-1, j=a.size()-1;
        while(i>=0 && j>=0){
            int cs=s[i]-48, ca=a[j]-48;
            if(cs>=ca) b.insert(b.begin(),cs-ca+48);
            else {
                if(i-1>=0 && s[i-1]=='1') b.insert(b.begin(), 10+cs-ca+48);
                else { b = "-1"; break; }
                i--;
            }
            i--; j--;
        }
        if(j>=0) b="-1";
        else while(i>=0) b.insert(b.begin(), s[i--]);
        cout<<stoll(b)<<endl;
    }
    return 0;
}