/*
 * wire.h
 *
 *  Created on: Mar 17, 2022
 *      Author: Azat
 */

#ifndef INC_WIRE_H_
#define INC_WIRE_H_

#include "azt.h"


void i2cScan(I2C_HandleTypeDef *hi2c, UART_HandleTypeDef *huart);


#endif /* INC_WIRE_H_ */
