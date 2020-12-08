/*void setupConsole(void);
void restoreConsole(void);
void SetupConsole(void);
void RestoreConsole(void);*/

#ifdef _WIN32
 // algumas distribuições MinGW/CYGWIN as vezes, não define por padrão
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
 	
     // habilita codigos ANSI
 	outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
 
 	if(!SetConsoleMode(stdoutHandle, outMode)) {
   		exit(GetLastError());
 	}	
 }
 
void restoreConsole(void) {
     // Reseta as cores
     printf("\x1b[0m");	
 	
     // Reseta modo do console
 	if(!SetConsoleMode(stdoutHandle, outModeInit)) {
 		exit(GetLastError());
 	}
 }
#else
void setupConsole(void) {}
 
void restoreConsole(void) {
     // Reseta as cores
     printf("\x1b[0m");
}

#endif
