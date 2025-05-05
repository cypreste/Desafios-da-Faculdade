# 🃏 Super Trunfo de Países — Nível Aventureiro

Neste desafio do módulo de lógica de programação, você cria um menu interativo em C para comparar atributos entre duas cartas de países no estilo Super Trunfo. O jogador escolhe um atributo via menu, e o programa decide qual carta vence com base em regras específicas.

---

## 📋 Requisitos do Desafio

- Menu interativo usando `switch`.
- Comparação com `if-else` (incluindo aninhamento).
- Atributos disponíveis:
  - Nome do país (somente para exibição).
  - População (`int`)
  - Área (`float`)
  - PIB (`float`)
  - Número de pontos turísticos (`int`)
  - Densidade demográfica (`float`)
- Regra: **Maior valor vence**, exceto na **densidade demográfica**, onde o **menor valor vence**.

---

## ⚙️ Como compilar e executar

### ✅ Pré-requisitos

Você precisa ter o compilador `gcc` instalado.

### 💻 Compilar:

```bash
gcc supertrunfo_aventureiro.c -o supertrunfo
```

### ▶️ Executar:

```bash
./supertrunfo
```

---

## 📚 Exemplo de uso do programa

Ao executar o programa, você verá:

```
=== Super Trunfo de Países ===
Escolha o atributo para comparar:
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Opção:
```

Basta digitar o número correspondente ao atributo que deseja comparar. Exemplo:

```
Opção: 3
Comparando Brasil e Argentina...
PIB: 1840.00 x 450.00
Vencedor: Brasil
```

---

## 🧠 O que foi praticado

- Estrutura `switch`.
- Decisões aninhadas com `if-else`.
- Entrada e saída de dados com `scanf` e `printf`.
- Comparação de diferentes tipos de variáveis (`int`, `float`, `char[]`).
