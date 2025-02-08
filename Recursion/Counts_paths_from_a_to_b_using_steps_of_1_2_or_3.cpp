#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int num(int n);

int main(){
    int s, e;
    cin >> s >> e;
    
    cout << num (e - s) << endl;

    return 0;
}
int num(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return num(n-1) + num(n-2) + num(n-3);
}