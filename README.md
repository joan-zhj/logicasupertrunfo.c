# Desafio Lógica Super Trunfo - Estácio

Este é o segundo desafio da disciplina, onde foi implementada a lógica de comparação entre cartas do jogo Super Trunfo com o tema **países**, utilizando a linguagem **C**.

## 🧠 Funcionalidades

- Três cartas pré-definidas: **Brasil**, **Noruega** e **Índia**
- Cada carta contém:
  - Continente
  - Código
  - Nome do país
  - População
  - Área
  - PIB
  - IDH
- Sorteio automático de uma carta para o jogador e outra para o computador
- O jogador escolhe um atributo (população, área, PIB ou IDH)
- O programa compara os valores e informa o vencedor da rodada

## 💡 Dados utilizados

| País     | População (mi) | Área (km²)     | PIB (tri USD) | IDH   |
|----------|----------------|----------------|----------------|-------|
| Brasil   | 213            | 8.515.770      | 2.13           | 0.786 |
| Noruega  | 5              | 323.772        | 0.50           | 0.970 |
| Índia    | 1438           | 3.287.260      | 4.19           | 0.685 |

## ▶️ Como compilar e executar

### Com `gcc`:

```bash
gcc main.c -o supertrunfo
./supertrunfo
