#include <stdio.h>
#include <stdlib.h>

//usa do metodo de prototipos para inicializars as funções do programa
int Matrizes(), Matriz_Soma(), Matriz_Mult(), Matriz_Sub(), Fatorial(), Arranjo();
int Combinacao(), ConvBin_to_Dec(), ConvDec_to_Bin();
char Logica_prop(), Cripto_Cesar(), Decrip_Cesar();
void Apagar_Tela();
float Somatorio();

//define BASE como constante com o valor 2
#define BASE 2

int main() {
  int escolha; 

//usado para apagar o conteudo já mostrado em tela para evitar "poluição" visual 
Apagar_Tela();

    printf("\033[0;36;1m@@@@@@@   @@@       @@@  @@@   @@@@@@    @@@@@@@   @@@@@@   @@@        @@@@@@@  \n@@@@@@@@  @@@       @@@  @@@  @@@@@@@   @@@@@@@@  @@@@@@@@  @@@       @@@@@@@@  \n@@!  @@@  @@!       @@!  @@@  !@@       !@@       @@!  @@@  @@!       !@@       \n!@!  @!@  !@!       !@!  @!@  !@!       !@!       !@!  @!@  !@!       !@!       \n@!@@!@!   @!!       @!@  !@!  !!@@!!    !@!       @!@!@!@!  @!!       !@!       \n!!@!!!    !!!       !@!  !!!   !!@!!!   !!!       !!!@!!!!  !!!       !!!       \n!!:       !!:       !!:  !!!       !:!  :!!       !!:  !!!  !!:       :!!       \n:!:        :!:      :!:  !:!      !:!   :!:       :!:  !:!   :!:      :!:       \n ::        :: ::::  ::::: ::  :::: ::    ::: :::  ::   :::   :: ::::   ::: :::  \n :        : :: : :   : :  :   :: : :     :: :: :   :   : :  : :: : :   :: :: :\n\033[m");

    printf("Aperte [ENTER] para continuar...");
    getchar();
    Apagar_Tela();

  //do while para executar o menu
  do {
    printf(" ");
    printf("\033[0;32;1m\nMENU PRINCIPAL\n\033[m");
    printf("1 - Somatorio\n");
    printf("2 - Logica Proposicional\n");
    printf("3 - Matrizes\n");
    printf("4 - Analise cobinatoria\n");
    printf("5 - Criptografia de Cesar\n");
    printf("6 - Conversor: decimal -> binario // binario -> decimal\n");
    printf("7 - Sair\n");
    printf("\033[0;32;1mEntre com a acao desejada: \033[m");
    scanf("%d", &escolha);
  
Apagar_Tela();

  switch(escolha) {
      
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
        Matrizes();
      }
    break;

      case 4:
      { 
       // Analise_comb();
       int escolha;
        printf("Qual calculo gostaria de fazer?\n");
        printf("1 - Fatorial\n");
        printf("2 - Arranjo do tipo N!/(N - P)!\n");
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
        printf("\033[0;32;1m1 -> Criptografar\n\033[m");
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
        printf("\033[0;32;1m1 - Converter de decimal para binario\n\033[m");
        printf("\033[0;33;1m2 - Converter de binario para decimal\n\033[m");
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
    } while (escolha != 7);
  }


//float Somatorio(float i, float n, float a) {
float Somatorio() {
 float num, i, n, a;
  printf("Entre com o valor minimo: \n");                                                             
  scanf("%f", &i);                                                                                    
  printf("Entre com o valor maximo: \n");                                                             
  scanf("%f", &n);                                                                                    
  printf("Entre com o valor da constante: \n");                                                       
  scanf("%f", &a); 
  
  Apagar_Tela();

  if (n >= i) {
  num = n - i;
  float num2; 
  num2 = (a * num) + a;
  return printf("\033[0;36;1mO resultado eh: %.2f\033[m", num2);
  
  } else {
    
    Apagar_Tela();

    printf("\033[0;31;1mO valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...\033[m");
    }
  return 0;
}

char Logica_prop() {
  float j, k; 
  printf("Entre com os valores para o calculo: ");
  scanf("%f", &j);     
  scanf("%f", &k);
  int p1 = 1;
  int q0 = 0;
  int resultado;
  
  return 0;
}

int Matrizes() {
  return 0;
}

int Matriz_Soma() {
 int Matriz[100][100];
 int Matriz2[100][100];
 int l, c, l2, c2, resp;

  printf("\033[0;32;1mInsira os valores para a matriz(1)\n\033[m");
  printf("Quantas linhas?");
  scanf("%d", &l);
  printf("Quantas colunas?");
  scanf("%d", &c);
  printf("=================================================");
  printf("\033[0;32;1mInsira os dados para a matriz(2)\033[m");
  printf("Quantas linhas?");
  scanf("%d", &l2);
  printf("Quantas colunas?");
  scanf("%d", &c2);
  
 // resp = Matriz + Matriz2;
  return resp;
}

int Matriz_Sub() {
  return 0;
}

int Matriz_Mult() {
  return 0;
}

int Fatorial() {
  int resp = 1;
  int n;

  printf("\033[0;32;1mDigite o valor do numero fatorial: \n\033[m");
  scanf("%d", &n);

  Apagar_Tela();
  if (n == 0) {
    printf("1");
  
  } else {

  for(n; n > 0; n--) {
    resp = resp*n;
  printf("%d\n", resp);
    }
  }
  return 0;
}

int Arranjo() {
  int n, p, resp;
  int arg = n - p;
  int fatorial = 1;
  int fatorial2 = 1;

  printf("Digite o valor de 'n': \n");
  scanf("%d", &n);
  printf("Digite o valor de 'p': \n");
  scanf("%d", &p);

  for(n; n > 0; n--) {
    fatorial = fatorial*n;
  }

  for(arg; arg > 0; arg--) { 
    fatorial2 = fatorial2*arg;
  }

  resp = fatorial/fatorial2;
  printf("%d", resp);
  
  return 0;
}

int Combinacao() {
  int p, n, resp;
  int fatorial = 1;
  int fatorial3 = 1;
  int fatorial2 = 1;
  int arg = (n - p);
  
  printf("Digite o valor de 'n': \n");
  scanf("%d", &n);
  printf("Digite o valor de 'p'\n");
  scanf("%d", &p);

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
  printf("%d", resp);

  return 0;
}

char Cripto_Cesar() {
  char mensagem[100], ch;
	int i, chave;

  printf("\033[0;32;1mEntre com a mensagem para criptografar: \n\033[m");
	
	//usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
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
	
	printf("\033[0;33;1mMensagem encriptada: %s\033[m", mensagem);
  
  return 0;
}

char Decrip_Cesar() {
  char mensagem[100], ch;
	int i, chave;
	
	Apagar_Tela();

  printf("\033[0;32;1mEntre com a mensagem criptografada: \n\033[m");
	
  //usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
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
        	
	  printf("Mensagem descriptografada: %s", mensagem);
        
  return 0;
}

int ConvDec_to_Bin() {
  int a[10], i, bin;

  printf("\033[0;32;1mInsira o numero \033[0;31;1mdecimal\033[m para conversao em binario (somente valores valores positivos): \n\033[m");
  scanf("%d", &bin);
  
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

int ConvBin_to_Dec() {
  int decimal = 0;
  int N = 0;
  int dec;

  printf("\033[0;32;1mInsira o numero \033[0;31;1mbinario\033[m para conversao em decimal (somente valores positivos): \n\033[m");
  scanf("%d", &dec);

  while(dec != 0) {
    //se o digito binario atual é 1
    if(dec % 10 == 1) {
      decimal += BASE*N;
    }
  
  N++;
  dec /= 10;
    
    }
    printf("Decimal do numero dado eh: \n");
    printf("%d", decimal);
  return 0;
}

//função para apagar o console 
void Apagar_Tela() {
#ifdef WINDOWS
//se estiver rodando no windows usa o comando cls para apagar o controle
  system("cls");

#else 
//se estiver no GNU/Linux ou unix-like usa o comando clear para apagar o console 
  system("clear");

#endif
}
