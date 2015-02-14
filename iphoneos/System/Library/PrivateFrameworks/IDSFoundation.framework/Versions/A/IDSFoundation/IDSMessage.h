/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <IDSFoundation/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSNumber* _version;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)version;
-(id)messageBody;
-(NSNumber *)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(char)wantsAPSRetries;
-(char)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(char)wantsUserAgentInHeaders;
@end

