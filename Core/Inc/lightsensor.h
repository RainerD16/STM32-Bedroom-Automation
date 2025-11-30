/*
 * lightsensor.h
 *
 *  Created on: Nov 17, 2025
 *      Author: Rainer
 */

#ifndef INC_LIGHTSENSOR_H_
#define INC_LIGHTSENSOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"

extern I2C_HandleTypeDef hi2c1;

void bh1750_getData(void);
uint16_t getLux(void);

#endif /* INC_LIGHTSENSOR_H_ */
