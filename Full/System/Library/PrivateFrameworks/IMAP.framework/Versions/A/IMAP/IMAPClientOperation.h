/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class IMAPGateway, NSString;

@interface IMAPClientOperation : NSOperation {

	IMAPGateway* _gateway;
	long long _completionState;

}

@property (copy,readonly) NSString * commandTypeString; 
@property (readonly) char alwaysAllowToComplete; 
@property (readonly) char shouldSendAgainOnError; 
@property (readonly) long long minRequiredConnectionState; 
@property (readonly) long long maxAllowedConnectionState; 
@property (readonly) long long composition; 
@property (readonly) char isWaitingToStart; 
@property (copy,readonly) NSString * activityString; 
@property (copy,readonly) NSString * detailsString; 
@property (retain) IMAPGateway * gateway;                               //@synthesize gateway=_gateway - In the implementation block
@property (assign) long long completionState;                           //@synthesize completionState=_completionState - In the implementation block
+(id)newIMAPQuotedString:(id)arg1 ;
+(id)IMAPNeedsLiteralCharacterSet;
+(id)newIMAPStringForMailboxName:(id)arg1 ;
+(id)_IMAPNeedsQuoteCharacterSet;
-(IMAPGateway *)gateway;
-(void)setGateway:(IMAPGateway *)arg1 ;
-(NSString *)activityString;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(long long)composition;
-(NSString *)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(char)shouldSendAgainOnError;
-(void)cleanupAfterCompletion;
-(char)alwaysAllowToComplete;
-(id)simpleDescriptionString;
-(NSString *)detailsString;
-(void)operationDidFinish;
-(long long)completionState;
-(char)isWaitingToStart;
-(char)completedSuccessfully;
-(void)increasePriority;
-(id)shallowDescription;
-(void)setCompletionState:(long long)arg1 ;
@end

