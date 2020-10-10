/*
******************ATENÇÃO*****************
    SÓ MECHA NO CODIGO SE SOUBER O QUE ESTA FAZENDO, 
  CASO CONTRARIO NEM MUDAR AS VARIAVEIS.

Att: Desenvolvedor exausto e que esta cansado dessa vida complicada.

*/
#include <stdio.h>
#include <stdlib.h>
//usa do metodo de prototipos para inicializar as funções do programa
float Matrizes(), Matriz_Soma(), Matriz_Mult(), Matriz_Sub(), Somatorio();
float Matriz_Determi(), Fatorial(), Arranjo(), Combinacao();
int ConvBin_to_Dec(), ConvDec_to_Bin();
char Logica_prop(), Cripto_Cesar(), Decrip_Cesar();
void Apagar_Tela(), Cores(), Cores_Vertical();

//define BASE como constante com o valor 2
#define BASE 2

int main() {
  int escolha; 

//usado para apagar o conteudo já mostrado em tela para evitar "poluição" visual 
Apagar_Tela();

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
    printf("\033[4;33;1m│   │                     MENU PRINCIPAL                        │\033[m\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 1 │ -> Somatorio                                              │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 2 │ -> Logica Proposicional                                   │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 3 │ -> Matrizes                                               │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 4 │ -> Analise combinatoria                                   │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 5 │ -> Criptografia de Cesar                                  │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│ 6 │-> Conversor: decimal -> binario // binario -> decimal     │\n");
    printf("\033[0;33;1m│   │                                                           │\n");
    printf("\033[0;33;1m│\033[0;31;1m 7 \033[m\033[0;33;1m│\033[0;31;1m -> Sair\033[m                               \033[0;33;1m                    │\033[m\n");
    printf("\033[0;33;1m│___│___________________________________________________________│\n");
    printf("\033[0;32;1mEntre com a acao desejada: \n\033[m             ");
    printf("\n");
    Cores();
    scanf("\n%d", &escolha);
Apagar_Tela();

  switch(escolha) {
      
      default:
      {
        printf("\n");
        printf("\033[0;31;1mAPENAS PERMITIDO NUMEROS ENTRE 1 E 7...");
      }
      break;

      case 1:
      {
        printf("%d",Somatorio());
      }
    break;

      case 2:
      {
        Logica_prop();
      }
    break;

      case 3:
      {
        printf("\n");
        printf("Qual calculo gostaria de realizar?");
        printf("\n");
        printf("1 - Soma");
        printf("\n");
        printf("2 - Subtracao");
        printf("\n");
        printf("3 - Multiplicacao");
        printf("\n");
        printf("4 - Determinante");
        printf("\n");
        scanf("%d", &escolha);

        Apagar_Tela();
        switch(escolha) {
          case 1:
          {
            Matriz_Soma();
          }
          break;

          case 2:
          {
            Matriz_Sub();
          }
          break;

          case 3:
          {
            Matriz_Mult();; 
          }
          break;

          case 4:
          {
            Matriz_Determi(); 
          }
          break;
        }
      }
    break;

      case 4:
      { 
       // Analise_comb();
       int escolha;
        printf("Qual calculo gostaria de fazer?\n");
        printf("\n");
        printf("1 - Fatorial\n");
        printf("\n");
        printf("2 - Arranjo do tipo N!/(N - P)!\n");
        printf("\n");
        printf("3 - Combinacao do tipo C=N!/P!(N-P)!\n");
        scanf("%d", &escolha);
        
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

        }
      }
    break;

      case 5:
      {
        int escolha3;
        printf("O que voce gostaria de fazer?\n");
        printf("\n");
        printf("\033[0;32;1m1 -> Criptografar\n\033[m");
        printf("\n");
        printf("\033[0;33;1m2 -> Descriptografar\n\033[m");
        scanf("%d", &escolha3);
          
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

        }
      }
    break;  
      
      case 6:
      {
        int escolha2;
        printf("Voce deseja fazer qual tipo de conversao?\n");
        printf("\n");
        printf("\033[0;32;1m1 - Converter de decimal para binario\n\033[m");
        printf("\n");
        printf("\033[0;33;1m2 - Converter de binario para decimal\n\033[m");
        printf("\n");
        scanf("%d", &escolha2);
        
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
        }
      }
    break;

      case 7:
      {
        printf("\033[0;31;1mEncerrando o programa...\033[m");
      }
      break;
      }
    } while(escolha != 7);
  }
  
float Somatorio() {
 float num, i, n, a;
  Cores();
  printf("\n");
  printf("Entre com o valor minimo: \n");                                                             
  scanf("%f", &i);                                                                                    
  printf("\n");
  printf("Entre com o valor maximo: \n");                                                             
  scanf("%f", &n);                                                                                    
  printf("\n");
  printf("Entre com o valor da constante: \n");                                                       
  scanf("%f", &a); 
  
  Apagar_Tela();

  if (n >= i) {
  num = n - i;
  float num2; 
  num2 = (a * num) + a;
  printf("\n");
  return printf("\033[0;36;1mO resultado eh: %.2f\n\033[m", num2);
  
  printf("Tecle [ENTER] para continuar...");
  getchar();       
  Apagar_Tela(); 
  } else {
    
    Apagar_Tela();

  printf("\n");
  printf("\033[0;31;1mO valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...\033[m"); 
  Cores();
    } 
  return 0;
}

char Logica_prop() {
  float j, k;
  Cores();
  printf("\n");
  printf("Entre com os valores para o calculo: ");
  scanf("%f", &j);     
  scanf("%f", &k);
  int p1 = 1;
  int q0 = 0;
  int resultado;
  Cores();
  return 0;
}

float Matrizes() {
  return 0;
}

float Matriz_Soma() {
 int Matriz[100][100];
 int Matriz2[100][100];
 float l, c, l2, c2, resp;

  Cores();
  printf("\n");
  printf("\033[0;32;1mInsira os valores para a matriz(1)\n\033[m");
  printf("\n");
  printf("Quantas linhas?");
  scanf("%f", &l);
  printf("\n");
  printf("Quantas colunas?");
  scanf("%f", &c);
  printf("\n");
  printf("=================================================");
  printf("\n");
  printf("\033[0;32;1mInsira os dados para a matriz(2)\033[m");
  printf("\n");
  printf("Quantas linhas?");
  scanf("%f", &l2);
  printf("\n");
  printf("Quantas colunas?");
  scanf("%f", &c2);
  Cores();
 // resp = Matriz + Matriz2;
  return resp;
}

float Matriz_Sub() {
  Cores();
  return 0;
}

float Matriz_Mult() {
  Cores();
  return 0;
}

float Matriz_Determi() {
  Cores();
  return 0;
}

float Fatorial() {
  float resp = 1;
  float n;

  Cores();
  printf("\n");
  printf("\033[0;32;1mDigite o valor do numero fatorial: \n\033[m");
  scanf("%f", &n);

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
  return 0;
}

float Arranjo() {
  float n, p, resp;
  float arg = n - p;
  int fatorial = 1;
  int fatorial2 = 1;

  Cores();
  printf("\n");
  printf("Digite o valor de 'n': \n");
  scanf("%f", &n);
  printf("\n");
  printf("Digite o valor de 'p': \n");
  scanf("%f", &p);

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
  return 0;
}

float Combinacao() {
  float p, n, resp;
  int fatorial = 1;
  int fatorial3 = 1;
  int fatorial2 = 1;
  float arg = (n - p);
  
  Cores();
  printf("\n");
  printf("Digite o valor de 'n': \n");
  scanf("%f", &n);
  printf("\n");
  printf("Digite o valor de 'p'\n");
  scanf("%f", &p);

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
  return 0;
}

char Cripto_Cesar() {
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
  scanf("%d", &chave);
	
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
  return 0;
}

char Decrip_Cesar() {
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
  scanf("%d", &chave);
	
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
  return 0;
}

int ConvDec_to_Bin() {
  int a[10], i, bin;

  Cores();
  printf("\n");
  printf("\033[0;32;1mInsira o numero \033[0;31;1mdecimal\033[m \033[0;32;1mpara conversao em binario (somente valores positivos e inteiros): \n\033[m");
  scanf("%d", &bin);
  
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
  return 0;
}

int ConvBin_to_Dec() {
  int decimal = 0;
  int N = 0;
  int dec;

  Cores();
  printf("\n");
  printf("\033[0;32;1mInsira o numero \033[0;31;1mbinario\033[m \033[0;32;1mpara conversao em decimal (somente valores positivos e inteiros): \n\033[m");
  scanf("%d", &dec);

  while(dec != 0) {
    //se o digito binario atual é 1
    if(dec % 10 == 1) {
      decimal += BASE*N;
    }
  
  N++;
  dec /= 10;
    
    }
    printf("\n");
    printf("Decimal do numero dado eh: \n");
    printf("%d", decimal);
  Cores();
  return 0;
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
//função para apagar o console 
void Cores_Vertical() {
  int letra, fundo;
  for (fundo = 0; fundo <= 7; fundo++) {
    for(letra = 0; letra <= 7; letra++) {
      printf("\n\033[4%d;3%d;1m \033[m", fundo, letra);
    }
  }
}

void Apagar_Tela() {
#ifdef WINDOWS
//se estiver rodando no windows usa o comando cls para apagar o controle
  system("cls");

#else 
//se estiver no GNU/Linux ou unix-like usa o comando clear para apagar o console 
  system("clear");

#endif
}
