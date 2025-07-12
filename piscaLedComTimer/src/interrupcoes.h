//INCLUDES E DEFINES
#ifndef INCLUDE8051
#include<8051.h>
#define LED P1_0
#define BUTTON P3_2


//PROTOTIPOS DAS FUNCOES
//interrupcoes
void pressiona_botao(void) __interrupt(0);


//INTERRUPCOES
 void pressiona_botao(void) __interrupt(0)  //subrotina para tratar interrupção de pressionar botao
{
	if(LED==1){
		LED=0;	
	}else{
		LED=1;
	}
}
#endif
