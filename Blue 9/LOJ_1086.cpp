#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Fast ios_base :: sync_with_stdio(0);cin.tie(0);

int main(){
    // Fast;
    int k, n, prime;
    cin >> k;

    while (k--)
    {
        cin >> n;
        bool isp = true;
        if (n == 1)
            cout << 2 << endl;

        else
        {
            for (int i=3; n>1; i+=2)
            {
                for (int j=2; j*j<=i; j++)
                {
                    if (i % j == 0)
                    {
                        isp = false;
                        break;
                    }
                }
                if (isp)
                {
                    prime = i;
                    n--;
                    isp = true;
                }
                cout << prime << endl;
            }
            cout << prime << endl;
        }
        
    }

    return 0;
}
