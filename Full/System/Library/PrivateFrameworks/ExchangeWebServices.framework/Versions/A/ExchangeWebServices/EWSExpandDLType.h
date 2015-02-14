/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSEmailAddressType;

@interface EWSExpandDLType : EWSBaseRequestType {

	EWSEmailAddressType* _Mailbox;

}

@property (nonatomic,retain) EWSEmailAddressType * Mailbox;              //@synthesize Mailbox=_Mailbox - In the implementation block
+(id)definition;
-(void)dealloc;
-(id)description;
-(void)setMailbox:(EWSEmailAddressType *)arg1 ;
-(EWSEmailAddressType *)Mailbox;
@end

