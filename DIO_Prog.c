/*
 * DIO_prog.c
 *
 *  Created on: Aug 23, 2019
 *      Author: OWNER
 */

/*Author : We'am*/
/*date :25/8/2019*/
/*Description : DIO driver for AVR atmega32 ......*/


#include "stdtype.h"   /*type define library*/
#include "BIT_CALC.h"       /*bit functions:set,clear,get,toggle*/
#include "DIO_interface.h"   /*header file of driver*/

#include "DIO_reg.h"   /*private file for registers*/





void DIO_init(uint8_t pinNumber, uint8_t port, uint8_t direction)
{
	if((port<=PORTD)&&(pinNumber<=PIN7))
	{
		if(direction==DIO_OUTPUT)
		{
			switch(port)
				{
				case PORTA :set_bit(DDRA_Register,pinNumber); break;
				case PORTB :set_bit(DDRB_Register,pinNumber); break;
				case PORTC :set_bit(DDRC_Register,pinNumber); break;
				case PORTD :set_bit(DDRD_Register,pinNumber); break;
				}
		}
		else if(direction==DIO_INPUT)
		{
			switch(port)
				{
				case PORTA :clear_bit(DDRA_Register,pinNumber); break;
				case PORTB :clear_bit(DDRB_Register,pinNumber); break;
				case PORTC :clear_bit(DDRC_Register,pinNumber); break;
				case PORTD :clear_bit(DDRD_Register,pinNumber); break;
				}
		}
		else
		{
			/*error*/
		}
	}
	else
	{
		/*error*/
	}
}







void DIO_write(uint8_t pinNumber, uint8_t port, uint8_t value){

	if((port<=PORTD)&&(pinNumber<=PIN7))
		{
			if(value==DIO_HIGH)
			{
				switch(port)
					{
					case PORTA :PORTA_Register= set_bit(PORTA_Register,pinNumber); break;
					case PORTB :PORTB_Register= set_bit(PORTB_Register,pinNumber); break;
					case PORTC :PORTC_Register= set_bit(PORTC_Register,pinNumber); break;
					case PORTD :PORTD_Register= set_bit(PORTD_Register,pinNumber); break;
					}
			}
			else if(value==DIO_LOW)
			{
				switch(port)
					{
					case PORTA :PORTA_Register= clear_bit(PORTA_Register,pinNumber); break;
					case PORTB :PORTB_Register= clear_bit(PORTB_Register,pinNumber); break;
					case PORTC :PORTC_Register= clear_bit(PORTC_Register,pinNumber); break;
					case PORTD :PORTD_Register= clear_bit(PORTD_Register,pinNumber); break;
					}
			}
			else
			{
				/*error*/
			}
		}
		else
		{
			/*error*/
		}
}
}



 void DIO_read(uint8_t pinNumber, uint8_t port, uint8_t *value)
{
	u8 Local_u8Value;
	if( (port<=PORTD) && (pinNumber<=PIN7) )
	{
		switch(port)
			{
			case PORTA :Local_u8Value = get_bit(PINA_Register,pinNumber); break;
			case PORTB :Local_u8Value = get_bit(PINB_Register,pinNumber); break;
			case PORTC :Local_u8Value = get_bit(PINC_Register,pinNumber); break;
			case PORTD :Local_u8Value = get_bit(PIND_Register,pinNumber); break;
			}
	}
	else
	{
		Local_u8Value =0xff ;
	}
	return Local_u8Value;
}



