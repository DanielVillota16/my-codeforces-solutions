#include <bits/stdc++.h>
#include <math.h>
 
#define pb push_back
#define endl '\n'
#define fore(i,x,y) for(ll i=x;i<y;i++)
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
typedef long long ll;
 
int main() {FIN;
    int n;
    cin >> n;
    double sum=0;
    fore(i,0,n) {
        double a;
        cin>>a;
        sum+=a/100;
    }
    cout<<100*sum/n<<endl;
    return 0;
}