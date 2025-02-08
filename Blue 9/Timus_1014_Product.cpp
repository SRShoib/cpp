#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n;
    cin >> n;
    string s;
    if (n == 0)
    {
        cout << 10 << endl;
        return 0;
    }
   
        
    if (n==1)
    {
        cout << 1 << endl;
        return 0;
    } 
    for (int i=9; i>1; i--)
    {
         if (n % i == 0)
        {
            s += (char)(48+i);
            n /= i;
        }

    }
    reverse(s.begin(), s.end());
    if (n == 1)
        cout << s << endl;
    else
        cout << -1 << endl;

    return 0;
}