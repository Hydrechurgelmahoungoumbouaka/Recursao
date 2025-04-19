#include <stdio.h>

int ContaOcorrencias(int *vet, int numElementos, int numeroProcurado)
{
    if (numElementos == 0)
    {
        return 0;
    }

    int ocorrenciaAtual = (vet[0] == numeroProcurado) ? 1 : 0;
    return ocorrenciaAtual + ContaOcorrencias(vet + 1, numElementos - 1, numeroProcurado);
}

int main()
{
    int N;
    scanf("%d", &N); // Número de casos

    for (int i = 0; i < N; i++)
    {
        int numeroProcurado, qtdElementos;
        scanf("%d %d", &numeroProcurado, &qtdElementos);

        int vet[qtdElementos];
        for (int j = 0; j < qtdElementos; j++)
        {
            scanf("%d", &vet[j]);
        }

        int resultado = ContaOcorrencias(vet, qtdElementos, numeroProcurado);
        printf("%d\n", resultado);
    }

    return 0;
}
