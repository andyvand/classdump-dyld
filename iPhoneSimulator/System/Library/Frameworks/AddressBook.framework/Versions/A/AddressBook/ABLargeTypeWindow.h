/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSWindow.h>
#import <AddressBook/NSWindowDelegate.h>

@class NSString;

@interface ABLargeTypeWindow : NSWindow <NSWindowDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showWithString:(id)arg1 onScreen:(id)arg2 ;
+(id)forceLTRString:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(char)canBecomeMainWindow;
-(char)canBecomeKeyWindow;
-(void)windowDidResignMain:(id)arg1 ;
@end

