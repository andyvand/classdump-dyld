/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseDelegateType.h>

@class NSArray;

@interface EWSUpdateDelegateType : EWSBaseDelegateType {

	NSArray* _DelegateUsers;
	int _DeliverMeetingRequests;

}

@property (nonatomic,copy) NSArray * DelegateUsers;                   //@synthesize DelegateUsers=_DelegateUsers - In the implementation block
@property (assign,nonatomic) int DeliverMeetingRequests;              //@synthesize DeliverMeetingRequests=_DeliverMeetingRequests - In the implementation block
+(id)definition;
-(NSArray *)DelegateUsers;
-(int)DeliverMeetingRequests;
-(void)setDeliverMeetingRequests:(int)arg1 ;
-(void)dealloc;
-(void)setDelegateUsers:(NSArray *)arg1 ;
@end

