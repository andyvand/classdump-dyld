/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessagesKit/SOHelper.h>

@interface SOMessageHelper : SOHelper
+(id)remoteReceiverProtocol;
+(void)_openURLWithAction:(id)arg1 forAlias:(id)arg2 ;
+(id)iMessageURLForAddresses:(id)arg1 ;
+(void)videoChatWithAlias:(id)arg1 ;
+(void)audioChatWithAlias:(id)arg1 ;
+(void)shareScreenWithAlias:(id)arg1 ;
+(void)shareScreenOfAlias:(id)arg1 ;
+(void)startChatWithABPersonID:(id)arg1 ;
+(id)iMessageURLForAddress:(id)arg1 ;
+(id)bundleName;
+(id)weakSharedInstance;
-(void)sendMessageText:(id)arg1 toRecipients:(id)arg2 onService:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)sendMessageText:(id)arg1 toRecipient:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)newMessageString;
-(void)startNewConverstaionInMessages;
-(id)openMessagesString;
-(void)openShareKit;
@end

