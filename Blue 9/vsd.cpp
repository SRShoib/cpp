#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t, n, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        for (int i=0; i<k-3; i++)
        {
            cout << 1 << " ";
        }
        n = n- k+3;
           if (n%2 == 0)
            {
                if (n%4 == 0)
                    cout << n/2 << " " << n/4 << " " << n/4 << endl;
                else
                    cout << 2 << " " << n/2 - 1 << " " << n/2 - 1 << endl;
            }
            else
                cout << n/2 << " " << n/2 << " " << 1 << endl;
        
    }


    return 0;
}