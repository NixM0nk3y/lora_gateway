/*
 * multitech.h
 *
 *  Created on: Dec  3, 2016
 *      Author: Jac Kersing
 */

#ifndef _RAK831_H_
#define _RAK831_H_

/* Human readable platform definition */
#define DISPLAY_PLATFORM "RAK831-BeagleBoneBlack"

#define SPI_SPEED       8000000
#define SPI_DEV_PATH    "/dev/spidev1.0"
#define SPI_CS_CHANGE   0

/* parameters for a FT232H */
#define VID		        0x0403
#define PID		        0x6010

#endif /* _RAK831_H_ */
