/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSBitmapImageRep;

@interface LUIFocusRingView : NSView {

	NSView* _focusedView;
	NSBitmapImageRep* _focusRingImageRep;

}
+(void)showForView:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFocusedView:(id)arg1 ;
-(id)_focusRingImageRepForView:(id)arg1 ;
@end

