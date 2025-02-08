#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void space(int a);
void star(int b);
void recur(int n, int cons);

int main(){
    int n;
    cin >> n;
    recur(n, n);

    return 0;
}
void space(int a)
{
    if (a == 0)
        return;
    cout << " ";
    space(a-1);
}
void star(int b)
{
    if (b == 0)
        return;
    cout << "*";
    star(b-1);
}
void recur(int n, int cons)
{
    if (n == 0)
        return;
    space(n-1);
     star(2*(cons-n)+1);
    cout << endl;
    recur(n-1, cons);
}