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

int main(){
    Fast;
    int t;
    double v1, v2, v3, a1, a2;
    cin >> t;
    forn(i,1,t+1)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        tc1(i);
        double s1 = (v1 * v1)/(2.0 * a1);
        double s2 = (v2 * v2)/(2.0 * a2);
        double time = max(v1/a1, v2/a2);
        double s3 = time * v3;
        cout << fixed << setp(10) << s1+s2 << " " << s3 << endl;
    }


    return 0;
}