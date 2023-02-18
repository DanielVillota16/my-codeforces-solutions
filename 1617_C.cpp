#include <bits/stdc++.h>
#include <math.h>

#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define ALL(s) s.begin(),s.end()
#define PI acos(-1)
#define SZ(x) ((int)(x).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

using namespace std;
typedef long long ll;

int main() {FIN;
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n);
        fore(i,0,n) cin>>ar[i];
        sort(ALL(ar));
        map<int, int> mp;
        set<int> st;
        fore(i,0,n) if(ar[i]<=n) mp[ar[i]]++;
        fore(i,1,n+1) if(!mp[i]) st.insert(i);
        int ans=n;
        for(auto e:mp) if(e.second) ans--;
        fore(i,0,n) {
            auto pos = st.begin();
            if(mp[ar[i]]>1){
                if(ar[i]%2){
                    if(ar[i]/2<*pos){
                        ans=-1; break;
                    }
                } else{
                    if(ar[i]/2<=*pos){
                        ans=-1; break;
                    }
                }
                mp[ar[i]]--;
                st.erase(*pos);
            } else if(mp[ar[i]]==0){
                if(ar[i]%2){
                    if(ar[i]/2<*pos){
                        ans=-1; break;
                    }
                } else{
                    if(ar[i]/2<=*pos){
                        ans=-1; break;
                    }
                }
                st.erase(*pos);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}