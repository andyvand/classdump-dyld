/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface EWSNotificationType : NSObject {

	NSString* _SubscriptionId;
	NSString* _PreviousWatermark;
	NSArray* _Events;
	char _MoreEvents;

}

@property (setter=ubscriptionId,nonatomic,copy) NSString * SubscriptionId;              //@synthesize SubscriptionId=_SubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * PreviousWatermark;                                //@synthesize PreviousWatermark=_PreviousWatermark - In the implementation block
@property (assign,nonatomic) char MoreEvents;                                           //@synthesize MoreEvents=_MoreEvents - In the implementation block
@property (nonatomic,copy) NSArray * Events;                                            //@synthesize Events=_Events - In the implementation block
+(id)definition;
-(NSString *)SubscriptionId;
-(void)setSubscriptionId:(NSString *)arg1 ;
-(NSString *)PreviousWatermark;
-(void)setPreviousWatermark:(NSString *)arg1 ;
-(char)MoreEvents;
-(void)setMoreEvents:(char)arg1 ;
-(NSArray *)Events;
-(void)setEvents:(NSArray *)arg1 ;
-(void)dealloc;
@end

