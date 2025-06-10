# 🛥️ Batalha Naval - Posicionamento de Navios (Nível Iniciante)

Este projeto é uma implementação inicial do clássico jogo **Batalha Naval**, desenvolvido em linguagem **C**. Neste estágio, o foco é representar o tabuleiro e posicionar dois navios (um horizontal e outro vertical) com regras básicas de validação.

## 📋 Descrição do Desafio

O objetivo deste desafio é:

- Criar um tabuleiro fixo de 10x10 usando uma matriz bidimensional.
- Declarar dois navios (arrays unidimensionais) com tamanho fixo de 3 posições.
- Posicionar os navios (um na horizontal, outro na vertical) dentro do tabuleiro, sem ultrapassar os limites e sem sobreposição.
- Exibir o tabuleiro no console com os navios posicionados.
  
## 🧠 Conceitos Aplicados

- Arrays unidimensionais e bidimensionais.
- Laços de repetição (loops).
- Estrutura condicional (`if`).
- Validação de limites e sobreposição.
- Impressão estruturada no terminal com `printf`.

## 💻 Como Funciona

- O tabuleiro é representado por uma matriz 10x10 preenchida inicialmente com `0` (água).
- Os navios são representados com o valor `3` dentro da matriz.
- As coordenadas iniciais de cada navio são definidas diretamente no código.
- O programa valida:
  - Se os navios cabem no tabuleiro.
  - Se os navios não se sobrepõem.
- Ao final, o tabuleiro é exibido no console.
