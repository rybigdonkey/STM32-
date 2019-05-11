#include "step_motor.h"

 /***************  ��������õ���I/O�� *******************/
void PORT_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE); // ʹ��PC�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4;	//ѡ���Ӧ������
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);  //��ʼ��PC�˿�
  GPIO_SetBits(GPIOA, GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4 );	 // ��ʼ���͵�ƽ
}
void PORT_OUT_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE); // ʹ��PC�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	//ѡ���Ӧ������
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOC, &GPIO_InitStructure);  //��ʼ��PC�˿�
  GPIO_SetBits(GPIOC, GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);	 // ��ʼ���͵�ƽ
}

