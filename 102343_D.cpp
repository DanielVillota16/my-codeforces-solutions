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
    int n,p,c;
    cin >> n >> p;
    string tab[n-1];
    fore(i,0,n-1){
        cin >> tab[i];
    }
    cin >> c;
    queue<pair<int,string>> q;
    fore(i,0,c){
        int num;
        string color;
        cin >> num >> color;
        pair<int,string> par(num,color);
        q.push(par);
    }
    int positions[p+1];
    fore(i,0,p+1) positions[i] = -1;
    int player = 1;
    int winner = 0;
    while(winner == 0){
        pair<int,string> par = q.front();
        q.pop();
        q.push(par);
        int jump = par.fst;
        string color = par.snd;
        int start;
        bool found = false;
        if(jump == 1 || jump == 2){
            start = positions[player];
            fore(i,start+1,n-1){
                if(color == tab[i]){
                    if(jump == 1){
                        found = true;
                        positions[player] = i;
                        break;
                    } else {
                        jump--;
                    }
                }
            }
        } else {
            start = 0;
            fore(i,start,n-1){
                if(color == tab[i]){
                    positions[player] = i;
                    found = true;
                    break;
                }
            }
        }
        if(!found) winner = player;
        else{ if(player == p) player = 1; else player++; }
    }
    cout << winner << endl;
    return 0;
}
