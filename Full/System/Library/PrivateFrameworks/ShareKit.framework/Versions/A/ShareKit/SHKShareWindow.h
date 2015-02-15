/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@interface SHKShareWindow : NSPanel {

	char _isClosing;

}

@property (assign) char isClosing;              //@synthesize isClosing=_isClosing - In the implementation block
-(char)isClosing;
-(void)setIsClosing:(char)arg1 ;
-(char)hidesOnDeactivate;
-(char)canBecomeMainWindow;
-(void)display;
-(void)displayIfNeeded;
-(char)canBecomeKeyWindow;
-(char)isMovableByWindowBackground;
-(void)_close;
@end

