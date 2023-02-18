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
    int t; cin >> t;
    while(t--){
        string s;
        string ab="ab", ba="ba", aa="aa", bb="bb";
        int AB=0, BA=0;
        cin>>s;
        fore(i,0,s.length()-1){
            if(ab.compare(s.substr(i,2))==0) AB++;
            else if (ba.compare(s.substr(i,2))==0) BA++;
        }
        if(AB>BA){
            if(s.substr(0,2).compare(ab)==0 || s.substr(0,2).compare(aa)==0){
                s.replace(0,1,"b");
            }
        } else if(BA>AB){
            if(s.substr(0,2).compare(ba)==0 || s.substr(0,2).compare(bb)==0){
                s.replace(0,1,"a");
            }
        }
        cout<<s<<endl;
    }
    return 0;
}