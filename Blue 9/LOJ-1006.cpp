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
const ll md = 10000007;
ll a, b, c, d, e, f;
ll fn(ll n) {
    if (n == 0) return a%md;
    if (n == 1) return b%md;
    if (n == 2) return c%md;
    if (n == 3) return d%md;
    if (n == 4) return e%md;
    if (n == 5) return f%md;
    return fn(n-1)%md + fn(n-2)%md + fn(n-3)%md + fn(n-4)%md + fn(n-5)%md + fn(n-6)%md;
}
int main() {
    // Fast;
    int cases;
    ll n;
    cin >> cases;
    for (int caseno = 1; caseno <= cases; ++caseno) {
        cin >> a >> b >> c >> d >> e >> f >> n;
        tc1(caseno);
        pr1((fn(n)+md) % md);
    }
    return 0;
}