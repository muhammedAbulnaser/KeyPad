/*
 * KPD_interface.h
 *
 *  Created on: Jun 28, 2019
 *      Author: Abdulnaser
 */

#ifndef KPD_INTERFACE_H_
#define KPD_INTERFACE_H_


 /**************************************************/
/***************Public definitions*****************/
/**************************************************/

#define NOT_PRESSED 0
/**************************************************/
/***************Public Functions*******************/
/***************************************************************************************/
/* Description! Interface to get the ID of the pressed key, return 0 incase no key     */
/*              is pressed, this function doesn't handle the sitaution if 2 keys are   */
/*              pressed at the same time                               	     		   */
/* Input      ! void                                                               */
/* Output     ! u8                                                                */
/***************************************************************************************/
u8 KPD_u8GetPressdKey(void);

#endif /* KPD_INTERFACE_H_ */
