#!/bin/bash

# Teste para o Exercício 1
echo "4" | ./build/exercicio1 > /dev/null

# Verifique se o arquivo exercicio1.txt foi gerado
if [ -f "exercicio1.txt" ]; then
    echo "O arquivo exercicio1.txt foi gerado com sucesso."
else
    echo "O arquivo exercicio1.txt não foi gerado."
fi

# Teste para o Exercício 2
echo "exercicio1.txt" | ./build/exercicio2 > exercicio2_output.txt

# Remova a primeira linha do arquivo exercicio2_output.txt
sed -i '1d' exercicio2_output.txt


# Verifique se a saída do Exercício 2 corresponde ao conteúdo de exercicio1.txt
if cmp -s "exercicio1.txt" "exercicio2_output.txt"; then
    echo "Os dados do arquivo exercicio1.txt foram corretamente impressos na tela pelo Exercício 2."
else
    echo "Os dados do arquivo exercicio1.txt não foram corretamente impressos na tela pelo Exercício 2."
fi

# Teste para o Exercício 3
echo -e "João\n7\n8\n9\nMaria\n6\n7\n8\nfim" | ./build/exercicio3 > /dev/null
echo -e "Nome: João\nNota 1: 7.00\nNota 2: 8.00\nNota 3: 9.00\nMédia: 8.00\nNome: Maria\nNota 1: 6.00\nNota 2: 7.00\nNota 3: 8.00\nMédia: 7.00" > exercicio4_expected_output.txt


# Verifique se o arquivo exercicio1.txt foi gerado
if [ -f "alunos.bin" ]; then
    echo "O arquivo alunos.bin foi gerado com sucesso."
else
    echo "O arquivo alunos.bin não foi gerado."
fi

# Teste para o Exercício 4
./build/exercicio4 > exercicio4_output.txt

# Verifique se a saída do Exercício 4 corresponde à saída esperada
if cmp -s "exercicio4_expected_output.txt" "exercicio4_output.txt"; then
    echo "Os dados do arquivo binário foram corretamente impressos na tela pelo Exercício 4."
else
    echo "Os dados do arquivo binário não foram corretamente impressos na tela pelo Exercício 4."
fi