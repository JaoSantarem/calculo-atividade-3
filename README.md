# Atividade 3 - Quando o limite nao existe

Programa independente em C para investigar uma funcao definida por partes, quando x se aproxima de 2:

- Se x < 2, f(x) = x + 1.
- Se x > 2, f(x) = x + 4.
- O enunciado nao define um valor para x = 2.

## Como executar

Com GCC instalado, abra um terminal nesta pasta:

```sh
gcc -std=c11 -Wall -Wextra main.c -o atividade3
```

No Windows (PowerShell): `./atividade3.exe`.
No Linux ou macOS: `./atividade3`.

Outra possibilidade: copie main.c para um compilador de C online e execute.

## Entendendo o codigo

1. `#include <stdio.h>` permite escrever na tela com `printf`.
2. `double calcular(double x)` recebe um numero e devolve o resultado. `double` guarda numeros com casas decimais.
3. `if (x < 2)` pergunta se x e menor que 2. Se for, `return x + 1` devolve a primeira formula.
4. `else` escolhe a segunda formula. Como todos os valores usados sao diferentes de 2, neste programa o else corresponde aos valores maiores que 2. Nao envie x = 2 para essa funcao: ela foi escrita para os valores de teste do enunciado.
5. `esquerda[4]` guarda os quatro valores menores que 2; `direita[4]` guarda os quatro maiores que 2.
6. O primeiro `for` percorre a lista da esquerda. O segundo percorre a lista da direita. Cada lista tem posicoes de 0 a 3.
7. `i++` aumenta i em 1. `i < 4` faz o laco parar antes da posicao 4.
8. `%.4f` mostra quatro casas decimais; `\n` pula uma linha.
9. `return 0` encerra o programa com sucesso.

Exemplo pela esquerda: x = 1.9 e menor que 2, entao f(x) = 1.9 + 1 = 2.9.
Exemplo pela direita: x = 2.1 e maior que 2, entao f(x) = 2.1 + 4 = 6.1.

## Tabelas esperadas

Estas tabelas descrevem o resultado esperado; nao sao capturas de execucao.

```text
PELA ESQUERDA (x < 2)
x          f(x)
----------------------
1.9000     2.9000
1.9900     2.9900
1.9990     2.9990
1.9999     2.9999

PELA DIREITA (x > 2)
x          f(x)
----------------------
2.0001     6.0001
2.0010     6.0010
2.0100     6.0100
2.1000     6.1000
```

## Respostas das questoes

1. **Para qual valor a funcao se aproxima pela esquerda?** De 3, pois x + 1 se aproxima de 2 + 1.
2. **Para qual valor a funcao se aproxima pela direita?** De 6, pois x + 4 se aproxima de 2 + 4.
3. **Os valores sao iguais?** Nao. 3 e diferente de 6.
4. **O limite existe?** O limite bilateral, quando x tende a 2, nao existe.
5. **Explique utilizando os resultados obtidos pelo programa.** Pela esquerda, os valores 2.9, 2.99, 2.999 e 2.9999 se aproximam de 3. Pela direita, 6.0001, 6.001, 6.01 e 6.1 se aproximam de 6 conforme x fica mais perto de 2. Para existir um limite bilateral, os dois limites laterais precisam ser iguais. Aqui, sao diferentes.

## Fala simples para apresentar

"O if escolhe a formula de acordo com o lado de 2. Se x for menor que 2, somamos 1; se for maior, somamos 4. Mostramos os resultados em duas tabelas. Pela esquerda, a funcao chega perto de 3. Pela direita, chega perto de 6. Como os dois lados chegam perto de numeros diferentes, o limite nao existe."

## Entrega

Use main.c como codigo-fonte, execute o programa e tire uma captura da tela. Estude as respostas acima para explica-las com suas palavras.

Validacao: valores conferidos matematicamente. O programa nao foi compilado neste ambiente, pois nao foi encontrado um compilador C.
