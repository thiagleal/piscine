# Rush 01 - Piscine 42 Lisboa

Este projeto faz parte da jornada Piscine da 42 Lisboa e tem como objetivo desenvolver habilidades de lógica, trabalho em equipe e resolução de problemas em um curto período de tempo. O `rush01` consiste em criar um programa em C que resolve um quebra-cabeça do tipo Sudoku simplificado, conhecido como "SkyScrapers".

## 🏙️ Sobre o Projeto

O jogo "SkyScrapers" é um quebra-cabeça lógico onde o jogador deve preencher uma grade NxN com números, respeitando as seguintes regras:

1. Cada linha e coluna deve conter números únicos.
2. As pistas ao redor da grade indicam quantos "prédios" são visíveis a partir daquela posição, considerando que prédios mais altos bloqueiam a visão de prédios mais baixos.

O objetivo do programa é resolver automaticamente o quebra-cabeça com base nas pistas fornecidas.

## 🏆 Nota do Projeto

![Nota do Projeto](https://github.com/user-attachments/assets/74c36a64-6289-4908-abfe-92ce07cb3f01)

## 📂 Estrutura do Projeto

- **`main.c`**: Arquivo principal que inicializa o programa, processa os argumentos e chama as funções de resolução.
- **`input_validation.c`**: Contém funções para validar as entradas fornecidas pelo usuário, garantindo que as pistas sejam válidas.
- **`solver.c`**: Implementa o algoritmo de resolução do quebra-cabeça, verificando as regras e preenchendo a grade.
- **`grid_utils.c`**: Funções auxiliares para manipulação da grade, como impressão, inicialização e verificação de valores.
- **`constraints.c`**: Contém funções para verificar as restrições das pistas e garantir que a solução seja válida.

## 🚀 Funcionalidades

- **Validação de Entrada**: O programa verifica se as pistas fornecidas são válidas e correspondem ao formato esperado.
- **Resolução Automática**: Resolve o quebra-cabeça com base nas pistas fornecidas, utilizando backtracking para explorar todas as possibilidades.
- **Impressão da Solução**: Exibe a solução final da grade no terminal.

## 🖥️ Como Executar

1. **Compilar o programa**:

   Use o comando para copilar `cc -Wall -Werror -Wextra-o rush01 main.c input_validation.c solver.c grid_utils.c constraints.c`

2. **Executar o programa**:

   Use o comando para executar `c./rush01 "4 3 2 1" "1 2 2 2" "2 2 2 2" "1 2 2 2"`
   Obs: Substitua com valores validos pelas pistas do quebra-cabeça.

### 📄 Exemplo de Entrada e Saída

Entrada:
Pistas fornecidas como argumentos:  
`"4 3 2 1" "1 2 2 2" "2 2 2 2" "1 2 2 2"`

Saída:
Solução exibida no terminal:  
`1 2 3 4`  
`2 3 4 1`  
`3 4 1 2`  
`4 1 2 3`  

## 🖥️ Ambiente de Desenvolvimento

Os códigos foram desenvolvidos e testados em ambiente Linux, utilizando processadores baseados na arquitetura Intel. Caso utilize outro ambiente ou arquitetura, recomenda-se realizar ajustes conforme necessário.

## 📝 Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request com melhorias ou correções.
