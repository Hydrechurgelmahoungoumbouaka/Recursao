#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

#define MAX_PALAVRA 1001

int palindromo(char *string, int tamanho)
{
    if (tamanho <= 1)
    {
        return 1; // Uma letra (ou nenhuma) sempre forma um palíndromo
    }
    if (string[0] != string[tamanho - 1])
    {
        return 0; // Se os extremos não forem iguais, não é palíndromo
    }
    return palindromo(string + 1, tamanho - 2); // Chama recursivamente com o "meio" da string
}

int main(int argc, char const *argv[])
{
    char palavra[MAX_PALAVRA];

    while (scanf("%s", palavra) != EOF)
    {
        int tamanho = strlen(palavra);

        if (palindromo(palavra, tamanho))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}
