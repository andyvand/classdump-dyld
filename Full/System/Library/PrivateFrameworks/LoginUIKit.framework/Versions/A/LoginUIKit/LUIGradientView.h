/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSGradient;

@interface LUIGradientView : NSView {

	int _style;
	NSGradient* _gradient1;
	NSGradient* _gradient2;

}
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
@end

