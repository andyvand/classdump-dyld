/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@protocol MouseEventBlockingViewDelegate;
@interface MouseEventBlockingView : NSView {

	id<MouseEventBlockingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MouseEventBlockingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_notifyDelegateAboutEventBlocked:(id)arg1 ;
-(void)setDelegate:(id<MouseEventBlockingViewDelegate>)arg1 ;
-(id<MouseEventBlockingViewDelegate>)delegate;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
@end
