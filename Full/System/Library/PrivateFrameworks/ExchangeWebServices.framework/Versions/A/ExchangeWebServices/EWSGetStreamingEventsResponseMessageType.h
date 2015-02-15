/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSGetStreamingEventsResponseMessageType : EWSResponseMessageType {

	NSArray* _Notifications;
	NSArray* _ErrorSubscriptionIds;
	char _ConnectionStatus;

}

@property (nonatomic,copy) NSArray * Notifications;                     //@synthesize Notifications=_Notifications - In the implementation block
@property (nonatomic,copy) NSArray * ErrorSubscriptionIds;              //@synthesize ErrorSubscriptionIds=_ErrorSubscriptionIds - In the implementation block
@property (assign,nonatomic) char ConnectionStatus;                     //@synthesize ConnectionStatus=_ConnectionStatus - In the implementation block
+(id)definition;
-(NSArray *)Notifications;
-(void)setNotifications:(NSArray *)arg1 ;
-(NSArray *)ErrorSubscriptionIds;
-(void)setErrorSubscriptionIds:(NSArray *)arg1 ;
-(char)ConnectionStatus;
-(void)setConnectionStatus:(char)arg1 ;
-(void)dealloc;
@end

