/* 3. escreva um programa que construa uma "base de dados" de alunos, equivalente a um
diário de classe. Peça o nome do aluno, a nota 1, a nota 2 e a nota 3. Calcule a média.
Armazene esses valores em uma strict. Peça nome de alunos até que uma string "fim" seja
entrada. Quando isso acontecer, grave um arquivo binário com essa informação e termine o programa. */
#include <stdio.h>
#include <string.h>

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
    arquivo = fopen("alunos.bin", "wb");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    do
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno.nome);
        if (strcmp(aluno.nome, "fim") != 0)
        {
            printf("Digite a nota 1: ");
            scanf("%f", &aluno.nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &aluno.nota2);
            printf("Digite a nota 3: ");
            scanf("%f", &aluno.nota3);

            aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
            fwrite(&aluno, sizeof(Aluno), 1, arquivo);
        }
    } while (strcmp(aluno.nome, "fim") != 0);

    fclose(arquivo);
    return 0;
}