/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, CBUUID, NSArray, NSNumber;

@interface CBService : NSObject {

	CBPeripheral* _peripheral;
	CBUUID* _UUID;
	BOOL _isPrimary;
	NSArray* _includedServices;
	NSArray* _characteristics;
	NSNumber* _startHandle;
	NSNumber* _endHandle;

}

@property (nonatomic,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) BOOL isPrimary;                         //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSArray * includedServices;                         //@synthesize includedServices=_includedServices - In the implementation block
@property (retain) NSArray * characteristics;                          //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSNumber * startHandle;                 //@synthesize startHandle=_startHandle - In the implementation block
@property (nonatomic,readonly) NSNumber * endHandle;                   //@synthesize endHandle=_endHandle - In the implementation block
-(BOOL)isPrimary;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(id)startHandle;
-(id)endHandle;
-(id)includedServices;
-(void)setIncludedServices:(id)arg1 ;
-(id)peripheral;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)UUID;
-(void)setCharacteristics:(id)arg1 ;
-(id)characteristics;
@end
