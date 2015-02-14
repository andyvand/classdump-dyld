/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSWindow.h>

@class PKPassWindowController;

@interface PKChildWindow : NSWindow {

	PKPassWindowController* _windowAnimationController;
	PKPassWindowController* _passWindowController;

}

@property (retain) PKPassWindowController * passWindowController;              //@synthesize passWindowController=_passWindowController - In the implementation block
-(void)setPassWindowController:(PKPassWindowController *)arg1 ;
-(PKPassWindowController *)passWindowController;
-(void)mouseDown:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
-(void)mouseDragged:(id)arg1 ;
@end

