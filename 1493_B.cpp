#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

vector<char> valid({'0','1','2','5','8'});

bool verify(string s, int h, int m){
    string hour = s.substr(0,2);
    string min = s.substr(3,2);
    set<char> svalid; for(char i: valid) svalid.insert(i);
    for(char i: s) if(svalid.find(i) == svalid.end() && i!=':') return false;
    if(stoi(hour)<h && stoi(min)<m){
        reverse(s.begin(), s.end());
        fore(i,0,5){
            if(s[i]=='5') s[i]='2';
            else if(s[i]=='2') s[i]='5';
        }
        hour = s.substr(0,2);
        min = s.substr(3,2);
        if(stoi(hour)<h && stoi(min)<m) 
            return true;
    }
    return false;
}

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int h,m; cin>>h>>m;
        string s; cin>>s;
        string cs=s;
        if(verify(s,h,m)) {cout<<s<<endl; continue;}
        for(int i=4; i>=0; i--){
            if(i==2) continue;
            if(verify(s,h,m) && s.compare(cs)>0) break;
            bool invalid=true;
            int pos=0;
            fore(j,0,5) {
                if(valid[j]>s[i]){
                    pos=j;
                    break;
                }
            }
            if(pos>0){
                fore(j,pos,5) {
                    s[i]=valid[j];
                    if(verify(s,h,m) && s.compare(cs)>0) {invalid=false; break;}
                }
                if(invalid) {
                    s[i]='0';
                    if(i>0){
                        int k = i==3?i-2:i-1;
                        s[k]=s[k]=='9'?'0':s[k]+1;
                    }
                } else 
                    break;
            } else {
                s[i]='0';
                if(i>0){
                    int k = i==3?i-2:i-1;
                    s[k]=s[k]=='9'?'0':s[k]+1;
                }
            }
        }
        if(s.compare(cs)<0) s="00:00";
        cout<<s<<endl;
    }
    return 0;
}