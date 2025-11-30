/*
 * device.h
 *
 *  Created on: Nov 17, 2025
 *      Author: Rainer
 */

#ifndef INC_DEVICE_H_
#define INC_DEVICE_H_

#include <stdint.h>
/*
enum state{
	IDLE, ON, OFF
} devicestate;
*/

struct device{
	char name[100];
	//state devicestate;
	int32_t data;
};


#endif /* INC_DEVICE_H_ */
