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
// funções para habilitar o uso de cores ansi em octal
/*void setupConsole(void);
void restoreConsole(void);
void SetupConsole(void);
void RestoreConsole(void);*/
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

