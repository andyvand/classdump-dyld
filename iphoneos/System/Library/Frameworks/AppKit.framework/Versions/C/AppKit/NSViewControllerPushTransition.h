/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewControllerPresentationAnimatorObject.h>

@class NSView, NSBox;

@interface NSViewControllerPushTransition : NSViewControllerPresentationAnimatorObject {

	NSView* _dimmingView;
	NSBox* _boxView;

}
-(void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2 ;
-(void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2 ;
@end

