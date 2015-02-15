/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSWindow.h>

@class NSWindow;

@interface LUIWindow : NSWindow {

	char _canBecomeKey;
	char _companionWindowVisible;
	NSWindow* _companionWindow;

}

@property (assign) char canBecomeKey;              //@synthesize canBecomeKey=_canBecomeKey - In the implementation block
-(void)setCanBecomeKey:(char)arg1 ;
-(char)canBecomeKey;
-(void)dealloc;
-(id)description;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)orderOut:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(void)center;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
-(void)setLevel:(long long)arg1 ;
-(void)setIsSuperSticky;
-(void)makeCompanionWindow;
-(id)originalAccessibilityHitTest:(CGPoint)arg1 ;
-(void)setUsesCompanionWindow:(char)arg1 ;
@end

