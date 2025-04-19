#include "stdio.h"
#include "string.h"
#include "ctype.h"

#define MAX_TEXTO 10000
#define MAX_PALAVRA 1001

void ImprimeInvertido(char *string)
{
    if (*string == '\0')
        return;
    ImprimeInvertido(string + 1);
    putchar(*string);
}

int main()
{
    char texto[MAX_TEXTO];
    char palavra[MAX_PALAVRA];
    int i = 0;
    int j = 0;
    // scanf("%[\n]\n", texto);
    fgets(texto, sizeof(texto), stdin);
    while (texto[i] != '\0')
    {
        if (isspace(texto[i]))
        {
            if (j > 0)
            {
                palavra[j] = '\0';
                ImprimeInvertido(palavra);
                j = 0;
            }
            putchar(texto[i]);
        }
        else
        {
            if (j < 1000)
            {
                palavra[j++] = texto[i];
            }
        }
        i++;
    }

    if (j > 0)
    {
        palavra[j] = '\0';
        ImprimeInvertido(palavra);
    }

    return 0;
}