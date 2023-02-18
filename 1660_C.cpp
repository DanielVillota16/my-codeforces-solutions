#include <bits/stdc++.h>
#include <math.h>
 
#define endl '\n'
#define fore(i,x,y) for(int i=x;i<y;i++)
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;

int main(){FIN;
	int n; cin>>n;
    while(n--){
        string s; cin>>s;
        bool prev[26];
        memset(&prev, false, 26);
        int m=0;
        fore(i,0,sz(s)){
            if(!prev[s[i]-'a']){
                prev[s[i]-'a']=true;
            } else {
                prev[s[i]-'a']=false;
                memset(&prev, false, 26);
                m+=2;
            }
            
        }
        cout<<sz(s)-m<<endl;
    }
	return 0;
}