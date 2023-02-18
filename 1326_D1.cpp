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
    int t; cin >> t;
    while(t--){
        string s; cin >>s;
        string last,lastS,lastP; int n = s.length(), lastM=0, in = n;
        bool stopc = false;
        fore(i,0,n){
            if(s[i] == s[in-1-i] && i != in-1-i && !stopc) {lastS+= s[i];n--;}
            else stopc = true;
            lastP+= s[i];
            string revLastS = lastS;
            reverse(revLastS.begin(),revLastS.end());
            string poss = lastP+revLastS;
            bool isPal=true;
            int siz = poss.length();
            int lim = siz%2==0?siz/2:siz/2+1;
            fore(j,0,lim) {
                if(poss[j] != poss[siz-1-j]){
                    isPal=false;
                    break;
                }
            }
            if(isPal && siz > lastM) last = poss;
        }
        string wp = last;
        lastS = ""; lastP = ""; last =""; n = in; lastM=0;
        int unt = 0;
        stopc = false;
        for(int i = n-1;i >=unt;i--){
            if(s[i] == s[in-1-i] && i != in-1-i && !stopc) {lastP+= s[i];unt++;}
            else stopc = true;
            lastS+= s[i];
            string revLastS = lastS;
            reverse(revLastS.begin(),revLastS.end());
            string poss = lastP+revLastS;
            bool isPal=true;
            int siz = poss.length();
            int lim = siz%2==0?siz/2:siz/2+1;
            fore(j,0,lim) {
                if(poss[j] != poss[siz-1-j]){
                    isPal=false;
                    break;
                }
            }
            if(isPal && siz > lastM) last = poss;
        }
        if(wp.length() > last.length()) cout << wp << endl; else cout << last << endl;
    }
    return 0;
}
