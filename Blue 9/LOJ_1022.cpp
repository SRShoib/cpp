#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    double r;

    for (int i=1; i<=t; i++)
    {
        cin >> r;
        double cArea, sArea;
        cArea = 2 * acos(0.0) * r * r;
        sArea = 4 * r * r;
        printf("Case %d: %.2lf\n", i, sArea - cArea);
    }


    return 0;
}