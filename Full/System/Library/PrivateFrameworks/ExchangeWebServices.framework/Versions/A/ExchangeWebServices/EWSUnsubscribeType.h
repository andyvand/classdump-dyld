/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString;

@interface EWSUnsubscribeType : EWSBaseRequestType {

	NSString* _SubscriptionId;

}

@property (setter=ubscriptionId,nonatomic,copy) NSString * SubscriptionId;              //@synthesize SubscriptionId=_SubscriptionId - In the implementation block
+(id)definition;
-(NSString *)SubscriptionId;
-(void)setSubscriptionId:(NSString *)arg1 ;
-(void)dealloc;
@end

