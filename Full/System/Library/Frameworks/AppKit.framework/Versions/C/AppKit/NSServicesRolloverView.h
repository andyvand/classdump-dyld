/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSServicesRolloverViewDelegate;
@class NSTrackingArea;

@interface NSServicesRolloverView : NSView {

	NSTrackingArea* _rolloverTrackingArea;
	id<NSServicesRolloverViewDelegate> _delegate;
	long long _style;
	char _mouseInside;

}
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isFlipped;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 style:(long long)arg2 ;
@end

