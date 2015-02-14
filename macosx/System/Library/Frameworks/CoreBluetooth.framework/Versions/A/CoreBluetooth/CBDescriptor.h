/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBCharacteristic, CBUUID, CBPeripheral, NSNumber;

@interface CBDescriptor : NSObject {

	CBCharacteristic* _characteristic;
	CBUUID* _UUID;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic,__weak) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (retain) id value;                                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                           //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                                   //@synthesize handle=_handle - In the implementation block
-(CBUUID *)UUID;
-(NSNumber *)handle;
-(CBPeripheral *)peripheral;
-(CBCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setValue:(id)arg1 ;
-(id)value;
@end

