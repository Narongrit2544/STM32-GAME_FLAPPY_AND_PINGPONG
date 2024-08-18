#include "xpt2046.h"


extern SPI_HandleTypeDef hspi3;
volatile uint8_t receive_data = 0;
volatile uint8_t send_cmd;

uint8_t Read_IRQ(){
	return HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_1) == SET;
}
