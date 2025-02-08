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
    int n;
    char a, b;
    cin >> n;

    while(n--)
    {
        cin >> a >> b;
        int count = 0;
        bool it[4] = {false};
        int x = (int)(a - 'a') + 1;
        int y = (int)(b - '0');
        if (x - 1 >= 1) it[0] = true;
        if (8 - x >= 1) it[1] = true;
        if (y - 1 >= 1) it[2] = true;
        if (8 - y >= 1) it[3] = true;

        if  (x - 1 >= 2)
        {
            if (it[2]) count++;
            if (it[3]) count++;
        }
        if  (8 - x >= 2)
        {
            if (it[2]) count++;
            if (it[3]) count++;
        }
        if  (y - 1 >= 2)
        {
            if (it[0]) count++;
            if (it[1]) count++;
        }
        if  (8 - y >= 2)
        {
            if (it[0]) count++;
            if (it[1]) count++;
        }
        pr1(count);
        
    }
    
    return 0;
}