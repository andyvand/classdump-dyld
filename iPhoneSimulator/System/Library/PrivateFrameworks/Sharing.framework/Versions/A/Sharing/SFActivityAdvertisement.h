/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {

	NSData* _advertisementPayload;
	NSDictionary* _options;
	NSString* _deviceIdentifier;
	NSString* _deviceName;
	NSString* _deviceModelIdentifier;
	NSData* _activityPayload;

}

@property (retain,readonly) NSData * advertisementPayload;                 //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (retain,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (retain,readonly) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (retain,readonly) NSString * deviceModelIdentifier;              //@synthesize deviceModelIdentifier=_deviceModelIdentifier - In the implementation block
@property (retain) NSData * activityPayload;                               //@synthesize activityPayload=_activityPayload - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(NSData *)activityPayload;
-(void)setActivityPayload:(NSData *)arg1 ;
-(NSData *)advertisementPayload;
-(id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 deviceName:(id)arg3 deviceModelIdentifier:(id)arg4 fromDeviceID:(id)arg5 ;
-(NSString *)deviceModelIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDictionary *)options;
-(NSString *)deviceName;
@end

