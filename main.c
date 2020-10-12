/*
******************ATENÇÃO*****************
    SÓ MECHA NO CODIGO SE SOUBER O QUE ESTA FAZENDO, 
  CASO CONTRARIO NEM MUDAR AS VARIAVEIS.

Att: Desenvolvedor exausto e que esta cansado dessa vida complicada.

*/
#include <stdio.h>
#include <stdlib.h>
//usa do metodo de prototipos para inicializar as funções do programa
//int
void Matrizes_Input(int a[1000][1000], int linhas, int colunas);
int Matriz_Soma(int a[1000][1000], int b[1000][1000], int linhas, int colunas);
void Matriz_Mult(int a[1000][1000], int b[1000][1000], int linhas, int colunas);
int Matriz_Sub(int a[1000][1000], int b[1000][1000], int linhas, int colunas);
void Somatorio();
void Matriz_Determi(int a[1000][1000], int b[1000][1000], int linhas, int colunas); 
void Fatorial(), Arranjo(), Combinacao();
void ConvBin_to_Dec(), ConvDec_to_Bin();
void Logica_prop(), Cripto_Cesar(), Decrip_Cesar();
void Apagar_Tela(), Cores(), Cores_Vertical();

int main() {
  int escolha; 

//usado para apagar o conteudo já mostrado em tela para evitar "poluição" visual 
//Apagar_Tela();

    Cores();
//um banner para deixar a calculadora com um aspecto mais agradavel e user-friendlly
    printf("\n\033[0;36;1m@@@@@@@   @@@       @@@  @@@   @@@@@@    @@@@@@@   @@@@@@   @@@        @@@@@@@  \n@@@@@@@@  @@@       @@@  @@@  @@@@@@@   @@@@@@@@  @@@@@@@@  @@@       @@@@@@@@  \n@@!  @@@  @@!       @@!  @@@  !@@       !@@       @@!  @@@  @@!       !@@       \n!@!  @!@  !@!       !@!  @!@  !@!       !@!       !@!  @!@  !@!       !@!       \n@!@@!@!   @!!       @!@  !@!  !!@@!!    !@!       @!@!@!@!  @!!       !@!       \n!!@!!!    !!!       !@!  !!!   !!@!!!   !!!       !!!@!!!!  !!!       !!!       \n!!:       !!:       !!:  !!!       !:!  :!!       !!:  !!!  !!:       :!!       \n:!:        :!:      :!:  !:!      !:!   :!:       :!:  !:!   :!:      :!:       \n ::        :: ::::  ::::: ::  :::: ::    ::: :::  ::   :::   :: ::::   ::: :::  \n :        : :: : :   : :  :   :: : :     :: :: :   :   : :  : :: : :   :: :: :\n\033[m");

    Cores();
    printf("\nAperte [ENTER] para continuar...");
    getchar();
    Apagar_Tela();

  //do while para executar o menu
  do {
    Cores();
    printf("\033[0;33;1m_________________________________________________________________\n");
    printf("\033[4;33;1m|   |                     MENU PRINCIPAL                        |\033[m\n");
    printf("\033[0;33;1m|   |                                                           |\n");
    printf("| 1 | -> Somatorio                                              |\n");
    printf("|   |                                                           |\n");
    printf("| 2 | -> Logica Proposicional                                   |\n");
    printf("|   |                                                           |\n");
    printf("| 3 | -> Matrizes                                               |\n");
    printf("|   |                                                           |\n");
    printf("| 4 | -> Analise combinatoria                                   |\n");
    printf("|   |                                                           |\n");
    printf("| 5 | -> Criptografia de Cesar                                  |\n");
    printf("|   |                                                           |\n");
    printf("| 6 |-> Conversor: decimal -> binario // binario -> decimal     |\n");
    printf("|   |                                                           |\n");
    printf("\033[0;33;1m|\033[0;31;1m 7 \033[m\033[0;33;1m|\033[0;31;1m -> Sair\033[m                               \033[0;33;1m                    |\033[m\n");
    printf("\033[0;33;1m|___|___________________________________________________________|\n\n");
    Cores();
    printf("\033[0;32;1mEntre com a acao desejada: \033[m");
    scanf(" %d", &escolha);
Apagar_Tela();

  switch(escolha) {
      
      default:
      {
        printf("\n\033[0;31;1mAPENAS PERMITIDO NUMEROS ENTRE 1 E 7...\n\033[m");
      }
      break;

      case 1:
      {
        Somatorio();
      }
    break;

      case 2:
      {
        Logica_prop();
      }
    break;

      case 3:
      {
        Cores();
        printf("\033[0;33;1m_____________________________________________________________\n");
        printf("\033[4;33;1m|     Qual calculo gostaria de realizar?                    |\033[m\n");
        printf("\033[0;33;1m|   |                                                       |\n");
        printf("| 1 |-> Soma                                              |\n");
        printf("|   |                                                     |\n");
        printf("| 2 |-> Subtracao                                         |\n");
        printf("|   |                                                     |\n");
        printf("| 3 |-> Multiplicacao                                     |\n");
        printf("|   |                                                     |\n");
        printf("| 4 |-> Determinante                                      |\n");
        printf("|___|_____________________________________________________|\033[m\n");
        Cores();
        scanf(" %d", &escolha);

        Apagar_Tela();
        switch(escolha) {
          case 1:
          {
            int a[1000][1000], b[1000][1000], linhas, colunas, i, j;

           Cores();
           printf("\033[0;33;1m_____________________________________________________________\n");
           printf("Considere que para o funcionamento dos calculos, as matrizes\n devem possuir valores maximos de 1000x1000\n (afinal, porque não? ¯\\_(ツ)_/¯)\n");
            printf("Insira o numero de linhas da matriz: \n");
            scanf(" %d", &linhas);

            printf("Insira o numero de colunas da matriz: \n");
            scanf(" %d", &colunas);

            printf("Insira os elementos da matriz 1 %d x %d\n", linhas, colunas);
            Cores();

            Matrizes_Input(a, linhas, colunas);
            
            printf("Insira os elementos da matriz 2 %d x %d\n", linhas, colunas);
            printf("________________________________________________________________\n\033[m");
            Cores();
            Matrizes_Input(b, linhas, colunas);
            
            // Matriz_Soma();
            Matriz_Soma(a, b, linhas, colunas);
          }
          break;

          case 2:
          {
             int a[1000][1000], b[1000][1000], linhas, colunas, i, j;

           Cores();
           printf("\033[0;33;1m_____________________________________________________________\n");
           printf("Considere que para o funcionamento dos calculos, as marizes devem possuir valores maximos de 1000x1000\n");
            printf("Insira o numero de linhas da matriz (a): \n");
            scanf(" %d", &linhas);

            printf("Insira o numero de colunas da matriz (a): \n");
            scanf(" %d", &colunas);

            printf("Insira os elementos da matriz (a) %d x %d\n", linhas, colunas);
            Cores();

            Matrizes_Input(a, linhas, colunas);

            printf("Insira os elementos da matriz (b) %d x %d\n", linhas, colunas);
            Cores();
            Matrizes_Input(b, linhas, colunas);

            //função de subtração de matrizes
            Matriz_Sub(a, b, linhas, colunas);
          }
          break;

          case 3:
          {
             int a[1000][1000], b[1000][1000], linhas, colunas, i, j;

           Cores();
           printf("Considere que para o funcionamento dos calculos, as marizes devem possuir valores maximos de 1000x1000\n");
            printf("Insira o numero de linhas da matriz (b): \n");
            scanf(" %d", &linhas);

            printf("Insira o numero de colunas da matriz (a): \n");
            scanf("%d%*c", &colunas);

            printf("Insira os elementos da matriz (a) %d x %d\n", linhas, colunas);

            Matrizes_Input(a, linhas, colunas);

            printf("Insira os elementos da matriz (b) %d x %d\n", linhas, colunas);
            Cores();
            Matrizes_Input(b, colunas, linhas);

            //função de multiplicação de matrizes
            Matriz_Mult(a, b, linhas, colunas); 
            printf("ENTER, CARALHO...\n");
            getchar();
          }
          break;

          case 4:
          {
            int a[1000][1000], b[1000][1000], linhas, colunas, i, j;

            Cores();
            printf("Considere que para o funcionamento dos calculos, as marizes devem possuir valores maximos de 1000x1000\n");
            printf("Insira o numero de linhas da matriz (a): \n");
            scanf(" %d", &linhas);

            printf("Insira o numero de colunas da matriz (a): \n");
            scanf(" %d", &colunas);

            printf("Insira os elementos da matriz (a) %d x %d\n", linhas, colunas);

            Matrizes_Input(a, linhas, colunas);

            printf("Insira os elementos da matriz (b) %d x %d\n", linhas, colunas);
            Cores();
            Matrizes_Input(b, linhas, colunas);

            //função de deerminante
            Matriz_Determi(a, b, linhas, colunas); 
          }
          break;
          
          default:
          {
            printf("\n\033[0;31;1mAPENAS PERMITIDO NUMEROS ENTRE 1 E 4...\n\033[m");
          }
          break;

        }
      }
    break;

      case 4:
      { 
       // Analise_comb();
       int escolha;
        Cores();
        printf("\033[0;33;1m______________________________________________\n");
        printf("\033[4;33;1m|       Qual calculo gostaria de fazer?       |\n");
        printf("|   |                                                     |\n");
        printf("| 1 |-> Fatorial                                          |\n");
        printf("|   |                                                     |\n");
        printf("| 2 |-> Arranjo do tipo N!/(N - P)!                       |\n");
        printf("|   |                                                     |\n");
        printf("| 3 |-> Combinacao do tipo C=N!/P!(N-P)!                  |\n");
        printf("|___|_____________________________________________________|\n");
        Cores();
        scanf(" %d", &escolha);
        
        Apagar_Tela();
        switch(escolha) {
          
          case 1:
          {
            Fatorial();
          }
          break;

          case 2:
          {
            Arranjo();
          }
          break;
        
          case 3:
          {
            Combinacao();
          }
          break;
          
          default:
          {
            printf("\n\033[0;31;1mAPENAS PERMITIDO NUMEROS ENTRE 1 E 3...\n\033[m");
          }
          break;
        }
      }
    break;

      case 5:
      {
        int escolha3;
        Cores();
        printf("\033[0;33;1m_____________________________________________________________\n");
        printf("\033[4;33;1m|       O que voce gostaria de fazer?                        |\033[m\n");
        printf("\033[0;33;1m|   |                                                        |\n");
        printf("\033[0;33;1m|\033[m\033[0;32;1m 1 \033[m\033[0;33;1m|->\033[m \033[0;32;1mCriptografar\033[m                                   |\n");         
        printf("|   |                                                        |\n");
        printf("\033[0;33;1m| 2 |-> Descriptografar                                      |\n");
        printf("|___|________________________________________________________|\n\033[m");
        Cores();
        scanf(" %d", &escolha3);
          
        Apagar_Tela();
        switch(escolha3) {
          case 1:
          {
            Cripto_Cesar();
          }
          break;

          case 2:
          {
            Decrip_Cesar();
          }
          break;
          
          default:
          {
            printf("\n\033[0;31;1mAPENAS PERMITIDO NUMEROS 1 OU 2...\n\033[m");
          }
          break;

        }
      }
    break;  
      
      case 6:
      {
        int escolha2;
        Cores();
        printf("Voce deseja fazer qual tipo de conversao?\n");
        printf("\n");
        printf("\033[0;32;1m1 - Converter de decimal para binario\n\033[m");
        printf("\n");
        printf("\033[0;33;1m2 - Converter de binario para decimal\n\033[m");
        printf("\n");
        Cores();
        scanf(" %d", &escolha2);
        
        Apagar_Tela();
        switch(escolha2) {
          case 1:
          {
            ConvDec_to_Bin();
          }
          break;
          
          case 2:
          { 
            ConvBin_to_Dec();
          }
          break;

          default:
          {
            printf("\n\033[0;31;1mAPENAS PERMITIDO NUMEROS 1 OU 2...\n\033[m");
          }
          break;

        }
      }
    break;

      case 7:
      {
        printf("\n\033[0;31;1mEncerrando o programa...\033[m");
      }
      break;
      }
    } while(escolha != 7);
  }
  
void Somatorio() {
 float num, i, n, a;
  Cores();
  printf("\n");
  printf("Entre com o valor minimo: \n");                                                             
  scanf(" %f", &i);                                                                                    
  printf("\n");
  printf("Entre com o valor maximo: \n");                                                             
  scanf(" %f", &n);                                                                                    
  printf("\n");
  printf("Entre com o valor da constante: \n");                                                       
  scanf(" %f", &a); 
  
  Apagar_Tela();

  if (n >= i) {
  num = n - i;
  float num2; 
  num2 = (a * num) + a;
  printf("\n");
  printf("\033[0;36;1mO resultado eh: %.2f\n\n\033[m", num2);
  printf("Tecle [ENTER] para continuar...");
  getchar();       
  Apagar_Tela(); 
  } else {
    
    Apagar_Tela();

  printf("\n");
  printf("\033[0;31;1mO valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...\033[m"); 
  Cores();
    } 
  
}

void Logica_prop() {
  float j, k;
  Cores();
  printf("\n");
  printf("Entre com os valores para o calculo: ");
  scanf(" %f", &j);     
  scanf(" %f", &k);
  int p1 = 1;
  int q0 = 0;
  int resultado;
  Cores();
  
}

void Matrizes_Input(int a[1000][1000], int linhas, int colunas) {
  int i, j;
  
  Cores();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf(" %d", &a[i][j]);
      
    }
  }
  Cores();
}

int Matriz_Soma(int a[1000][1000], int b[1000][1000], int linhas, int colunas) {
 int c, i, j;

  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      c = a[i][j] + b[i][j];
      printf("\033[4;32;1m| %d |\033[m", c);
    }
  printf("\n");
  }
  return 0;
}

int Matriz_Sub(int a[1000][1000], int b[1000][1000], int linhas, int colunas) {
 int c, i, j;
   
  for(i = 0; i < linhas; i++) {   
    for(j = 0; j < colunas; j++) {
      c = a[i][j] - b[i][j];                
      printf("\033[4;32;1m| %d |\033[m", c);
    }     
  printf("\n");
  }       
  return 0;
}  


void Matriz_Mult(int a[1000][1000], int b[1000][1000], int linhas, int colunas) {
  int c = 0, i, j, s, k;

  Cores();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < linhas; j++) {
      for(k = 0; k < colunas; k++) {
        s = a[i][k] * b[k][j];
        c = c + s;
      }
        printf("\033[4;32;1m| %3d |\033[m", c);
        c = 0;
    }
    printf("\n");
  }
}

void Matriz_Determi(int a[1000][1000], int b[1000][1000], int linhas, int colunas) {
  Cores();
  
}

void Fatorial() {
  float resp = 1;
  float n;

  Cores();
  printf("\n");
  printf("\033[0;32;1mDigite o valor do numero fatorial: \n\033[m");
  scanf(" %f", &n);

  Apagar_Tela();
  if (n == 0) {
    printf("1");
  
  } else {

  for(n; n > 0; n--) {
    resp = resp*n;
  printf("%.2f\n", resp);
    }
  }
  Cores();
}

void Arranjo() {
  float n, p, resp;
  float arg = n - p;
  int fatorial = 1;
  int fatorial2 = 1;

  Cores();
  printf("\n");
  printf("Digite o valor de 'n': \n");
  scanf(" %f", &n);
  printf("\n");
  printf("Digite o valor de 'p': \n");
  scanf(" %f", &p);

  for(n; n > 0; n--) {
    fatorial = fatorial*n;
  }

  for(arg; arg > 0; arg--) { 
    fatorial2 = fatorial2*arg;
  }

  resp = fatorial/fatorial2;
  printf("\n");
  printf("%.2f", resp);
  
  Cores();
  
}

void Combinacao() {
  float p, n, resp;
  int fatorial = 1;
  int fatorial3 = 1;
  int fatorial2 = 1;
  float arg = (n - p);
  
  Cores();
  printf("\n");
  printf("Digite o valor de 'n': \n");
  scanf(" %f", &n);
  printf("\n");
  printf("Digite o valor de 'p'\n");
  scanf(" %f", &p);

  for(n; n > 0; n--) {
    fatorial = fatorial*n;
  }
  for(p; p > 0; p--) {
    fatorial3 = fatorial3*p;
  }
  for(arg; arg > 0; arg--) {
    fatorial2 = fatorial2*arg;
  }
  resp = fatorial/fatorial3*fatorial2;
  printf("\n");
  printf("%.2f", resp);

  Cores();
  
}

void Cripto_Cesar() {
  char mensagem[100], ch;
	int i, chave;

  Cores();
  printf("\n");
  printf("\033[0;32;1mEntre com a mensagem para criptografar: \n\033[m");
	
	//usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
  printf("\n");
  printf("\033[0;31;1mEntre com a chave: \n\033[m");
	
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
	
	printf("\n");
  printf("\033[0;33;1mMensagem encriptada: %s\033[m", mensagem);
  
  Cores();
  
}

void Decrip_Cesar() {
  char mensagem[100], ch;
	int i, chave;
	
	Apagar_Tela();

  Cores();
  printf("\n");
  printf("\033[0;32;1mEntre com a mensagem criptografada: \n\033[m");
	
  //usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
	printf("\n");
  printf("\033[0;31;1mEntre com a chave: \n\033[m");

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
        	
	  printf("\n");
    printf("Mensagem descriptografada: %s", mensagem);
        
  Cores();
  
}

void ConvDec_to_Bin() {
  int a[10], i, bin;

  Cores();
  printf("\n");
  printf("\033[0;32;1mInsira o numero \033[0;31;1mdecimal\033[m \033[0;32;1mpara conversao em binario (somente valores positivos e inteiros): \n\033[m");
  scanf(" %d", &bin);
  
  for(i=0;bin>0;i++) {    
    a[i]=bin%2;    
    bin=bin/2;    
  }
  printf("\n");
  printf("\nBinario do numero dado eh: ");    
  for(i=i-1;i>=0;i--) {    
    printf("%d",a[i]);    
  }
  Cores();
  
}

void ConvBin_to_Dec() {
  int decimal = 0;
  int N = 0;
  int dec;

  Cores();
  printf("\n");
  printf("\033[0;32;1mInsira o numero \033[0;31;1mbinario\033[m \033[0;32;1mpara conversao em decimal (somente valores positivos e inteiros): \n\033[m");
  scanf(" %d", &dec);

  while(dec != 0) {
    //se o digito binario atual é 1
    if(dec % 10 == 1) {
      decimal += 2*N;
    }
  
  N++;
  dec /= 10;
    
    }
    printf("\n");
    printf("Decimal do numero dado eh: \n");
    printf("%d", decimal);
  Cores();
  
}

void Cores() {
  int letra;
  int fundo;
  for (fundo = 0; fundo <= 7; fundo++) {
    for (letra = 0; letra <= 7; letra++) {
      printf("\033[4%d;3%d;1m \033[m", fundo, letra);
    }
    //printf("\n");
  }
  printf("\n");
}

//função para apagar o console usando regex
void Apagar_Tela() {
   printf("\e[1;1H\e[2J");
}
