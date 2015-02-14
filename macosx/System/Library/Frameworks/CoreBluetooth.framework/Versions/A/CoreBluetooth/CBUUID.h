/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	NSData* _data;
	NSRange _range;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * UUIDString; 
+(id)UUIDWithString:(id)arg1 ;
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
-(NSString *)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

