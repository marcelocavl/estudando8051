/*
	AUTOR: JOAO MARCELO TORRES CAVALCANTE
	DATA: 11/07/2025
	PISCA LEDS
*/

/*
	INCLUDES E DEFINES
*/
#include <8051.h>
#include "delay.h"

#define LED P1_0 //led conectado na porta p1

/*
	SUBROTINAS 
*/
//rotina de delay
void delay_meio_segundo(void);
int main(void);


/*
	FUNCAO MAIN
*/

int main(void)
{
	while(1){
		LED=1;
		delay_meio_segundo();
		delay_meio_segundo();
		LED=0;
		delay_meio_segundo();
		delay_meio_segundo();
	}
    
}

