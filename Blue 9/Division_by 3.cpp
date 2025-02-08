#include <stdio.h>
int main(){
    int num, n;
    long long int base = 0, i = 1;
    printf("Enter any number and base to transform: ");
    scanf("%d%d", &num, &n);

    while (num != 0)
    {
        base += (num % n) * i;
        num /= n;
        i *= 10;
    }
    printf("%d base number = %lld\n", n, base);


return 0;
}
