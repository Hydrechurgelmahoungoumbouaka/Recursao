#include "stdio.h"

int SomaElementosPares(int *vet, int numElementos)
{
    if (numElementos == 0)
    {
        return 0;
    }
    int ultimo = vet[numElementos - 1];
    if (ultimo % 2 == 0)
    {
        return ultimo + SomaElementosPares(vet, numElementos - 1);
    }
    else
    {
        return SomaElementosPares(vet, numElementos - 1);
    }
}

int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int qtd;
        scanf("%d", &qtd);

        int vet[qtd];
        for (int j = 0; j < qtd; j++)
        {
            scanf("%d", &vet[j]);
        }

        int soma = SomaElementosPares(vet, qtd);
        printf("%d\n", soma);
    }
    return 0;
}