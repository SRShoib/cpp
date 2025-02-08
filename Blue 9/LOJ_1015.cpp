#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t, n, d;
    cin >> t;

    for (int i=1; i<=t; i++)
    {
        cin >> n;
        int sum = 0;
        while (n--)
        {
            cin >> d;
            if (d > 0)
            sum += d;
        }
        if (sum >= 0)
            cout << "Case " << i << ": " << sum << endl;
    }


    return 0;
}