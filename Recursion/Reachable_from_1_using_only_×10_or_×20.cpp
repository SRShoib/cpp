#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long
#define endl "\n"

bool num(ul a, ul n);
int main(){
    int t;
    cin >> t;

    while(t--)
    {
        ul n;
        cin >> n;

        
        if (num(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
bool num(ul a, ul n)
{
    if(a==n)
        return true;
    if(a>n)
        return false;
    return num(a*10,n) || num(a*20,n);
}