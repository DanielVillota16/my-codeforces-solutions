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
        string s; cin>>s;
        vector<int> lpos(10,-1);
        fore(i,0,SZ(s)){
            lpos[s[i]-'0']=i;
        }
        string ans="";
        int last=0;
        priority_queue<char, vector<char>, greater<char>> queue;
        fore(i,0,10){
            if(lpos[i]==-1 || lpos[i]<last) continue;
            char cur='0'+i;
            fore(j,last,lpos[i]+1){
                if(s[j]==cur) queue.push(cur);
                else queue.push(min((char)(s[j]+1), '9'));
            }
            last=lpos[i]+1;
        }
        while(!queue.empty()) {
            ans+=queue.top();
            queue.pop();
        }
        cout<<ans<<endl;
    }
}