#include <stdio.h>
#include <stdlib.h>

//usa do metodo de prototipos para inicializars as funções do programa
float Somatorio();
float Matrizes();
char Logica_prop();
float Analise_comb();
char Cripto_Cesar();
char Decrip_Cesar();
int ConvBin_to_Dec();
int ConvDec_to_Bin();
void Apagar_Tela();

//define BASE como constante com o valor 2
#define BASE 2

int main() {
  int escolha; 

//usado para apagar o conteudo já mostrado em tela para evitar "poluição" visual 
Apagar_Tela();

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
        Analise_comb();
      }
    break;

      case 5:
      {
        int escolha3;
        printf("1 -> Criptografar\n2 -> Descriptografar");
        scanf("%d", &escolha3);
        switch(escolha3) {
          case 1:
          {
            Cripto_Cesar();
          }
          case 2:
          {
            Decrip_Cesar();
          }
        }
      }
    break;  
      
      case 6:
      {
        int escolha2;
        printf("Voce deseja fazer qual tipo de conversao?\n");
        printf("1 - Converter de decimal para binario\n2 - Converter de binario para decimal\n");
        scanf("%d", &escolha2);
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
        printf("Encerrando o programa...");
      }
      break;
      }
    } while (escolha != 7);
  }


//float Somatorio(float i, float n, float a) {
float Somatorio() {
 float num;
  int i, n, a;
  printf("Entre com o valor minimo: \n");                                                             
  scanf("%f", &i);                                                                                    
  printf("Entre com o valor maximo: \n");                                                             
  scanf("%f", &n);                                                                                    
  printf("Entre com o valor da constante: \n");                                                       
  scanf("%f", &a); 
  if (n >= i) {
  num = n - i;
  float num2; 
  num2 = (a * num) + a;
  return printf("O resultado eh: %.2f", num2);
  
  } else {
    
    printf("O valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...");
    }
}

char Logica_prop() {
  float j, k; 
  printf("Entre com os valores para o calculo: ");
  scanf("%f", &j);     
  scanf("%f", &k);
  int p1 = 1;
  int q0 = 0;
  int resultado;
  
  return resultado;
}

float Matrizes() {
 int resultado, size;
 float j, k;
  printf("Qual o tamanho da matriz?");
  scanf("%d", &size);
  printf("Entre com os valores para o calculo: ");
  scanf("%f", &j);
  scanf("%f", &k);
  
  return resultado;
}

float Analise_comb() {
  float resultado, j, k;
  printf("Entre com os valores para o calculo: ");
  scanf("%f", &j);
  scanf("%f", &k);   
  resultado = j + k;
  return resultado;
}

char Cripto_Cesar() {
  char mensagem[100], ch;
	int i, chave;
	
	printf("Entre com a mensagem para criptografar (ate 100 caracteres): ");
	fgets(mensagem, 100, stdin);
	printf("Entre com a chave: ");
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
	
	printf("Encrypted message: %s", mensagem);
	
	return 0;
}

char Decrip_Cesar() {
  char mensagem[100], ch;
	int i, chave;
	
	printf("Enter com a mensagem para descriptografia (ate 100 caracteres): ");
	fgets(mensagem, 100, stdin);
	printf("Entre com a chave: ");
	scanf("%d", &chave);
	
	for(i = 0; mensagem[i] != '\0'; ++i){
		ch = mensagem[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - chave;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			mensagem[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - chave;
			
			if(ch < 'A'){
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

  printf("Insira o numero decimal para conversao em binario: \n");
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

  printf("Insira o numero binario para conversao em decimal: \n");
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
