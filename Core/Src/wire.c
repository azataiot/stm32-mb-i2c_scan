/*
 * wire.c
 *
 *  Created on: Mar 17, 2022
 *      Author: Azat
 */

#include "wire.h"
#include "serial.h"

void i2cScan(I2C_HandleTypeDef *hi2c, UART_HandleTypeDef *huart) {
	// i2c scan
	char buff[64];
	println(huart, "\nStarting the I2C Scanner...\n");
	// scan for device address from 0 to 127
	byte var, ret = 0;
	for (var = 0; var < 127; var++) {
		ret = HAL_I2C_IsDeviceReady(hi2c, var << 1, 3, HAL_MAX_DELAY);
		if (ret == HAL_OK) {
			sprintf(buff, "Found an i2c device at 0x%X \n", var);
			print(huart, buff);
		}
	}
	println(huart, "\nI2C device scanning process finished.");
	// end of i2c scan
}
