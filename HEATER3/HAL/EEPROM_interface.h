/*
 * EEPROM_interface.h
 *
 * 
 *  Author: Hager, shorouk, Omar, Mohamed
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_


#define EEPROM_FIXED_ADDRESS          0x50

void EERPOM_INIT(void);
void EEPROM_writeByte(u16 byteAddress,u8 data);
void EEPROM_readByte (u16 byteAddress,u8* returnedData);


#endif /* EEPROM_INTERFACE_H_ */