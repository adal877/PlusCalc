#include <stdio.h>
#include <stdlib.h>
#include "functions-full.h"
#include "ansicolor.h"
#include "prototype.h"
/* 
   @@@@@@@   @@@       @@@  @@@   @@@@@@    @@@@@@@   @@@@@@   @@@        @@@@@@@  
   @@@@@@@@  @@@       @@@  @@@  @@@@@@@   @@@@@@@@  @@@@@@@@  @@@       @@@@@@@@  
   @@!  @@@  @@!       @@!  @@@  !@@       !@@       @@!  @@@  @@!       !@@       
   !@!  @!@  !@!       !@!  @!@  !@!       !@!       !@!  @!@  !@!       !@!       
   @!@@!@!   @!!       @!@  !@!  !!@@!!    !@!       @!@!@!@!  @!!       !@!       
   !!@!!!    !!!       !@!  !!!   !!@!!!   !!!       !!!@!!!!  !!!       !!!       
   !!:       !!:       !!:  !!!       !:!  :!!       !!:  !!!  !!:       :!!       
   :!:       :!:       :!:  !:!      !:!   :!:       :!:  !:!  :!:       :!:       
   ::        :: ::::    :::::::   ::::::    ::: :::  ::   :::  :: ::::   ::: :::  
   :         : :: : :   : : :    :: : :      :: :: :  :   : :  : :: : :   :: :: :
 
   Dev.: Ma7ry
                        
Conclusion date: 08/11/2020
*/
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
    printf("%s|___|___________________________________________________________|%s\n\n", AMARELO, FIM);
    Draw();
   printf("%sEntre com a acao desejada: %s", VERDE, FIM);

      scanf(" %d", &escolha);
      if(escolha == '\0' || escolha > 7) {
        printf("OPCAO INVALIDA");
        cont = Enter();
      }

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
        int escolha;
        Draw();
        printf("%s_____________________________________________________________\n", AMARELO);
        printf("%s|                   Somatorio                                  |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                                          |\n", AMARELO);
        printf("| 1 | - Somatorio dos numeros naturais                         |\n");
        printf("|   |                                                          |\n");
        printf("| 2 | - Somatorio com regra (-j)^j+1                           |\n");
        printf("|   |                                                          |\n");
        printf("|___|__________________________________________________________|\n");
        Draw();
        scanf(" %d", &escolha);
        switch(escolha) {
          default:
            {
              printf("OPCAO INVALIDA");
            }
          case 1:
            {
              Somatorio();
              cont = Enter();
            }
            break;
          case 2:
            {
              Somatorio2();
              cont = Enter();
            }
          }
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
           printf("%s_____________________________________________________________\n", AMARELO);
           printf("| Considere que para o funcionamento dos calculos, as marizes  |\n| devem possuir valores maximos de 50x50                        |\n");
           printf("| Insira o numero de linhas da matriz (a):                     |\n");
           scanf(" %d", &linhas);

           printf("| Insira o numero de colunas da matriz (a):                    |\n");
           scanf(" %d", &colunas);

           printf("| Insira os elementos da matriz (a) %d x %d                    |\n", linhas, colunas);
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
       int escolha;
        Draw();
        printf("%s_______________________________________________\n", AMARELO);
        printf("%s|       Qual calculo gostaria de fazer?       |%s\n", AMARELO_SUBLINHADO, FIM);
        printf("%s|   |                                         |\n", AMARELO);
        printf("| 1 |-> Fatorial                              |\n");
        printf("|   |                                         |\n");
        printf("| 2 |-> Arranjo do tipo N!/(N - P)!           |\n");
        printf("|   |                                         |\n");
        printf("| 3 |-> Combinacao do tipo C=N!/P!(N-P)!      |\n");
        printf("|   |                                         |\n");
        printf("| 4 |-> Analise combinatoria                  |\n");
        printf("|___|_________________________________________|%s\n", FIM);
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
      }//fim do switch do menu
    } while(escolha != 7);
  }//fim do main
