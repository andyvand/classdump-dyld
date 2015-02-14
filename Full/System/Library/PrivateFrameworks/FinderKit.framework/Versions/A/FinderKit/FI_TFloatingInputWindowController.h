/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <FinderKit/NSWindowDelegate.h>

@class NSString;

@interface FI_TFloatingInputWindowController : NSWindowController <NSWindowDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleton;
+(void)finalize;
-(void)keyboardInputSourceChanged:(id)arg1 ;
-(BOOL)preProcessedByInputMethod:(id)arg1 forController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)inputContext;
-(void)windowWillClose:(id)arg1 ;
@end

