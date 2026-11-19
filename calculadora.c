#include <stdio.h>



int main() {

  float num1, num2, resultado;

  int operacao;



  printf("Digite o primeiro número: ");

  scanf("%f", &num1);



  printf("Digite o segundo número: ");

  scanf("%f", &num2);



  printf("\n1 - Soma");

  printf("\n2 - Subtração");

  printf("\n3 - Multiplicação");

  printf("\n4 - Divisão");

  printf("\nEscolha a operação: ");

  scanf("%d", &operacao);



  switch (operacao) {

    case 1:

      resultado = num1 + num2;

      printf("Resultado: %.2f\n", resultado);

      break;



    case 2:

      resultado = num1 - num2;

      printf("\nResultado: %.2f", resultado);

      break;



    case 3:

      resultado = num1 * num2;

      printf("\nResultado: %.2f", resultado);

      break;



    case 4:

      if (num2 == 0) {

        printf("\nA divisão por zero não pode ser realizada.");

      } else {

        resultado = num1 / num2;

        printf("\nResultado: %.2f", resultado);

      }

      break;



    default:

      printf("\nOperação inexistente.");

  }



  return 0;

}
