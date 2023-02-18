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
    int t;
    cin >> t;
    fore(i,0,t){
        string word;
        cin >> word;
        size_t suf = word.rfind("o");
        if(suf == word.length()-1) {cout << "FILIPINO\n"; continue;}
        suf = word.rfind("u");
        if(suf == word.length()-1) {cout << "JAPANESE\n"; continue;}
        suf = word.rfind("a");
        if(suf == word.length()-1) {cout << "KOREAN\n"; continue;}
    }
    return 0;
}
