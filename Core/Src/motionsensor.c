/*
 * motionsensor.c
 *
 *  Created on: Nov 17, 2025
 *      Author: Rainer
 */

#include "motionsensor.h"
#include "stm32l4xx_hal.h"

volatile uint8_t motionDetected;
char msg1[] = "Motion Detected (1) \r\n";
char msg2[] = "No Motion Detected (0) \r\n";

int32_t readMotion(){
	motionDetected = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6);
	return motion;
}

const char* displayMotion(){
	if(motionDetected){
		return msg1;
	}else{
		return msg2;
	}
}

