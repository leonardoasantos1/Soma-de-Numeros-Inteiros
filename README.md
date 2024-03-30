# Soma de Números Inteiros

## Descrição
Este programa em C solicita ao usuário dois números inteiros e calcula a soma desses números.

## Funcionamento
1. Inclui a biblioteca `stdio.h`, que contém funções para entrada e saída de dados.
2. Define a função `main`, que é o ponto de entrada do programa.
3. Declara duas variáveis inteiras `num1` e `num2` para armazenar os números digitados pelo usuário.
4. Exibe a mensagem "Digite o valor do primeiro número: " para solicitar o primeiro número ao usuário.
5. Lê o valor do primeiro número digitado pelo usuário usando `scanf` e armazena na variável `num1`.
6. Exibe a mensagem "Digite o valor do segundo número: " para solicitar o segundo número ao usuário.
7. Lê o valor do segundo número digitado pelo usuário usando `scanf` e armazena na variável `num2`.
8. Calcula a soma dos números `num1` e `num2` e exibe o resultado formatado na tela utilizando `printf`.

## Instruções de Compilação e Execução
Para compilar e executar este programa em um ambiente que suporte a linguagem C, siga os passos abaixo:

### Compilação
1. Abra um terminal (no Linux/Mac) ou prompt de comando (no Windows).
2. Navegue até o diretório onde o código fonte está localizado.
3. Execute o comando de compilação, por exemplo:
gcc nome_do_programa.c -o nome_do_programa

Substitua `nome_do_programa.c` pelo nome do arquivo que contém o código fonte e `nome_do_programa` pelo nome desejado para o executável.

### Execução
1. Após a compilação bem-sucedida, execute o programa digitando no terminal/prompt:
./nome_do_programa

Se estiver no Windows, basta digitar o nome do executável sem a barra (`\`), por exemplo:
nome_do_programa.exe

## Exemplo de Uso
Ao executar o programa, você será solicitado a digitar dois números inteiros. Após inserir os valores, o programa calculará a soma dos números e exibirá o resultado na tela.

Exemplo:
Digite o valor do primeiro número: 10
Digite o valor do segundo número: 20

O resultado de 10 + 20 = 30

## Considerações
- Certifique-se de digitar números inteiros válidos ao usar o programa, pois não há tratamento para entradas inválidas neste código.
- Caso deseje realizar outras operações matemáticas ou adicionar funcionalidades, você pode expandir este código conforme necessário.
