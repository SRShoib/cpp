#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long 
const int N=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    int i=1;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m==1 or n==1)
        {
            cout<<"Case "<<i<<": "<<max(n,m)<<endl;
        }
        else if(n==2 or m==2)
        {
            cout<<"Case "<<i<<": "<<((m*n)/8)*4 + (((m*n)%8)>=4?4:(m*n)%8)<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<(n*m+1)/2<<endl;
        }
        i++;
    }
	return 0;
}