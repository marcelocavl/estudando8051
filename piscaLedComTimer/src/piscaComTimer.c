/*******************************
	AUTOR:JOÃO MARCELO TORRES CAVALCANTE
	DATA: 11/07/2025
	PISCA LED COM BOTAO
*******************************/

//INCLUDES E DEFINES

#include "interrupcoes.h"

#ifndef INCLUDE8051
#include<8051.h>
#define LED P1_0
#endif


//PROTÓTIPOS DE FUNCOES
//subrotinas para tratar interrupçoes
void pressiona_botao(void) __interrupt;
//funcoes comuns
int main(void);



//FUNCAO MAIN
int main(void)
{
	//INICIALIZANDO FLAGS DE INTERRUPCOES
	EA=1;		//habilita todas as interrupcoes
	EX0=1;	//habilita interrupcoes externas
	IT0=1;	//define que interrupcao externa deverá ser sinalizada por borda

	while(1){}//loop infinito
}
