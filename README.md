# Exercícios em C com Arquivos

Este projeto contém uma coleção de exercícios em C que envolvem manipulação de arquivos.

## Requisitos

- Compilador C (por exemplo, GCC)
- Sistema operacional compatível (por exemplo, Linux, Windows)

## Como usar

1. Clone este repositório em sua máquina local.
2. Navegue até o diretório do projeto: `<diretório>/exercicios_c_arquivos`.
3. Compile o código-fonte usando o comando: `make all`.
4. Os binários serão gerados em `exercicios_c_arquivos/build/`.

## Estrutura do projeto

O projeto está organizado da seguinte maneira:

### Exercício 1

Crie um programa em C que escreva múltiplas linhas em um arquivo texto.
Saída exemplo:

```
Entre o número de linhas para serem escritas: 4
```
O conteúdo do arquivo `exercicio1.txt` deve ser:
```
linha teste 1
linha teste 2
linha teste 3
linha teste 4
```

### Exercício 2

Escreva um programa que leia linhas de um arquivo, armazene-as em um vetor e imprima este vetor na tela.
Saída exemplo:

```
Entre o nome do arquivo a ser lido: teste.txt
O conteúdo do arquivo teste.txt é:
linha teste 1
linha teste 2
linha teste 3
linha teste 4
```

### Exercício 3
Escreva um programa que construa uma "base de dados" de alunos, equivalente a um diário de classe. Peça o nome do aluno, a nota 1, nota 2, nota 3. Calcule a média. Armazene esses valores em uma `struct`. Peça nomes de alunos até que uma string `fim` seja entrada. Quando isso acontecer, grave um arquivo **binário** com esses dados.

### Exercício 4
Escreva um programa que leia o arquivo binário do exercício anterior e imprima os valores na tela.

## Testes

Você pode executar o script `testscript.sh` para testar os exercícios. Este script irá compilar os binários e executá-los.

```
bash ./testscript.sh
```