/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailService/MSExternalAction.h>

@class MCMessage, MFMailAccount, NSString;

@interface MSExternalAppendAction : MSExternalAction {

	int _mailboxType;
	MCMessage* _message;
	MFMailAccount* _account;
	NSString* _mailboxPath;

}

@property (readonly) MCMessage * message;                      //@synthesize message=_message - In the implementation block
@property (readonly) MFMailAccount * account;                  //@synthesize account=_account - In the implementation block
@property (readonly) int mailboxType;                          //@synthesize mailboxType=_mailboxType - In the implementation block
@property (copy,readonly) NSString * mailboxPath;              //@synthesize mailboxPath=_mailboxPath - In the implementation block
+(id)entityName;
-(id)initWithManagedObject:(id)arg1 ;
-(int)mailboxType;
-(id)init;
-(MCMessage *)message;
-(MFMailAccount *)account;
-(id)managedObjectForContext:(id)arg1 ;
-(id)initWithMessage:(id)arg1 account:(id)arg2 mailboxType:(int)arg3 mailboxPath:(id)arg4 ;
-(id)initWithMessage:(id)arg1 account:(id)arg2 mailboxType:(int)arg3 ;
-(NSString *)mailboxPath;
@end

