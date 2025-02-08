#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> v;

void recur(int i, int sum, int n, int a[]) {
    if (i == n) {
        v.push_back(sum);
        return;
    }

    recur(i + 1, sum + a[i], n, a);

    recur(i + 1, sum, n, a);
}

int main() {
    printf("Enter the length of the arry: ");
    int n;
    cin >> n; 
    int w[n];

    printf("Enter elements of the arrya: ");
    for (int i = 0; i < n; i++)
        cin >> w[i];

    recur(0, 0, n, w);
    
    for (int i : v)
        cout << i << " ";
    
    cout << endl;
    return 0;
}
