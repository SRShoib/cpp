#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    long long a, b, c, e, f, g;
    cin >> t;

    for (int i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        e = max({a, b, c});
        g = min({a, b, c});
        f = (a+b+c) - (e+g);
        if (e*e == g*g + f*f)
            cout << "Case " << i << ": yes" << endl;
        else
            cout << "Case " << i << ": no" << endl;
    }

    return 0;
}