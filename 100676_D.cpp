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
    fore(i,0,t){
        int mat[9][9];
        fore(j,0,9){
            string row; cin >> row;
            fore(k,0,9) mat[j][k] = row[k]-48;
        }
        bool invrows=false;
        bool invcols=false;
        fore(j,0,9){
            set<int> seenR;
            set<int> seenC;
            fore(k,0,9) {if(seenR.find(mat[j][k]) != seenR.end()) {invrows = true; break;} else seenR.insert(mat[j][k]);}
            fore(k,0,9){if(seenC.find(mat[k][j]) != seenC.end()) {invcols = true; break;} else seenC.insert(mat[k][j]);}
        }
        if(!invrows && !invcols){
            int last = 0;
            int lastt = 0;
            bool invcuad = false;
            fore(j,0,9){
                set<int> seen;
                fore(k,last,last+3){
                    fore(l,lastt,lastt+3){
                        if(seen.find(mat[k][l]) == seen.end()) seen.insert(mat[k][l]);
                        else {invcuad = true; break;}
                    }
                    if(invcuad) break;
                }
                if(invcuad) break;
                if(j==2 || j == 5) {last = 0; lastt += 3;} else {last+=3;}
            }
            if(!invcuad) cout << "Valid\n";
            else cout << "Invalid\n";
        } else cout << "Invalid\n";
    }
    return 0;
}
