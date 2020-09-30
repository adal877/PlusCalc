#include <stdio.h>
#include <stdlib.h>

float Somatorio(float n, float i, float a);
float Matrizes(float j, float k);
float Logica_prop(float j, float k);
float Analise_comb(float j, float k);
char Cripto_Cesar(char j);

int main() {
  int escolha; 
  float j, k, i, n, a;
  char text;

  do {
    printf("\nMENU PRINCIPAL\n");
    printf("1 - Somatorio\n");
    printf("2 - Logica Proposicional\n");
    printf("3 - Matrizes\n");
    printf("4 - Analise cobinatoria\n");
    printf("5 - Cpriptografia de Cesar\n");
    printf("6 - Sair\n");
    printf("Entre com a acao desejada: ");
    scanf("%d", &escolha);
  switch(escolha) {
      
      case 1:
      {
      printf("Entre com o valor minimo: \n");
      scanf("%f", &i);
      printf("Entre com o valor maximo: \n");
      scanf("%f", &n);
      printf("Entre com o valor da constante: \n");
      scanf("%f", &a);
      Somatorio(n, i, a);
      }
   break;

      case 2:
      {
      printf("Entre com os valores para o calculo: ");
      scanf("%f", &j);
       scanf("%f", &k);
      Logica_prop(j, k);
      }
    break;

      case 3:
      {
      printf("Entre com os valores para o calculo: ");
      scanf("%f", &j);
      scanf("%f", &k);
      Matrizes(j, k);
      }
    break;

      case 4:
      {
      printf("Entre com os valores para o calculo: ");
      scanf("%f", &j);
      scanf("%f", &k);
      Analise_comb(j, k);
      }
    break;

      case 5:
      {
      printf("Entre com o texto para criptografia: \n");
      scanf("%s", &text);
      Cripto_Cesar(j);
      }
    break;  

      case 6:
      {
      printf("Encerrando o programa...");
      }
      break;
      }
    
    } while (escolha != 6);
}

float Somatorio(float i, float n, float a) {
  float num;
  num = i - n;
  float num2; 
  num2 = (a * num) + a;
  return printf("%.2f", num2);
  }

float Logica_prop(float j, float k) {
  float resultado;
  resultado = j + k;
  return resultado;
  }

float Matrizes(float j, float k) {
  float resultado;
  resultado = j + k;
  return resultado;
  }

float Analise_comb(float j, float k) {
  float resultado;
  resultado = j + k;
  return resultado;
  }

char Cripto_Cesar(char j) {
    return 0;
  }
