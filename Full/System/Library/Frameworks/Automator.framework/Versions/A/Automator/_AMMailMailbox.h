/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, _AMMailAccount;

@interface _AMMailMailbox : SBObject

@property (copy) NSString * name; 
@property (readonly) long long unreadCount; 
@property (copy,readonly) _AMMailAccount * account; 
@property (copy,readonly) _AMMailMailbox * container; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(id)mailboxes;
-(long long)unreadCount;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(_AMMailMailbox *)container;
-(_AMMailAccount *)account;
-(id)messages;
@end

