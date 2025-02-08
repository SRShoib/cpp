#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n, sum = 0, a=1;
    cin >> n;
    if (n < a)
        swap(n, a);
        
    for (int i=a; i<=n; i++)
        sum += i;
    cout << sum << endl;
    return 0;
}