#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Fast ios_base :: sync_with_stdio(0);cin.tie(0);
#define setp setprecision
#define forn(i,j,n) for(int i=(j);i<n;i++)

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define all(x)      x.begin(),x.end()
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define tc1(x)      cout << "Case " << x << ": "
#define tc2(x)      printf("Case #%d: ",x)
#define tc3(x)      printf("Case %d:\n",x)
#define tc4(x)      printf("Case #%d:\n",x)

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)  cout<<x<<" "<<y<<" "<<z<<"\n"

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>pii;
typedef pair<ll, ll>pll;
typedef pair<double, double>pdd;
typedef vector<int>vi;
typedef vector<ll>vll;
typedef vector<double>vd;

void solve(int r1, int r2, int h, int p)
{
    double r3 = (p * (r1 - r2))/(double)h + r2;
    cout << fixed << setp(9) << ((M_PI/3.0) * (double)p * (r2*r2 + r3*r3 + r2*r3)) << endl;
}
int main(){
    Fast;
    int t, r1, r2, h, p;
    cin >> t;
    forn(i,1,t+1)
    {
        cin >> r1 >> r2 >> h >> p;
        tc1(i);
        solve(r1,r2,h,p);

    }


    return 0;
}