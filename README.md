# Jogo da Velha em C - Humano vs IA

Este projeto é uma versão do clássico **Jogo da Velha**, implementado em linguagem C, onde o jogador humano enfrenta uma **IA simples** (computador) que faz jogadas aleatórias válidas.

---

## 🎯 Objetivo
Desenvolver um jogo de tabuleiro 3x3, onde o jogador humano joga com 'X' e a IA joga com 'O'. O jogo termina quando:
- Um dos dois vence (3 símbolos na mesma linha, coluna ou diagonal), ou
- O tabuleiro estiver cheio, resultando em empate.

---

## 🧠 Como Funciona a IA?
A IA (computador) faz jogadas aleatórias em posições livres do tabuleiro. A cada jogada do jogador humano, a IA responde com uma jogada válida automaticamente.

---

## 📁 Estrutura de Arquivos

```
jogo_da_velha_vs_ia/ 
├── main.c        # Função principal e controle do jogo 
├── jogo.c        # Lógica do tabuleiro, jogadas e IA 
├── jogo.h        # Cabeçalho com funções do jogo 
├── util.c        # Função de limpar tela (opcional) 
├── util.h        # Cabeçalho da função utilitária 
```

---

## ⚙️ Compilação

Para compilar o jogo (usando gcc), execute o seguinte comando no terminal:

```bash
gcc main.c jogo.c util.c -o jogo_da_velha
```

---

## ▶️ Execução

Após compilar, rode o executável:

```bash
./jogo_da_velha
```

---

## 🧩 Funções Implementadas

- `inicializarTabuleiro()` – Preenche o tabuleiro com espaços vazios.
- `exibirTabuleiro()` – Mostra o tabuleiro no terminal.
- `receberJogada()` – Lê a jogada do jogador e valida.
- `jogadaComputador()` – Faz a jogada aleatória da IA.
- `verificarVitoria()` – Verifica se houve vitória para um jogador.

---

## 💡 Possíveis Melhorias

- Implementar uma IA inteligente (algoritmo Minimax).
- Adicionar placar de vitórias.
- Salvar resultados em arquivo.

---

Desenvolvido como exercício de lógica de programação e modularização em C.
