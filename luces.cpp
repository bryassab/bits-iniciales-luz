#include <stdio.h>
#include <stm32f7xx.h>
int cont=0;


int main (void){
      
 
	RCC->AHB1ENR |= 0X2;
	GPIOB->MODER |=0X10004001;
	GPIOB->OTYPER |=0X0;

	GPIOB->OSPEEDR |=0X10004001;

	GPIOB->PUPDR |=0X02008001;
	

	while(1){
		for(cont=0;cont<1000000;cont++){
			GPIOB->ODR = 0x4081;
		}
		for(cont=0;cont<1000000;cont++){
			GPIOB->ODR = 0x4000; 
	}
}
	}
