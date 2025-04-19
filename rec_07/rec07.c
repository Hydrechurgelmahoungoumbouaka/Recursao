#include "stdio.h"
#include "stdlib.h"

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0; // caso base
    }
    return (n % 10) + somaDigitos(n / 10);
}
int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d\n", somaDigitos(N));

    return 0;
}