#include <stdio.h>

/* 1. Crie um programa em C que escreva múltiplas linhas em um arquivo texto. */
int main()
{
    int num_lines;
    FILE *file;
    file = fopen("exercicio1.txt", "w");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Entre o número de linhas para serem escritas: ");
    scanf("%d", &num_lines);

    for (int i = 0; i < num_lines; i++)
    {
        fprintf(file, "linha teste %d\n", i + 1);
        printf("linha teste %d\n", i + 1);
    }

    fclose(file);

    return 0;
}