#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n; cin>>n;
    string l,r; cin>>l>>r;
    vector<char> lv(n), rv(n);
    fore(i,0,n) lv[i]=l[i]; sort(ALL(lv));
    fore(i,0,n) rv[i]=r[i]; sort(ALL(rv));
    map<char, list<int>> ml, mr;
    fore(i,0,n) ml[l[i]].push_back(i);
    fore(i,0,n) mr[r[i]].push_back(i);
    vector<pair<int, int>> ans;
    char q = '?';
    fore(i,0,n){
        char c = lv[i];
        if(c != q){
            if(mr[c].size()>0){
                int j = mr[c].front();
                mr[c].pop_front();
                int k = ml[c].front();
                ml[c].pop_front();
                ans.push_back({k, j});
            }
        }
    }
    fore(i,0,n){
        char c = lv[i];
        if(c != q){
            if(mr[q].size()>0 && ml[c].size()>0){
                int j = mr[q].front();
                mr[q].pop_front();
                int k = ml[c].front();
                ml[c].pop_front();
                ans.push_back({k, j});
            }
        }
    }
    fore(i,0,n){
        char c = rv[i];
        if(c != q){
            if(ml[q].size()>0 && mr[c].size()>0){
                int k = ml[q].front();
                ml[q].pop_front();
                int j = mr[c].front();
                mr[c].pop_front();
                ans.push_back({k, j});
            }
        }
    }
    fore(i,0,n){
        char c = rv[i];
        if(c == q){
            if(ml[q].size()>0 && mr[q].size()>0){
                int k = ml[q].front();
                ml[q].pop_front();
                int j = mr[q].front();
                mr[q].pop_front();
                ans.push_back({k, j});
            }
        }
    }
    cout<<SZ(ans)<<endl;
    fore(i,0,SZ(ans)) cout<<ans[i].first+1<<' '<<ans[i].second+1<<endl;
    return 0;
}