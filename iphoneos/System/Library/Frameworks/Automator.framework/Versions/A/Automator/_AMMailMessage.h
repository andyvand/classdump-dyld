/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, _AMMailMailbox, _AMMailRichText, NSDate;

@interface _AMMailMessage : SBObject

@property (copy,readonly) NSString * allHeaders; 
@property (assign) int backgroundColor; 
@property (copy) _AMMailMailbox * mailbox; 
@property (copy,readonly) _AMMailRichText * content; 
@property (copy,readonly) NSDate * dateReceived; 
@property (copy,readonly) NSDate * dateSent; 
@property (assign) char deletedStatus; 
@property (assign) char flaggedStatus; 
@property (assign) char junkMailStatus; 
@property (assign) char readStatus; 
@property (copy,readonly) NSString * messageId; 
@property (copy,readonly) NSString * source; 
@property (copy,readonly) NSString * replyTo; 
@property (readonly) long long messageSize; 
@property (copy,readonly) NSString * sender; 
@property (copy,readonly) NSString * subject; 
@property (readonly) char wasForwarded; 
@property (readonly) char wasRedirected; 
@property (readonly) char wasRepliedTo; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(long long)id;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(id)mailAttachments;
-(char)deletedStatus;
-(void)setDeletedStatus:(char)arg1 ;
-(char)junkMailStatus;
-(void)setJunkMailStatus:(char)arg1 ;
-(char)readStatus;
-(void)setReadStatus:(char)arg1 ;
-(NSString *)messageId;
-(void)bounce;
-(id)forwardOpeningWindow:(char)arg1 ;
-(id)redirectOpeningWindow:(char)arg1 ;
-(id)replyOpeningWindow:(char)arg1 replyToAll:(char)arg2 ;
-(NSString *)sender;
-(id)headers;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(long long)messageSize;
-(char)wasRepliedTo;
-(char)wasForwarded;
-(char)wasRedirected;
-(char)flaggedStatus;
-(void)setFlaggedStatus:(char)arg1 ;
-(NSString *)replyTo;
-(NSString *)allHeaders;
-(NSDate *)dateSent;
-(NSDate *)dateReceived;
-(void)setBackgroundColor:(int)arg1 ;
-(_AMMailRichText *)content;
-(int)backgroundColor;
-(NSString *)source;
-(id)recipients;
-(NSString *)subject;
-(_AMMailMailbox *)mailbox;
-(void)setMailbox:(_AMMailMailbox *)arg1 ;
@end

