/*
 * lightsensor.c
 *
 *  Created on: Nov 17, 2025
 *      Author: Rainer
 */
#include "lightsensor.h"
#include "stm32l4xx_hal.h"

const addr = 0x46; // Device Address
uint8_t readData[2]; // two-byte data

void bh1750_getData(){
	uint8_t cmd = 0x10; 												// resolution mode = high resolution
	HAL_I2C_Master_Transmit( &hi2c1, addr,&cmd, 1, HAL_MAX_DELAY);		//Start data read
	HAL_Delay(180);														//Store Data Here
	HAL_I2C_Master_Receive( &hi2c1, addr,&readData, 2, HAL_MAX_DELAY);	// Read out data/ store into buffer
}

uint16_t getLux(){
	uint16_t rawData = (readData[0]<<8)| readData[1];
	return (rawData/1.2);
}

