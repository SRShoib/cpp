#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        if (n <= 10)
            cout << 0 << " " << n << endl;
        else
            cout << n-10 << " " << 10 << endl;
    }

    return 0;
}