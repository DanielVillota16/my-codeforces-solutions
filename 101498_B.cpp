#include <bits/stdc++.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
using namespace std;

int main() {FIN;
    int t;
        cin >> t;
        fore(i,0,t){
            string a, b;
            cin >> a >> b;
            map<char, int> hp;
            fore(j,0,b.length()){ hp[b[j]]++; }
            int count = 0;
            fore(j,0,a.length()){
                if(hp.find(a[j]) != hp.end()){
                    hp[a[j]]--;
                    if(hp[a[j]] >= 0){
                        count++;
                    }else {
                        break;
                    }
                } else {
                    break;
                }
            }
            cout << count << "\n";
        }
    return 0;
}
