#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n, a, b;
    cin >> n;

    while (n--)
    {
        cin >> a;
        b = sqrt((a-1) * 2);
        if (b*(b+1) / 2 + 1 == a)
            cout << 1 << " ";
        else
            cout << 0 << " ";

    }
    cout << endl;

    return 0;
}