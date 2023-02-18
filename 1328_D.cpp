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
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        int t[n];
        fore(i,0,n) cin >> t[i];
        bool alleq=true;
        fore(i,1,n){if(t[i] != t[i-1]){alleq=false; break;}}
        if(alleq){
            cout << 1<<'\n';
            fore(i,0,n-1) cout << 1 << ' ';
            cout << 1 <<'\n';
            continue;
        }
        if(n%2==0){
            cout << 2<<'\n';
            fore(i,0,n-1) cout << i%2+1 << ' ';
            cout << 2 <<'\n';
        } else {
            if(t[0]==t[n-1]){
                cout << 2<<'\n';
                fore(i,0,n-1) cout << i%2+1 << ' ';
                cout << 1 <<'\n';
            } else {
                int c[n];
                int l=0,r=0,cl=1;
                fore(i,1,n){
                    if(t[i] == t[i-1]){
                        l=i-1;r=i;
                        while(r<n && t[r]==t[l]){
                            r++;
                        }
                        r--;
                        break;
                    }
                }
                if(r==l){
                    cout << 3 <<'\n';
                    fore(i,0,n-1) cout << i%2+1 << ' ';
                    cout << 3 <<'\n';
                } else if(r<n-1){
                    if((r-l)%2==1){//hay un numero par de elementos en [l,r].
                        fore(i,0,l){
                            c[i]=i%2+1;
                        }
                        int j = l==0?0:c[l-1]==2?0:1;
                        fore(i,l,r+1){
                            c[i]=j%2+1;
                        }
                        j = j==0?1:0;
                        fore(i,r+1,n){
                            c[i]=j%2+1;
                            j++;
                        }
                    }else{
                        fore(i,0,l){
                            c[i]=i%2+1;
                        }
                        int j = l==0?0:c[l-1]==2?0:1;
                        fore(i,l,r){
                            c[i]=j%2+1;
                        }
                        j = j==0?1:0;
                        fore(i,r,n){
                            c[i]=j%2+1;
                            j++;
                        }
                    }
                    cout << 2 <<'\n';
                    fore(i,0,n-1) cout << c[i] << ' ';
                    cout << c[n-1] <<'\n';
                } else {
                    cout << 2 <<'\n';
                    fore(i,0,n-1) cout << i%2+1 << ' ';
                    cout << 2 <<'\n';
                }
            }
        }
    }
    return 0;
}
