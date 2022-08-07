/* DIO_reg.h
 *
 *  Created on: Aug 25, 2019
 *      Author: OWNER
 */

/*Author: We'am*
 *Date: 25/8/2019*
 *Desc: This header is a private file that contains the register's addresses for each port*
 *      and used to write on it and change the pins values through the pointers */


#ifndef DIO_REG_H_
#define DIO_REG_H_

/*Group A Registers*/
#define PORTA_Register (*((volatile u8*)(0x3B)))
#define DDRA_Register  (*((volatile u8*)(0x3A)))
#define PINA_Register  (*((volatile u8*)(0x39)))

/*Group B Registers*/
#define PORTB_Register (*((volatile u8*)(0x38)))
#define DDRB_Register  (*((volatile u8*)(0x37)))
#define PINB_Register  (*((volatile u8*)(0x36)))

/*Group C Registers*/
#define PORTC_Register (*((volatile u8*)(0x35)))
#define DDRC_Register  (*((volatile u8*)(0x34)))
#define PINC_Register  (*((volatile u8*)(0x33)))

/*Group D Registers*/
#define PORTD_Register (*((volatile u8*)(0x32)))
#define DDRD_Register  (*((volatile u8*)(0x31)))
#define PIND_Register  (*((volatile u8*)(0x30)))


#endif /* DIO_REG_H_ */
