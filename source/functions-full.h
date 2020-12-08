#include "prototype.h"
/*void Matrizes_Input(int a[50][50], int linhas, int colunas); //função apenas para pegar os dados das matrizes do usuario
int Matriz_Soma(int a[50][50], int b[50][50], int linhas, int colunas); // as seguintes funções Matriz_Soma, Matriz_mult e Matri
void Matriz_Mult(int a[50][50], int b[50][50], int linhas, int colunas); //_Sub dependem da função Matriz_Input para realizar os
int Matriz_Sub(int a[50][50], int b[50][50], int linhas, int colunas); // calculos
int Potencia(int base, int expoente);
void Somatorio(), Somatorio2(), Analise_Combinatorio();
void Fatorial(), Arranjo(), Combinacao();
char Enter(); 
void ConvBin_to_Dec(), ConvDec_to_Bin();
void Cripto_Cesar(), Decrip_Cesar();
void Logica_Proposicional();
void Apagar_Tela(), Draw();*/

void Somatorio() {
 float num, i, n, a;
  
setupConsole();
  Draw();
  Apagar_Tela();
  printf("%s_____________________________________________________________________________%s\n", AMARELO, FIM);
  printf("%s|                              Somatorio                                    |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|                                                                           |\n", AMARELO);
  printf("| Entre com o valor minimo:                                                 |\n");                                                             
  scanf(" %f", &i);                                                                                    
  printf("|                                                                           |\n");
  printf("| Entre com o valor maximo:                                                 |\n");                                                             
  scanf(" %f", &n);                                                                                    
  printf("|                                                                           |\n");
  
  Apagar_Tela();

  if (n >= i) {
    float num2;
    num2 = n*(n + i) / 2 ;
    Draw();
    printf("%sO resultado eh: %.2f\n\n%s", VERDE, num2, FIM);
  
  } else {
    
    Apagar_Tela();

  printf("\n%sO valor digitado eh menor que o valor minimo. Por favor digite um numero maior ou igual...%s", VERMELHO, FIM); 
  Draw();
  }   
  Draw();
}

void Somatorio2() {
 float num, i, n, a, k;
  
setupConsole();
  Draw();
  Apagar_Tela();
  printf("%s_____________________________________________________________________________%s\n", AMARELO, FIM);
  printf("%s|                   Somatorio (-j)^(j+1)                                    |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|                                                                           |\n", AMARELO);
  printf("| Entre com o valor minimo:                                                 |\n");                                                             
  scanf(" %f", &i);                                                                                    
  printf("|                                                                           |\n");
  printf("| Entre com o valor maximo:                                                 |\n");                                                             
  scanf(" %f", &n);                                                                                    
  printf("|                                                                           |\n");
  printf("| Entre com o valor da constante:                                           |\n");                                                       
  scanf(" %f", &a); 
  
  Apagar_Tela();
float num2;
  if (n >= i) {
    num2 = Potencia((-a), a+i) * n;
    Draw();
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

setupConsole();
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
  
setupConsole();
  Draw();
  printf("%s______________________________________________________________________________\n", AMARELO);
  printf("%s|                      Escolha a operacao desejada                            |%s\n", AMARELO_SUBLINHADO, FIM);
  printf("%s|   |                                                                         |\n", AMARELO);
  printf("| 1 | - ~p                                                                    |\n");
  printf("|   |                                                                         |\n");
  printf("| 2 | - ~q                                                                    |\n");
  printf("|   |                                                                         |\n");
  printf("| 3 | - p ^ q                                                                 |\n");
  printf("|   |                                                                         |\n");
  printf("| 4 | - p V q                                                                 |\n");
  printf("|   |                                                                         |\n");
  printf("| 5 | - p (~V) q                                                              |\n");
  printf("|   |                                                                         |\n");
  printf("| 6 | - p -> q                                                                |\n");
  printf("|   |                                                                         |\n");
  printf("| 7 | - p <-> q                                                               |\n");
  printf("|___|_________________________________________________________________________|%s\n", FIM);
  printf("\n");
  scanf(" %d", &resp); 
  
  switch(resp) {
    default: 
    {
      printf("RESPOSTA INVALIDA...");
//      Enter();
    }
    break;
    case 1:
    {
      Apagar_Tela();
      Draw();
      printf("%s\n____________________________________________\n", AMARELO);
      printf("%s|          p         |           ~p         |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                    |                      |\n", AMARELO);
      printf("|          v         |              f       |\n");
      printf("|                    |                      |\n");
      printf("|          f         |              v       |\n");
      printf("|____________________|______________________|%s\n", FIM);
      Draw();
    } 
    break;
     case 2:
    {
      Apagar_Tela();
      Draw();
      printf("%s\n____________________________________________\n", AMARELO);
      printf("%s|          q         |           ~q         |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                    |                      |\n", AMARELO);
      printf("|          v         |              f       |\n");
      printf("|                    |                      |\n");
      printf("|          f         |              v       |\n");
      printf("|____________________|______________________|%s\n", FIM);
     Draw();
    }
    break;
     case 3:
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
    break;
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
    break;
     case 5:
    {
      Apagar_Tela();
      Draw();
      printf("%s__________________________________________________________________________________________\n", AMARELO);
      printf("|                                                                                         |\n");
      printf("%s|        p                          q                                 p(~V)q              |%s\n", AMARELO_SUBLINHADO, FIM);
      printf("%s|                                                                                         |\n", AMARELO);
      printf("|                    |                              |                                     |\n");
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
    break;
     case 6:
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
    break;
     case 7:
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
    break;
  }
}

void Matrizes_Input(int a[50][50], int linhas, int colunas) {
  int i, j;
 
setupConsole();
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

setupConsole();
  Draw();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      c = a[i][j] + b[i][j];
      printf("%s %d |%s", AMARELO_SUBLINHADO, c, FIM);
    }
  printf("\n");
  }
  Draw();
  return 0;
}

int Matriz_Sub(int a[50][50], int b[50][50], int linhas, int colunas) {
 int c, i, j;
   
setupConsole();
  Draw();
  for(i = 0; i < linhas; i++) {   
    for(j = 0; j < colunas; j++) {
      c = a[i][j] - b[i][j];                
      printf("%s %d |%s", AMARELO_SUBLINHADO, c, FIM);
    }     
  printf("\n");
  }       
  return 0;
  Draw();
}  


void Matriz_Mult(int a[50][50], int b[50][50], int linhas, int colunas) {
  int c = 0, i, j, s, k;

setupConsole();
  Draw();
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < linhas; j++) {
      for(k = 0; k < colunas; k++) {
        s = a[i][k] * b[k][j];
        c = c + s;
      }
        printf("%s %3d |%s", AMARELO_SUBLINHADO, c, FIM);
        c = 0;
    }
    printf("\n");
  }
  Draw();
}

void Fatorial() {
  float resp = 1;
  float n;

setupConsole();
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

setupConsole();
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
if(p > n) {
  printf("%sValor de 'n' deve ser maior que o valor de 'p'", AMARELO);
}
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
  
setupConsole();
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

setupConsole();
  Draw();
  printf("%s__________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                 |\n");
  printf("|                            Criptografia de Cesar                                |\n");
  printf("|                                                                                 |\n");
  printf("| %sEntre com a mensagem para criptografar: %s                                       |\n", VERDE, AMARELO);
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
	
setupConsole();
	Apagar_Tela();
  
  
  Draw();
  printf("%s_________________________________________________________________________________\n", AMARELO);
  printf("|                                                                                 |\n");
  printf("|                           Descriptografia de Cesar                              |\n");
  printf("| %sEntre com a mensagem criptografada: %s                                            |\n", VERDE, AMARELO);
	printf("|                                                                                 |\n");
  //usado para pegar strings com espaços em branco
  scanf(" %[^\n]%*c", mensagem);
  printf("| %sEntre com a chave:                                                              %s|\n", VERMELHO, AMARELO);
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
  int i, dec;
  //int a[10]
  int *a;
  a = (int*)malloc(16 * sizeof(int));
  if(a == NULL){
    printf("Memoria insuficiente\n");
  }

setupConsole();
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
  
  
setupConsole();
  Draw();
  printf("%s_________________________________________________________________\n", AMARELO);
  printf("|                          Binario para Decimal                  |\n");
  printf("| Insira o numero %sbinario          %s                              |\n", VERMELHO, AMARELO); 
  printf("| para conversao em decimal (somente valores positivos e intei   |\n");
  printf("| ros)                                                           |\n");
  scanf(" %d", &dec);

  while(dec != 0){
    //pega o ultimo digito significante do numero
      resto = dec % 10;
      decimal = decimal + resto*Potencia(2, i);
      i++;
      dec = dec / 10;
    }

  Apagar_Tela();
  printf("%s_________________________________________________________________\n", AMARELO);
  printf("|                                                                |\n");
  printf("| O decimal do numero dado eh: %d                                 \n", decimal);
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
  
setupConsole();
//  printf("%s===========================================================================%s\n", BLUE_BG, FIM);
int i;
for (i = 0; i <= 77; i++) {
  printf("%s %s", BLUE_BG, FIM);
  if(i == 77) {
    printf("\n");
  }
//  } else {
//    continue;
//  }
  }
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
setupConsole();
   printf("\e[1;1H\e[2J");
   //printf("\x1b[2J");
}

//função para dar a opção de voltar ou continuar na função selecionada
char Enter() {  
  
setupConsole();
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

