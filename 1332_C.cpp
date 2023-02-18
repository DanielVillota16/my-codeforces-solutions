#include <bits/stdc++.h>
#include <math.h>

#define pb push_back
#define fst first
#define snd second
#define fill(a,c) memset(&a, c, sizeof(a))
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin >> t;
    while(t--){
        int n,k; cin >>n >>k;
        string s; cin >> s;
        int cgs=0;
        if(k%2==0){
            fore(i,0,k/2){
                map<char,int> lt;
                int it=1;
                for(int j=i; j < n; j+=k){
                    lt[s[j]]++;
                    lt[s[it*k-i-1]]++;
                    it++;
                }
                int mf =0;
                for(auto e: lt){
                    if(e.snd>mf) {
                        mf=e.snd;
                    }
                }
                cgs+=mf;
            }
            cout << n-cgs<<'\n';
        } else {
            fore(i,0,k/2+1){
                map<char,int> lt;
                if(i==k/2){
                    for(int j=i; j < n; j+=k){
                        lt[s[j]]++;
                    }
                } else {
                    int it=1;
                    for(int j=i; j < n; j+=k){
                        lt[s[j]]++;
                        lt[s[it*k-i-1]]++;
                        it++;
                    }
                }
                int mf =0;
                for(auto e: lt){
                    if(e.snd>mf) {
                        mf=e.snd;
                    }
                }
                cgs+=mf;
            }
            cout <<n-cgs<<'\n';
        }
    }
    return 0;
}
