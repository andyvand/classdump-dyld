/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSEmailAddress, EWSUserOofSettingsType;

@interface EWSSetUserOofSettingsRequestType : EWSBaseRequestType {

	EWSEmailAddress* _Mailbox;
	EWSUserOofSettingsType* _UserOofSettings;

}

@property (nonatomic,retain) EWSEmailAddress * Mailbox;                             //@synthesize Mailbox=_Mailbox - In the implementation block
@property (nonatomic,retain) EWSUserOofSettingsType * UserOofSettings;              //@synthesize UserOofSettings=_UserOofSettings - In the implementation block
+(id)definition;
-(EWSUserOofSettingsType *)UserOofSettings;
-(void)setUserOofSettings:(EWSUserOofSettingsType *)arg1 ;
-(void)dealloc;
-(void)setMailbox:(EWSEmailAddress *)arg1 ;
-(EWSEmailAddress *)Mailbox;
@end

