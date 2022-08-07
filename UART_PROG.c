/*
 * UART_PROG.c
 *
 *  Created on: Jan 23, 2020
 *      Author: Zeyad
 */
#include"STD_TYPES.h"
#include"UTILES.h"
#include"UART_INT.h"
#include"AVR_Reg.h"

void UART_INT (void)
{
	reset_bit(UCSRA,0);
	reset_bit(UCSRA,1);
	reset_bit(UCSRB,2);
	set_bit(UCSRB,3);
	set_bit(UCSRB,4);
	UCSRC=0x86;
	UBRRL=51;
}

void USART_Transmit(u8 data )
{
	/* Wait for empty transmit buffer */
	while ( !( UCSRA & (1<<UDRE)));

	/* Put data into buffer, sends the data */
	UDR = data;
}

u8 UART_u8Receive(void)
{
u8 u8LocalValue;
while(get_bit(UCSRA,7)==0); //While RXC==0
u8LocalValue=UDR;
reset_all(UDR);		//Empty UART register

return u8LocalValue;
}




