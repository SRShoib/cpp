#include<bits/stdc++.h>
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
#define sp          cout<<" "
#define nl          cout<<"\n"

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))


#define tc1(x)      cout<<"Case "<<x<<": ";
#define tc2(x)      cout<<"Case #"<<x<<": ";
#define tc3(x)      cout<<"Case "<<x<<":\n";
#define tc4(x)      cout<<"Case #"<<x<<":\n";

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
typedef double dbl;

dbl solve(dbl r1, dbl r2, dbl r3)
{
    dbl A, B, C, h;
    A = r1+r2; B = r2+r3; C = r3+r1;
    dbl S = (A+B+C)/2.0;
    dbl area = sqrt(S*(S-A)*(S-B)*(S-C));
   
    dbl a = acos((A*A + C*C - B*B)/(2.0*A*C));
    dbl b = acos((A*A + B*B - C*C)/(2.0*A*B));
    dbl c = acos((B*B + C*C - A*A)/(2.0*B*C));
    dbl area1 = 0.5 * ((r1*r1*a) + (r2*r2*b) + (r3*r3*c));

    return area - area1;    

}
    
int main(){
    Fast;
    int t;
    dbl r1, r2, r3;
    cin >> t;
    forn(i,1,t+1)
    {
        cin >> r1 >> r2 >> r3;
        tc1(i);
        cout << fixed << setp(10) << solve(r1, r2, r3) << endl;

    }

    return 0;
}