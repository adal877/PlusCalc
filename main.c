#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Somatorio(float n, float i, float a);
float Matrizes(int a, int b, int size);
float Logica_prop(char p, char q);
float Analise_comb(float j, float k);
char Cripto_Cesar(char text);
int ConvBin_to_Dec(int bin);
int ConvDec_to_Bin(int dec);
int Menu();

//define BASE como constante com o valor 2
#define BASE 2

int main() {
 /* int escolha, size; 
  float j, k, i, n, a, b;
  char text;*/

//usado para apagar o conteudo já "usado" em tela
system("clear");

  Menu();
}
int Menu() {
int escolha, size;
float j, k, i, n, a, b;
char text;

//do while para executar o menu 
  do {
    printf("\nMENU PRINCIPAL\n");
    printf("1 - Somatorio\n");
    printf("2 - Logica Proposicional\n");
    printf("3 - Matrizes\n");
    printf("4 - Analise cobinatoria\n");
    printf("5 - Criptografia de Cesar\n");
    printf("6 - Conversor: decimal -> binario // binario -> decimal\n");
    printf("7 - Sair\n");
    printf("Entre com a acao desejada: ");
    scanf("%d", &escolha);
  
system("clear");

  switch(escolha) {
      
      case 1:
      {
        printf("Entre com o valor minimo: \n");
        scanf("%f", &i);
        printf("Entre com o valor maximo: \n");
        scanf("%f", &n);
        printf("Entre com o valor da constante: \n");
        scanf("%f", &a);
        system("clear");
        printf("O resultado eh: ");
        Somatorio(i, n, a);
        printf("Pressione a tecla [ENTER] para continuar...");
        getchar();
      }
   break;

      case 2:
      {
        printf("Entre com os valores para o calculo: ");
        scanf("%f", &j);
        scanf("%f", &k);
        system("clear");
        Logica_prop(j, k);
      }
    break;

      case 3:
      {
        printf("Qual o tamanho da matriz?");
        scanf("%d", &size);
        printf("Entre com os valores para o calculo: ");
        scanf("%f", &j);
        scanf("%f", &k);
        system("clear");
        Matrizes(a, b, size);
      }
    break;

      case 4:
      {
        printf("Entre com os valores para o calculo: ");
        scanf("%f", &j);
        scanf("%f", &k);
        system("clear");
        Analise_comb(j, k);
      }
    break;

      case 5:
      {
        printf("Entre com o texto para criptografia: \n");
        scanf("%s", &text);
        system("clear");
        Cripto_Cesar(j);
      }
    break;  
      
      case 6:
      {
        int escolha2;
        printf("Voce deseja fazer qual tipo de conversao?\n");
        printf("1 - Converter de binario para decimal\n2 - Converter de decimal para binario\n");
        scanf("%d", &escolha2);
        system("clear");
        switch(escolha2) {
          case 1:
          {
            int bin;
            printf("Insira o numero binario para conversao em decimal: \n");
            scanf("%d", &bin);
            system("clear");
            ConvBin_to_Dec(bin);
          }
          break;
          
          case 2:
          {
            int dec;
            printf("Insira o numero decimal para conversao em binario: \n");
            scanf("%d", &dec);
            system("clear");
            ConvDec_to_Bin(dec);
          }
        }
      }
    break;

      case 7:
      {
        system("clear");
        printf("Encerrando o programa...");
      }
      break;
      }
    
    } while (escolha != 7);
  }


float Somatorio(float i, float n, float a) {
  float num;
  if (n >= i) {
  num = n - i;
  float num2; 
  num2 = (a * num) + a;
  return printf("%.2f", num2);
  } else {
    printf("O valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...");
    }
}

float Logica_prop(char p, char q) {
  int p1 = 1;
  int q0 = 0;
  int resultado;
  
  return resultado;
}

float Matrizes(int a, int b, int size) {
 int resultado; 
  
  
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

int ConvBin_to_Dec(int bin) {
  int a[10], i;
  if (bin != 1 || bin != 0) {
    printf("Valor digitado eh invalido. Por favor digite apenas 1's (ums) e/ou 0's (zeros)...");
  } else {
  for(i=0;bin>0;i++) {    
    a[i]=bin%2;    
    bin=bin/2;    
  }    
  printf("\nBinario do numero dado eh: ");    
  for(i=i-1;i>=0;i--) {    
    printf("%d",a[i]);    
  }    
return 0;  
  } 
}

int ConvDec_to_Bin(int dec) {
  int decimal = 0;
  int N = 0;

  while(dec != 0) {
    //se o digito binario atual é 1
    if(dec % 10 == 1) {
      decimal += BASE*N;
    }
  
  N++;
  dec /= 10;
    
    }
    printf("A conversao em decimal: \n");
    printf("%d", decimal);

    return 0;
}

int Opc() {
 int opc;
  printf("Deseja voltar ao menu principal ou encerrar o programa? (1 para Menu, 2 para encerrar)");
  scanf("%d", opc);

  switch(opc) {
    
    case 1:
    {
      Menu();
    }
    break;
    
    case 2:
    {
      printf("Encerrando o programa...");
    }
    break;
    }
}
