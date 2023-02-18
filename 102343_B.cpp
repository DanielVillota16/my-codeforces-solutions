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
    string s;
    cin >> s;
    map<char,int> hm;
    vector<pair<int,string>> fin;
    fore(i,0,s.length()){
        if(hm.find(s[i]) == hm.end()) hm.insert(pair<char,int>(s[i],1));
        else hm[s[i]]++;
    }
    for(auto p : hm) {
        string parc;
        fore(i,0,p.snd) parc+= p.fst;
        fin.pb(pair<int,string>(p.snd,parc));
    }
    string ans;
    fore(i,0,fin.size()){
        fore(j,i+1,fin.size()){
            if(fin[i].fst < fin[j].fst){
                pair<int,string> aux = fin[i];
                fin[i] = fin[j];
                fin[j] = aux;
            } else if(fin[i].fst == fin[j].fst){
                if(fin[i].snd > fin[j].snd) {
                    pair<int,string> aux = fin[i];
                    fin[i] = fin[j];
                    fin[j] = aux;
                }
            }
        }
    }
    for(auto ss : fin) ans += ss.snd;
    cout << ans << "\n";
    return 0;
}
