#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void num(int n);
void digit(int n);
int sum = 0;

int main(){
    int n;
    while (cin >> n && n)
        num(n);

    return 0;
}

void digit(int n)
{
    if (n == 0)
    return;
    sum += n % 10;
    digit(n/10);
}

void num(int n)
{
    sum = 0;
    digit(n);
    if (sum < 10)
    {
        cout << sum << endl;
        return;
    }
    else
        num(sum);
    

}