#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
 
using namespace std;
typedef long long ll;
 
int main(){FIN;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int hi=n-5, lo=1;
        int its=32;
        while(hi>lo && its--){
            int l1=lo+(hi-lo)/2, l2=1, l3=n-3-l1-l2;
            int l4=l1-1, l5=1, l6=n-3-l4-l5;
            if(l4<1) break;
            int cur_mn=min({abs(l1-l2), abs(l2-l3), abs(l3-l1)});
            int prev_mn=min({abs(l4-l5), abs(l4-l6), abs(l5-l6)});
            if(cur_mn>prev_mn) lo=l1;
            else hi=l1-1;
        }
        int l1=lo, l2=1, l3=n-3-l1-l2;
        int ans1=min({abs(l1-l2), abs(l2-l3), abs(l3-l1)});
        int l4=hi, l5=1, l6=n-3-l4-l5;
        int ans2=min({abs(l4-l5), abs(l4-l6), abs(l5-l6)});
        ans1=max(ans1,ans2);
        cout<<ans1<<endl;
        
    }
}