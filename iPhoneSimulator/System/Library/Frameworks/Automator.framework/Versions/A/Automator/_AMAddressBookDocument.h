/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, NSURL;

@interface _AMAddressBookDocument : SBObject

@property (copy,readonly) NSString * name; 
@property (readonly) char modified; 
@property (copy,readonly) NSURL * file; 
-(char)modified;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(id)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(NSString *)name;
-(NSURL *)file;
@end

