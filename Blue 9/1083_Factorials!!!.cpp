#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n;
    ll fact = 1;
    string k;
    cin >> n;
    getchar();
    cin >> k;
    for (int i=n; i>=1; i -= k.size())
    {
        fact *= i;
    }
    cout << fact << endl;

    return 0;
}