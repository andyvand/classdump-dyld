/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSResponder.h>

@class NSResponder;

@interface WKResponderChainSink : NSResponder {

	NSResponder* _lastResponderInChain;
	BOOL _didReceiveUnhandledCommand;

}
-(id)initWithResponderChain:(id)arg1 ;
-(BOOL)didReceiveUnhandledCommand;
-(char)tryToPerform:(SEL)arg1 with:(id)arg2 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)noResponderFor:(SEL)arg1 ;
-(void)detach;
@end

