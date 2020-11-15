/* 
 * Desenvolvedor: Adalberto Luiz Dos Santos Junior
 * data de conclusão: 08/11/2020
*/
#include <stdio.h>
#include <stdlib.h>
//usa do metodo de prototipos para inicializar as funções do programa
void Matrizes_Input(int a[50][50], int linhas, int colunas); //função apenas para pegar os dados das matrizes do usuario
int Matriz_Soma(int a[50][50], int b[50][50], int linhas, int colunas); // as seguintes funções Matriz_Soma, Matriz_mult e Matri
void Matriz_Mult(int a[50][50], int b[50][50], int linhas, int colunas); //_Sub dependem da função Matriz_Input para realizar os
int Matriz_Sub(int a[50][50], int b[50][50], int linhas, int colunas); // calculos
int Potencia(int base, int expoente);
void Somatorio(), Analise_Combinatorio();
void Fatorial(), Arranjo(), Combinacao();
char Enter(); 
void ConvBin_to_Dec(), ConvDec_to_Bin();
void Cripto_Cesar(), Decrip_Cesar();
void Logica_Proposicional();
void Apagar_Tela(), Draw();
// funções para habilitar o uso de cores ansi em octal
void setupConsole(void);
void restoreConsole(void);
void SetupConsole(void);
void RestoreConsole(void);
// formatação de cores para uso no GNU/Linux(opções comentadas) e para windows
// \x1b e \033 são representações em hexadecimal e octadecimal do escape ESC[
//#define AMARELO "\033[0;33;1m"              
#define AMARELO "\x1b[33m"
//#define VERDE "\033[0;32;1m"              
#define VERDE "\x1b[32m"
//#define VERMELHO "\033[0;31;1m"    
#define VERMELHO "\x1b[31m"
//#define AMARELO_SUBLINHADO "\033[4;33;1m"
#define AMARELO_SUBLINHADO "\x1b[4;33m"
//#define CIANO "\033[0;36;1m"
#define CIANO "\x1b[36m"
//#define BLUE_BG "\033[44;30;1m"
#define BLUE_BG "\x1b[44;30m"
//#define FIM "\033[m"
#define FIM "\x1b[0m"

int main() {
  int escolha;
  char cont = 's';
//usado para apagar o conteudo já mostrado em tela para evitar "poluição" visual 
Apagar_Tela();

  setupConsole();    
    Draw();
//um banner para deixar a calculadora com um aspecto mais agradavel e user-friendlly
    printf("\n%s@@@@@@@   @@@       @@@  @@@   @@@@@@    @@@@@@@   @@@@@@   @@@        @@@@@@@  \n@@@@@@@@  @@@       @@@  @@@  @@@@@@@   @@@@@@@@  @@@@@@@@  @@@       @@@@@@@@  \n@@!  @@@  @@!       @@!  @@@  !@@       !@@       @@!  @@@  @@!       !@@       \n!@!  @!@  !@!       !@!  @!@  !@!       !@!       !@!  @!@  !@!       !@!       \n@!@@!@!   @!!       @!@  !@!  !!@@!!    !@!       @!@!@!@!  @!!       !@!       \n!!@!!!    !!!       !@!  !!!   !!@!!!   !!!       !!!@!!!!  !!!       !!!       \n!!:       !!:       !!:  !!!       !:!  :!!       !!:  !!!  !!:       :!!       \n:!:        :!:      :!:  !:!      !:!   :!:       :!:  !:!   :!:      :!:       \n ::        :: ::::  ::::: ::  :::: ::    ::: :::  ::   :::   :: ::::   ::: :::  \n :        : :: : :   : :  :   :: : :     :: :: :   :   : :  : :: : :   :: :: :\n%s", CIANO, FIM);

    Draw();
    printf("\nAperte [ENTER] para continuar...");
    getchar();
    Apagar_Tela();
  //do while para executar o menu
  do {
    if(cont == 's' || cont == 'S') {
    Draw();
    printf("%s_________________________________________________________________\n", AMARELO);
    printf("|   |                     MENU PRINCIPAL                        |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 1 | -> Somatorio                                              |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 2 | -> Matrizes                                               |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 3 | -> Analise combinatoria (e outros)                        |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 4 | -> Criptografia de Cesar                                  |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 5 |-> Conversor: decimal -> binario // binario -> decimal     |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("| 6 |-> Logica Proposicional                                    |\n");
    printf("|---|-----------------------------------------------------------|\n");
    printf("%s|%s 7 %s%s|%s -> Sair%s                               %s                    |\n", AMARELO, VERMELHO, FIM, AMARELO, VERMELHO, FIM, AMARELO);
    printf("\033[0;33;1m|___|___________________________________________________________|\033[m\n\n");
    Draw();
   printf("%sEntre com a acao desejada: %s", VERDE, FIM);

      scanf(" %d", &escolha);
      Apagar_Tela();
    }

  switch(escolha) {
      
      default:
      {
        printf("\n%sAPENAS PERMITIDO NUMEROS ENTRE 1 E 6...\n%s", VERMELHO, FIM);
      }
      break;

      case 1:
      {
        Somatorio();
        cont = Enter();
      }
    break;

      case 2:
      {
        Draw();
        printf("%s_____________________________________________________________\n", AMARELO);
        printf("%s|     Qual calculo gostaria de realizar?                    |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                                       |\n", AMARELO);
        printf("| 1 |-> Soma                                                |\n");
        printf("|   |                                                       |\n");
        printf("| 2 |-> Subtracao                                           |\n");
        printf("|   |                                                       |\n");
        printf("| 3 |-> Multiplicacao                                       |\n");
        printf("|___|_______________________________________________________|%s\n", FIM);
        Draw();
        scanf(" %d", &escolha);

        Apagar_Tela();
        switch(escolha) {
          case 1:
          {
            int a[50][50], b[50][50], linhas, colunas, i, j;

           Draw();
           printf("%s_______________________________________________________________\n", AMARELO);
           printf("| Considere que para o funcionamento dos calculos, as matrizes |\n| devem possuir valores maximos de 50x50 (afinal, porque não?  |\n|  ¯\\_(ツ)_/¯)                                                 |\n");
           printf("|                                                              |\n");
           printf("| Insira o numero de linhas da matriz:                         |\n");
           scanf(" %d", &linhas);

           printf("| Insira o numero de colunas da matriz:                        |\n");
           scanf(" %d", &colunas);

           printf("| Insira os elementos da matriz (a) %d x %d                      |\n", linhas, colunas);
           printf("|                                                              |\n");
           //Draw();
           Matrizes_Input(a, linhas, colunas);
           printf("| Insira os elementos da matriz (b) %d x %d                      |\n", linhas, colunas);
           printf("|______________________________________________________________|%s\n", FIM);
           //Draw();
           Matrizes_Input(b, linhas, colunas);
          Apagar_Tela();
            Matriz_Soma(a, b, linhas, colunas);
            cont = Enter();
          }
          break;

          case 2:
          {
             int a[50][50], b[50][50], linhas, colunas, i, j;

           Draw();
           printf("%s|_____________________________________________________________|\n", AMARELO);
           printf("| Considere que para o funcionamento dos calculos, as marizes  |\n| devem possuir valores maximos de 50x50                        |\n");
           printf("| Insira o numero de linhas da matriz (a):                     |\n");
           scanf(" %d", &linhas);

           printf("| Insira o numero de colunas da matriz (a):                    |\n");
           scanf(" %d", &colunas);

           printf("| Insira os elementos da matriz (a) %d x %d                    |\n", linhas, colunas);
           //Draw();
           Matrizes_Input(a, linhas, colunas);
           printf("| Insira os elementos da matriz (b) %d x %d                    |\n", linhas, colunas);
           Draw();
           Matrizes_Input(b, linhas, colunas);
           Apagar_Tela();

            Matriz_Sub(a, b, linhas, colunas);
            cont = Enter();
          }
          break;

          case 3:
          {
             int a[50][50], b[50][50], linhas, colunas, i, j;

           Draw();
           printf("| Considere que para o funcionamento dos calculos, as marizes  |\n| devem possuir valores maximos de 50x50                        |\n");
           printf("| Insira o numero de linhas da matriz (b):                     |\n");
           scanf(" %d", &linhas);

           printf("| Insira o numero de colunas da matriz (a):                    |\n");
           scanf("%d%*c", &colunas);

           printf("| Insira os elementos da matriz (a) %d x %d                    |\n", linhas, colunas);

           Matrizes_Input(a, linhas, colunas);

           printf("| Insira os elementos da matriz (b) %d x %d                      |\n", linhas, colunas);
           Draw();
           Matrizes_Input(b, colunas, linhas);
           Apagar_Tela();

           Matriz_Mult(a, b, linhas, colunas); 
           cont = Enter();
          }
          break;

          default:
          {
            printf("\n%sAPENAS PERMITIDO NUMEROS ENTRE 1 E 4...\n%s", VERMELHO, FIM);
            cont = Enter();
          }
          break;
        }
      }
    break;

      case 3:
      { 
       // Analise_comb();
       int escolha;
        Draw();
        printf("%s_______________________________________________\n", AMARELO);
        printf("%s|       Qual calculo gostaria de fazer?       |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                                     |\n", AMARELO);
        printf("| 1 |-> Fatorial                                          |\n");
        printf("|   |                                                     |\n");
        printf("| 2 |-> Arranjo do tipo N!/(N - P)!                       |\n");
        printf("|   |                                                     |\n");
        printf("| 3 |-> Combinacao do tipo C=N!/P!(N-P)!                  |\n");
        printf("|   |                                                     |\n");
        printf("| 4 |-> Analise combinatoria                              |\n");
        printf("|___|_____________________________________________________|%s\n", FIM);
        Draw();
        scanf(" %d", &escolha);
        
        Apagar_Tela();
        switch(escolha) {
          
          case 1:
          {
            Fatorial();
            cont = Enter();
          }
          break;

          case 2:
          {
            Arranjo();
            cont = Enter();
          }
          break;
        
          case 3:
          {
            Combinacao();
            cont = Enter();
          }
          break;
          
          case 4:
          {
            Analise_Combinatorio();
            cont = Enter();
          }
          break;

          default:
          {
            printf("\n%sAPENAS PERMITIDO NUMEROS ENTRE 1 E 3...\n%s", VERMELHO, FIM);
            cont = Enter();
          }
          break;
        }
      }
    break;

      case 4:
      {
        int escolha3;
        Draw();
        printf("%s_____________________________________________________________\n", AMARELO);
        printf("%s|       O que voce gostaria de fazer?                        |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                                        |\n", AMARELO);
        printf("%s|%s 1 %s|->%s %sCriptografar%s                                         |\n", AMARELO, VERDE, AMARELO, FIM, VERDE, AMARELO);         
        printf("|   |                                                        |\n");
        printf("| 2 |-> Descriptografar                                      |\n");
        printf("|___|________________________________________________________|\n%s", FIM);
        Draw();
        scanf(" %d", &escolha3);
          
        Apagar_Tela();
        switch(escolha3) {
          case 1:
          {
            Cripto_Cesar();
            cont = Enter();
          }
          break;

          case 2:
          {
            Decrip_Cesar();
            cont = Enter();
          }
          break;
          
          default:
          {
            printf("\n%sAPENAS PERMITIDO NUMEROS 1 OU 2...%s\n", VERMELHO, FIM);
            cont = Enter();
          }
          break;

        }
      }
    break;  
      
      case 5:
      {
        int escolha2;
        Draw();
        printf("%s_________________________________________________________________\n", AMARELO);
        printf("%s|          Voce deseja fazer qual tipo de conversao?             |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                                            |\n", AMARELO);
        printf("| %s1 %s|-> %sConverter de decimal para binario                        %s|\n", VERDE, AMARELO, VERDE, AMARELO);
        printf("|   |                                                            |\n");
        printf("| 2 |-> Converter de binario para decimal                        |\n");
        printf("|___|____________________________________________________________|%s\n\n", FIM);
        Draw();
        scanf(" %d", &escolha2);
        
        Apagar_Tela();
        switch(escolha2) {
          case 1:
          {
            ConvDec_to_Bin();
            cont = Enter();
          }
          break;
          
          case 2:
          { 
            ConvBin_to_Dec();
            cont = Enter();
          }
          break;

          default:
          {
            printf("\n%sAPENAS PERMITIDO NUMEROS 1 OU 2...\n%s", VERMELHO, FIM);
            cont = Enter();
          }
          break;

        }
      }
    break;

      case 6:
      {
        Logica_Proposicional();
        cont = Enter();
      }
      break;

      case 7:
      {
        printf("\n%sEncerrando o programa...%s", VERMELHO, FIM);
      }
      break;
      }
    } while(escolha != 7);
  }

void Somatorio() {
 float num, i, n, a;
  
  Draw();
  Apagar_Tela();
  printf("%s______________________________________________________________________________%s\n", AMARELO, FIM);
  printf("%s|                              Somatorio                                      |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|                                                                             |\n", AMARELO);
  printf("| Entre com o valor minimo:                                                 |\n");                                                             
  scanf(" %f", &i);                                                                                    
  printf("|                                                                           |\n");
  printf("| Entre com o valor maximo:                                                 |\n");                                                             
  scanf(" %f", &n);                                                                                    
  printf("|                                                                           |\n");
  printf("| Entre com o valor da constante:                                           |\n");                                                       
  scanf(" %f", &a); 
  
  Apagar_Tela();

  if (n >= i) {
    num = n - i;
    float num2; 
    num2 = (a * num) + a;
    printf("\n");
    printf("%sO resultado eh: %.2f\n\n%s", VERDE, num2, FIM);
  
  } else {
    
    Apagar_Tela();

  printf("\n%sO valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...%s", VERMELHO, FIM); 
  Draw();
  }   
  Draw();
}

//função de analise combinatoria
void Analise_Combinatorio() {
  int resp, i = sizeof(resp);
  int potencia = Potencia(resp, i);

  Draw();
  printf("%s____________________________________________________________________________\n", AMARELO);
  printf("%s|                            Analise Combinatoria                             |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|   |                                                                         |\n", AMARELO);
  printf("| Digite uma sequencia de numeros:                                            |\n");
  printf("|                                                                             |\n");
  scanf(" %d", &resp);
  printf("| Com o conjunto numerico %d eh possivel formar %d possibilidades             |\n", resp, potencia);
  printf("|_____________________________________________________________________________|%s\n", FIM);
  Draw();
  
  }
//função de logica proposicional
void Logica_Proposicional() {
  int resp;
  
  Draw();
  printf("%s____________________________________________________________________________\n", AMARELO);
  printf("%s|                      Escolha a operacao desejada                            |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|   |                                                                         |\n", AMARELO);
  printf("| 1 | - ~p ^ q                                                                |\n");
  printf("|   |                                                                         |\n");
  printf("| 2 | - p -> q                                                                |\n");
  printf("|   |                                                                         |\n");
  printf("| 3 | - p <-> q                                                               |\n");
  printf("|   |                                                                         |\n");
  printf("| 4 | - p V q                                                                 |\n");
  printf("|   |                                                                         |\n");
  printf("| 5 | - p ^ q                                                                 |\n");
  printf("|   |                                                                         |\n");
  printf("| 6 | -                                                                       |\n");
  printf("|___|_________________________________________________________________________|%s\n", FIM);
  printf("\n");
  scanf(" %d", &resp); 
  
  switch(resp) {
    default: 
    {
      printf("RESPOSTA INVALIDA...");
      Enter();
    }

    case 1:
    {
      Apagar_Tela();
      Draw();
      printf("%s\n_________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|          ~p                         q                                  ~p ^ q          |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                    |                              |                                     |\n", AMARELO);
      printf("|          v         |              v               |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |              v               |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          v         |              f               |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |              f               |                    f                |\n");
      printf("|____________________|______________________________|_____________________________________|%s\n", FIM);
      Draw();
    } 
     case 2:
    {
      Apagar_Tela();
      Draw();
      printf("%s\n_________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|         p                         q                                 p -> q              |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                    |                              |                                     |\n", AMARELO);
      printf("|          v         |              v               |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          v         |              f               |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |              v               |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |              f               |                    v                |\n");
      printf("|____________________|______________________________|_____________________________________|%s\n", FIM);
      Draw();
    }
     case 3:
    {
      Apagar_Tela();
      Draw();
      printf("%s\n_________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|         p                         q                                 p <-> q             |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                  |                              |                                       |\n", AMARELO);
      printf("|          v         |                v             |                     v               |\n");
      printf("|                  |                              |                                       |\n");
      printf("|        f         |                v             |                     f                 |\n");
      printf("|                  |                              |                                       |\n");
      printf("|        v         |                f             |                     f                 |\n");
      printf("|                  |                              |                                       |\n");
      printf("|        f         |                f             |                     v                 |\n");
      printf("|__________________|______________________________|_______________________________________|%s\n", FIM);
      Draw();
    }
     case 4:
    {
      Apagar_Tela();
      Draw();
      printf("%s__________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|        p                          q                                 p V q               |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                  |                              |                                       |\n", AMARELO);
      printf("|          v         |                v             |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |                v             |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          v         |                f             |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |                f             |                    f                |\n");
      printf("|____________________|______________________________|_____________________________________|%s\n", FIM);
      Draw();
    }
     case 5:
    {
      Apagar_Tela();
      Draw();
      printf("%s__________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|        p                          q                                 p ^ q               |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                                                                                         |\n", AMARELO);
      printf("|                    |                              |                                     |\n");
      printf("|          v         |                v             |                    v                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |                v             |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          v         |                f             |                    f                |\n");
      printf("|                    |                              |                                     |\n");
      printf("|          f         |                f             |                    f                |\n");
      printf("|____________________|______________________________|_____________________________________|%s\n", FIM);
      Draw();
    }
  }
}

void Matrizes_Input(int a[50][50], int linhas, int colunas) {
  int i, j;
  
  Draw();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf(" %d", &a[i][j]);
    }
  }
  Draw();
}

int Matriz_Soma(int a[50][50], int b[50][50], int linhas, int colunas) {
 int c, i, j;

  Draw();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      c = a[i][j] + b[i][j];
      printf("%s| %d |%s", AMARELO_SUBLINHADO, c, FIM);
    }
  printf("\n");
  }
  Draw();
  return 0;
}

int Matriz_Sub(int a[50][50], int b[50][50], int linhas, int colunas) {
 int c, i, j;
   
  Draw();
  for(i = 0; i < linhas; i++) {   
    for(j = 0; j < colunas; j++) {
      c = a[i][j] - b[i][j];                
      printf("%s| %d |%s", AMARELO_SUBLINHADO, c, FIM);
    }     
  printf("\n");
  }       
  return 0;
  Draw();
}  


void Matriz_Mult(int a[50][50], int b[50][50], int linhas, int colunas) {
  int c = 0, i, j, s, k;

  Draw();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < linhas; j++) {
      for(k = 0; k < colunas; k++) {
        s = a[i][k] * b[k][j];
        c = c + s;
      }
        printf("%s| %3d |%s", AMARELO_SUBLINHADO, c, FIM);
        c = 0;
    }
    printf("\n");
  }
  Draw();
}

void Fatorial() {
  float resp = 1;
  float n;

  Draw();
  printf("%s_____________________________________________________________________________\n", AMARELO);
  printf("|                                  Fatorial                                      |\n");
  printf("|                                                                                |\n");
  printf("%s| %sDigite o valor do numero fatorial:                                          %s|\n", AMARELO, VERDE, AMARELO);
  printf("|________________________________________________________________________________|%s\n", FIM);
  scanf(" %f", &n);

  Apagar_Tela();
  Draw();
  if (n == 0) {
    printf("\n1\n");
  Draw();

  } else {
int i;
  for(i = n; n > 0; n--) {
    resp = resp*n;
  printf("%.2f\n", resp);
    }
  }
  Draw();
}

void Arranjo() {
  float n = 0, p = 0, resp;
  float arg = n - p;
  int fatorial = 1;
  int fatorial2 = 1;

  Apagar_Tela();
  Draw();
  printf("%s__________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                   |\n");
  printf("|                                 Calculo de Arranjo                                |\n");
  printf("|                                                                                   |\n");
  printf("| Digite o valor de 'n':                                                            |\n");
  scanf(" %f", &n);
  printf("|                                                                                   |\n");
  printf("| Digite o valor de 'p':                                                            |%s\n", FIM);
  scanf(" %f", &p);
int k;
  for(k = n; n > 0; n--) {
    fatorial = fatorial*n;
  }
int i;
  for(i = arg; arg > 0; arg--) { 
    fatorial2 = fatorial2*arg;
  }

    resp = fatorial/fatorial2;
    Apagar_Tela();
    Draw();
    printf("\n\n%.2f\n\n", resp);
  Draw(); 
}

void Combinacao() {
  float p = 0, n = 0, resp;
  int fatorial = 1;
  int fatorial3 = 1;
  int fatorial2 = 1;
  float arg = (n - p);
  
  Apagar_Tela();
  Draw();
  printf("%s___________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                   |\n");
  printf("|                             Calculo de combinacao                                 |\n");
  printf("|                                                                                   |\n");
  printf("| Digite o valor de 'n':                                                            |\n");
  scanf(" %f", &n);
  printf("|                                                                                   |\n");
  printf("| Digite o valor de 'p':                                                            |\n");
  scanf(" %f", &p);
int i;
  for(i = n; n > 0; n--) {
    fatorial = fatorial*n;
  }
int k;
  for(k = p; p > 0; p--) {
    fatorial3 = fatorial3*p;
  }
  for(arg; arg > 0; arg--) {
    fatorial2 = fatorial2*arg;
  }
  resp = fatorial/fatorial3*fatorial2;
  Apagar_Tela();
  Draw();
  printf("\n\n%.2f\n\n", resp);
  Draw();
}

void Cripto_Cesar() {
  char mensagem[300], ch;
	int i, chave;

  Draw();
  printf("%s__________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                 |\n");
  printf("|                            Criptografia de Cesar                                |\n");
  printf("|                                                                                 |\n");
  printf("| %sEntre com a mensagem para criptografar: %s                                      |\n", VERDE, AMARELO);
	printf("|                                                                                 |\n");
	//usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
  printf("%s| %sEntre com a chave: %s                                                       |\n", AMARELO, VERMELHO, AMARELO);
	printf("|                                                                                 |\n");
  //usa os valores da tabela em ascii
  scanf(" %d", &chave);
  for(i = 0; mensagem[i] != '\0'; ++i){
    ch = mensagem[i];
    if(ch >= 'a' && ch <= 'z'){
      ch = ch + chave;
        if(ch > 'z'){
        ch = ch - 'z' + 'a' - 1;
      }
      mensagem[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
      ch = ch + chave;
      if(ch > 'Z'){
        ch = ch - 'Z' + 'A' - 1;
      }
		mensagem[i] = ch;
    }
  }
  printf("%s_________________________________________________________________________________\n", AMARELO);
	printf(" Mensagem encriptada: %s\n", mensagem);
  Draw();
}

void Decrip_Cesar() {
  char mensagem[300], ch;
	int i, chave;
	
	Apagar_Tela();
  
  
  Draw();
  printf("%s_________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                 |\n");
  printf("|                           Descriptografia de Cesar                              |\n");
  printf("| %sEntre com a mensagem criptografada: %s                                        |\n", VERDE, AMARELO);
	printf("|                                                                                 |\n");
  //usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
  printf("| %sEntre com a chave:                                                            |\n", VERMELHO);
  printf("|                                                                                 |\n");
  //esta considerando o valor ascii de cada letra
  scanf(" %d", &chave);
	
	for(i = 0; mensagem[i] != '\0'; ++i) {
	ch = mensagem[i];
		
  if(ch >= 'a' && ch <= 'z') {
    ch = ch - chave;
			
    if(ch < 'a') {
      ch = ch + 'z' - 'a' + 1;
    }
      mensagem[i] = ch;
    
    } else if(ch >= 'A' && ch <= 'Z') {
      ch = ch - chave;
        
      if(ch < 'A') {
        ch = ch + 'Z' - 'A' + 1;
      }
        mensagem[i] = ch;
      }
	  }
  printf("%s__________________________________________________________________________________\n", AMARELO);
  printf(" %sMensagem descriptografada: %s\n", VERDE, mensagem);
  Draw();
}

void ConvDec_to_Bin() {
  int a[10], i, dec;
  
  
  Draw();
  printf("%s_________________________________________________________________\n", AMARELO);
  printf("|               Decimal para Binario                             |\n");
  printf("|                                                                |\n");
  printf("| Abaixo insira o numero %sdecimal%s %spara conversao em binario (some|\n| nte valores positivos, inteiros e com no maximo 10 digitos)    |\n", VERMELHO, FIM, AMARELO);
  printf("|________________________________________________________________|%s\n", FIM);
  printf(" Numero decimal (base 10): ");
  scanf(" %d", &dec);

  for(i=0;dec>0;i++) {    
    a[i]=dec%2;    
    dec=dec/2;    
  }
  printf("%s_________________________________________________________________\n", AMARELO);
  printf("|                                                                |\n");
  printf("| %sBinario do numero dado eh: %s                                    |\n", VERDE, AMARELO);
  printf("|                                                                |\n");
  for(i=i-1;i>=0;i--) {    
    printf("\t%d",a[i]);    
    if(a[i] == (dec-1)) {
    }
  }
  printf("\n");
  Draw(); 
}

void ConvBin_to_Dec() {
  int dec, decimal = 0;
  int i = 0, resto;
  
  
  Draw();
  printf("\n                          Binario para Decimal                   \n\n");
  printf("\n\033[0;32;1mInsira o numero \033[0;31;1mbinario\033[m \033[0;32;1mpara conversao em decimal (somente valores positivos e inteiros): \033[m\n");
  scanf(" %d", &dec);

  while(dec != 0){
    //pega o ultimo digito significante do numero
      resto = dec % 10;
      decimal = decimal + resto*Potencia(2, i);
      i++;
      dec = dec / 10;
    }

  Apagar_Tela();
  printf("O decimal do numero dado eh: %d\n", decimal);
  Draw();
}

int Potencia(int base, int expoente) {

  int result = 1;
  int i;

  for(i = 0; expoente != 0; i++) {
    result *= base;
    expoente--;
    }
  return result;
}

// função para fazer uma paequena "moldura" em torno das janelas de output 
void Draw() {
  
  printf("%s===========================================================================%s\n", BLUE_BG, FIM);
}
// Comente a função Draw() acima e descomente a abaixo para usar no GNU/Linux. Para linux users é um pouco diferente :)
/*void Draw() {
  int letra;
  int fundo;
  for (fundo = 0; fundo <= 7; fundo++) {
    for (letra = 0; letra <= 7; letra++) {
      printf("\033[4%d;3%d;1m \033[m", fundo, letra);
    }
  }
  printf("\n");
}*/

//função para apagar o console usando regex
void Apagar_Tela() {
   //printf("\e[1;1H\e[2J");
  printf("\x1b[2J");
}

//função para dar a opção de voltar ou continuar na função selecionada
char Enter() {  
  
  char resposta;
  printf("\nDeseja voltar para o Menu Principal?(s)im (n)ao\n");
  scanf(" %c", &resposta);
  Apagar_Tela();
  while(resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N') {
    printf("\n%s VALOR INVALIDO%s\n", VERMELHO, FIM);
    printf("\nDeseja voltar para o Menu Principal?(s)im (n)ao\n"); 
    scanf(" %c", &resposta);
    Apagar_Tela();
  }
  return resposta;
}


#ifdef _WIN32
#include <windows.h>
#endif

#include <stdio.h>
//#include "ansi_escapes.h"
 
#ifdef _WIN32
 // Some old MinGW/CYGWIN distributions don't define this:
#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
#endif
 
static HANDLE stdoutHandle;
static DWORD outModeInit;
 
void setupConsole(void) {
 	DWORD outMode = 0;
 	stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
 
 	if(stdoutHandle == INVALID_HANDLE_VALUE) {
 		exit(GetLastError());
 	}
 	
 	if(!GetConsoleMode(stdoutHandle, &outMode)) {
 		exit(GetLastError());
 	}
 
 	outModeInit = outMode;
 	
     // Enable ANSI escape codes
 	outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
 
 	if(!SetConsoleMode(stdoutHandle, outMode)) {
 		exit(GetLastError());
 	}	
 }
 
void restoreConsole(void) {
     // Reset colors
     printf("\x1b[0m");	
 	
     // Reset console mode
 	if(!SetConsoleMode(stdoutHandle, outModeInit)) {
 		exit(GetLastError());
 	}
 }
#else
void setupConsole(void) {}
 
void restoreConsole(void) {
     // Reset colors
     printf("\x1b[0m");
 }
#endif
