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
        int k,m,n;
        cin >> k >> m >> n;
        priority_queue<int> q;
        int sum =0;
        fore(j,0,n) {
            int a;
            cin >> a;
            sum+=a;
            q.push(a);
        }
        int free=k-sum;
        int con=0;
        while(free < m && !q.empty()){
            free+= q.top();
            q.pop();
            con++;
        }
        cout << con <<endl;
    }
    return 0;
}
