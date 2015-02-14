/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/RolloverImageButton.h>
#import <Safari/DelayedPopUpButtonCellDelegate.h>

@class NSEvent, OneStepBookmarkingButtonController, NSString;

@interface OneStepBookmarkingBasicButton : RolloverImageButton <DelayedPopUpButtonCellDelegate> {

	NSEvent* _lastMouseDownEvent;
	OneStepBookmarkingButtonController* _controller;

}

@property (nonatomic,retain) OneStepBookmarkingButtonController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(void)buttonDraggingDidStart;
-(id)accessibilityDescriptionForCell:(id)arg1 ;
-(void)showBookmarkingCompletedUI;
-(OneStepBookmarkingButtonController *)controller;
-(void)setCell:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setController:(OneStepBookmarkingButtonController *)arg1 ;
-(void)mouseUp:(id)arg1 ;
@end

