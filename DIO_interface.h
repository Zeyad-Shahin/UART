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


/***********************************************************************************/
/*prototypes*/

/***********************************************************************************/
/*Description: this function is to set the whole port by one value 0 or 1          */
/*Inputs:      Copy_u8PortId: porta, portb, portc....                              */
/*             Copy_u8PortValue: DIO_HIGH or DIO_LOW                               */
/*Outputs:     Void                                                                */
/***********************************************************************************/
void u8_vidu8SetPortValue (u8 Copy_u8PortId, u8 Copy_u8PortValue);


/***********************************************************************************/
/*Description: this function is to determine whether the port is input or output   */
/*Inputs:      Copy_u8PortId: porta, portb, portc....                              */
/*             Copy_u8PortDirection: DIO_INPUT or DIO_OUTPUT                       */
/*Outputs:     Void                                                                */
/***********************************************************************************/
void u8_vidSetPortDirection (u8 Copy_u8PortId, u8 Copy_u8PortDirection);


/***********************************************************************************/
/*Description: this function is to set each pin to be DIO_INPUT or DIO_OUTPUT      */
/*Inputs:      Copy_u8PortId: PORTA, PORTB,....                                    */
/*             Copy_u8PinId: PIN0,PIN1,PIN2....                                    */
/*             Copy_u8Direction: DIO_INPUT or DIO_OUTPUT                           */
/*Outputs:     Void                                                                */
/***********************************************************************************/
void u8_vidu8SetPinDirection (u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Direction);


/***********************************************************************************/
/*Description: this function is to set each pin to be DIO_HIGH or DIO_LOW          */
/*Inputs:      Copy_u8PortId: PORTA, PORTB,....                                    */
/*             Copy_u8PinId: PIN0,PIN1,PIN2....                                    */
/*             Copy_u8Value: DIO_HIGH or DIO_LOW                                   */
/*Outputs:     Void                                                                */
/***********************************************************************************/
void u8_vidu8SetPinValue (u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Value);


/***********************************************************************************/
/*Description: this function is to get the value of a certain pin                  */
/*Inputs:      Copy_u8PortId: PORTA, PORTB,....                                    */
/*             Copy_u8PinId: PIN0,PIN1,PIN2....                                    */
/*Outputs:     Copy_u8PinValue                                                     */
/***********************************************************************************/
u8 u8_GetPin (u8 Copy_u8portId, u8 Copy_u8PinId);


/***********************************************************************************/
/*Description: this function is to toggle certain pin                              */
/*Inputs:      Copy_u8PortId: PORTA, PORTB,....                                    */
/*             Copy_u8PinId: PIN0,PIN1,PIN2....                                    */
/*Outputs:     Copy_u8PinValue                                                     */
/***********************************************************************************/
void u8_vidtogglePin (u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Direction);


/***********************************************************************************/
/*Description: this function is to toggle the value of a certain port              */
/*Inputs:      Copy_u8PortId: PORTA, PORTB,....                                    */
/*Outputs:     Void                                                                */
/***********************************************************************************/
void u8_vidtogglePort(u8 Copy_u8PortId);

#endif /* DIO_INTERFACE_H_ */
