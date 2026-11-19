# Calculadora em C

Desenvolvi esta calculadora na disciplina de **Algoritmos e Pensamento Computacional**, durante a graduação em Engenharia de Software na UDF. Meu objetivo foi praticar uma situação comum na programação: receber uma escolha de quem está usando o programa e decidir o que fazer com ela.

## Como funciona

A calculadora roda no terminal. Primeiro, a pessoa digita dois números. Em seguida, escolhe uma das quatro operações pelo número correspondente no menu.

| Opção | Operação |
|------:|----------|
| 1 | Soma |
| 2 | Subtração |
| 3 | Multiplicação |
| 4 | Divisão |

Por exemplo, ao digitar `12` como primeiro número, `3` como segundo e escolher a opção `4`, a calculadora faz `12 ÷ 3` e apresenta o resultado `4`.

## O que pratiquei

Usei o comando `switch` para ligar cada opção do menu ao cálculo correspondente. Esse exercício me ajudou a entender como organizar diferentes caminhos dentro de um mesmo programa.

Também trabalhei com duas situações que exigem atenção: a divisão por zero e a escolha de uma opção que não existe no menu. Foi uma forma de pensar tanto em quem segue as instruções quanto em quem digita algo inesperado.

## Como executar

O programa está no arquivo [calculadora.c](./calculadora.c). Para testar em um compilador on-line, abra o arquivo, copie o código para um projeto em C e clique em **Executar**. Depois, informe os dois números e escolha a operação no terminal.

Se você usa o GCC no Windows, abra o terminal na pasta do arquivo e execute:

```powershell
gcc calculadora.c -o calculadora.exe
.\calculadora.exe
```

## Autora

**Júlia Lima**  
Estudante de Engenharia de Software na UDF.  
