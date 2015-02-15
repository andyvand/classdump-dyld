/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSGetStreamingEventsType : EWSBaseRequestType {

	NSArray* _SubscriptionIds;
	long long _ConnectionTimeout;

}

@property (setter=ubscriptionIds,nonatomic,copy) NSArray * SubscriptionIds;              //@synthesize SubscriptionIds=_SubscriptionIds - In the implementation block
@property (assign,nonatomic) long long ConnectionTimeout;                                //@synthesize ConnectionTimeout=_ConnectionTimeout - In the implementation block
+(id)definition;
-(NSArray *)SubscriptionIds;
-(void)setSubscriptionIds:(NSArray *)arg1 ;
-(long long)ConnectionTimeout;
-(void)setConnectionTimeout:(long long)arg1 ;
-(void)dealloc;
@end

