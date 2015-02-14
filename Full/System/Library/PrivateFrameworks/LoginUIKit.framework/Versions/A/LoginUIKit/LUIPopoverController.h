/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <LoginUIKit/LUIController.h>

@class NSPopover, LUIPopoverViewController, NSView;

@interface LUIPopoverController : LUIController {

	NSPopover* _popover;
	LUIPopoverViewController* _viewController;
	NSView* _positioningView;
	unsigned long long _preferredEdge;

}
+(id)controllerWithStyle:(int)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)close;
-(id)viewController;
-(void)_displaysDidChange:(id)arg1 ;
-(void)showRelativeToView:(id)arg1 preferredEdge:(unsigned long long)arg2 ;
-(void)setUIEnabled:(char)arg1 ;
-(CGRect)_positioningRectForView:(id)arg1 forPreferredEdge:(unsigned long long)arg2 ;
@end

