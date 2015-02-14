/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <FMF/NSCopying.h>
#import <FMF/NSSecureCoding.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {

	char _isActiveDevice;
	char _isThisDevice;
	NSString* _deviceId;
	NSString* _deviceName;

}

@property (copy) NSString * deviceId;                //@synthesize deviceId=_deviceId - In the implementation block
@property (copy) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign) char isActiveDevice;              //@synthesize isActiveDevice=_isActiveDevice - In the implementation block
@property (assign) char isThisDevice;                //@synthesize isThisDevice=_isThisDevice - In the implementation block
+(id)deviceWithId:(id)arg1 name:(id)arg2 isActive:(char)arg3 isThisDevice:(char)arg4 ;
+(char)supportsSecureCoding;
-(char)isThisDevice;
-(char)isActiveDevice;
-(void)setIsActiveDevice:(char)arg1 ;
-(void)setIsThisDevice:(char)arg1 ;
-(void)updateIsActive:(char)arg1 isThisDevice:(char)arg2 ;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceName;
@end

