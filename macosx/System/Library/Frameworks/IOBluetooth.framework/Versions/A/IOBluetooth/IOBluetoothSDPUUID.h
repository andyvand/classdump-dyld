/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface IOBluetoothSDPUUID : NSData {

	NSData* mUUIDData;
	void* _mReserved;

}
+(id)uuid16:(unsigned short)arg1 ;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuid32:(unsigned)arg1 ;
+(id)withSDPUUIDRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
-(id)initWithUUID16:(unsigned short)arg1 ;
-(id)initWithUUID32:(unsigned)arg1 ;
-(char)isEqualToUUID:(id)arg1 ;
-(id)getUUIDWithLength:(unsigned)arg1 ;
-(OpaqueIOBluetoothObjectRefRef)getSDPUUIDRef;
-(Class)classForPortCoder;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(char)isEqualToData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForArchiver;
@end

