#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    
    for (int i=1; i<=t; i++)
    {
        cin >> a >> b;
        cout << "Case " << i << ": " << abs(a-b) * 4 + 19 + (a*4) << endl;
    }

    return 0;
}