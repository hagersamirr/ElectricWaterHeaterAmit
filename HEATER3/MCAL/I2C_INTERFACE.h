/*
 * I2C_INTERFACE.h
 *
 *Author: Hager, shorouk, Omar, Mohamed
 */ 


#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

void I2C_initMaster					(void);
void I2C_initSlave					(u8 SlaveAddress);
void I2C_Send_StartCondition		(void);
void I2C_Send_StopCondition			(void);
void I2C_Repeated_StartCondition	(void);
void I2C_Send_Slave_Address_Write	(u8 slave_address);
void I2C_Send_Slave_Address_Read	(u8 slave_address);
void I2C_SendMasterDataByte			(u8 TxData);
void I2C_ReadMasterDataByte			(u8* RxData);

#endif /* I2C_INTERFACE_H_ */