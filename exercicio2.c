/* 2. Escreva um programa que leia linhas de um arquivo, (informado pelo usuário),
armazene essas linhas em um vetor e as imprima na tela. */
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[100];
    char line[100];
    char lines[100][100];
    int num_lines = 0;

    printf("Entre o nome do arquivo a ser lido: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(line, 100, file) != NULL)
    {
        strcpy(lines[num_lines++], line);
    }

    printf("O conteudo do arquivo %s é:\n", filename);

    for (int i = 0; i < num_lines; i++)
    {
        printf("%s", lines[i]);
    }

    fclose(file);

    return 0;
}