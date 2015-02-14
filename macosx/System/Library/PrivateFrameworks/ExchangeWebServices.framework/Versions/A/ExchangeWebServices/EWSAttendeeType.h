/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSEmailAddressType, NSDateComponents;

@interface EWSAttendeeType : NSObject {

	EWSEmailAddressType* _Mailbox;
	int _ResponseType;
	NSDateComponents* _LastResponseTime;

}

@property (nonatomic,retain) EWSEmailAddressType * Mailbox;                    //@synthesize Mailbox=_Mailbox - In the implementation block
@property (assign,nonatomic) int ResponseType;                                 //@synthesize ResponseType=_ResponseType - In the implementation block
@property (nonatomic,retain) NSDateComponents * LastResponseTime;              //@synthesize LastResponseTime=_LastResponseTime - In the implementation block
+(id)definition;
-(NSDateComponents *)LastResponseTime;
-(void)setLastResponseTime:(NSDateComponents *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMailbox:(EWSEmailAddressType *)arg1 ;
-(EWSEmailAddressType *)Mailbox;
-(int)ResponseType;
-(void)setResponseType:(int)arg1 ;
@end

