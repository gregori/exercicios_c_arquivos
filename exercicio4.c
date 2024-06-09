/* 4. Escreva um programa que leia o arquivo binário gerado no exercicio 3, contendo
structs de alunos, notas e médias e imprima esses valores na tela */
#include <stdio.h>

typedef struct
{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

int main()
{
    Aluno aluno;
    FILE *arquivo;
    arquivo = fopen("alunos.bin", "rb");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fread(&aluno, sizeof(Aluno), 1, arquivo) == 1)
    {
        printf("Nome: %s\n", aluno.nome);
        printf("Nota 1: %.2f\n", aluno.nota1);
        printf("Nota 2: %.2f\n", aluno.nota2);
        printf("Nota 3: %.2f\n", aluno.nota3);
        printf("Média: %.2f\n", aluno.media);
    }

    fclose(arquivo);
    return 0;
}