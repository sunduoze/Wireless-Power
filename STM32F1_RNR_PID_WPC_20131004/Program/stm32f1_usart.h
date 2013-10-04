/* #include "stm32f1_usart.h" */

#ifndef __STM32F1_USART_H
#define __STM32F1_USART_H
/*=====================================================================================================*/
/*=====================================================================================================*/
#define Type_B 2    // 無號數二進制
#define Type_O 8    // 無號數八進制
#define Type_D 10   // 無號數十進制
#define Type_H 16   // 無號數十六進制
#define Type_I 0    // 有號數
#define Type_F 1    // 浮點數
/*=====================================================================================================*/
/*=====================================================================================================*/
void USART_SendByte( USART_TypeDef* USARTx, u8 *pWord );
u8 USART_RecvByte( USART_TypeDef* USARTx );
void NumToChar( u8, u8, u8*, s32 );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	 
