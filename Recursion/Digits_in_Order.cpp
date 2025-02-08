#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void num(int n, string s);
int p = 0;

int main(){
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> s;
        n = stoi(s);
        
        num(n, s);
        p = 0;
        
        cout << endl;
    }


    return 0;
}
void num(int n, string s)
{
    p++;
    if (p > s.size())
        return;

    num(n / 10, s);
    cout << n % 10 << " ";
}