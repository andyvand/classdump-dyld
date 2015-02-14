/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSButtonCell.h>

@protocol DelayedPopUpButtonCellDelegate;
@class NSTimer;

@interface DelayedPopUpButtonCell : NSButtonCell {

	NSTimer* _menuTimer;
	char _didPopUpMenu;
	id<DelayedPopUpButtonCellDelegate> _delayedPopUpButtonCellDelegate;

}

@property (assign,nonatomic,__weak) id<DelayedPopUpButtonCellDelegate> delayedPopUpButtonCellDelegate;              //@synthesize delayedPopUpButtonCellDelegate=_delayedPopUpButtonCellDelegate - In the implementation block
-(void)_invalidateMenuTimer;
-(double)_menuDelayTime;
-(id<DelayedPopUpButtonCellDelegate>)delayedPopUpButtonCellDelegate;
-(void)setDelayedPopUpButtonCellDelegate:(id<DelayedPopUpButtonCellDelegate>)arg1 ;
-(id)accessibilityTitle;
-(id)accessibilityLabel;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)stopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
-(void)_displayDelayedMenu;
@end

