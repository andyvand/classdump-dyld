/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/NSCopying.h>

@interface IOBluetoothObject : NSObject <NSCopying> {

	unsigned mIOService;
	unsigned mIOConnection;
	unsigned mIONotification;

}
+(id)getAllUniqueObjects;
+(id)getUniqueObjectWithKey:(id)arg1 ;
+(void)addUniqueObject:(id)arg1 ;
+(id)withIOService:(unsigned)arg1 ;
+(id)getUniqueObjectDictionary:(char)arg1 ;
+(id)getKeyForIOService:(unsigned)arg1 ;
+(id)getUniqueObjectWithIOService:(unsigned)arg1 ;
+(void)removeUniqueObject:(id)arg1 ;
+(void)uniqueObjectDictionaryEmpty;
+(void)initialize;
-(void)setIOService:(unsigned)arg1 ;
-(int)establishKernelConnection;
-(id)initWithIOService:(unsigned)arg1 ;
-(id)getKey;
-(int)closeKernelConnection;
-(unsigned)getIOService;
-(void)updateFromNewIOService:(unsigned)arg1 ;
-(char)ioServiceTerminated:(unsigned)arg1 ;
-(int)unregisterForServiceRemovalNotification;
-(int)registerForServiceRemovalNotification;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isValid;
@end

