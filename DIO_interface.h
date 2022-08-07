/*

* DIO_interface.h
 *
 *  Created on: Aug 23, 2019
 *      Author: OWNER
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

//PORTS
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

//PINS
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

//DIRECTION
#define DIO_INPUT  0
#define DIO_OUTPUT 1

//VOLT
#define DIO_LOW  0
#define DIO_HIGH 1


 void DIO_read(uint8_t pinNumber, uint8_t port, uint8_t *value);

void DIO_write(uint8_t pinNumber, uint8_t port, uint8_t value);

void DIO_init(uint8_t pinNumber, uint8_t port, uint8_t direction);

