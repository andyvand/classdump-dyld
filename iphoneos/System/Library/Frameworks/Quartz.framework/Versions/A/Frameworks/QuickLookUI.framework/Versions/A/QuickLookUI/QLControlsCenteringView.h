/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class QLControlsController;

@interface QLControlsCenteringView : NSView {

	QLControlsController* _controlsController;

}

@property (assign) QLControlsController * controlsController;              //@synthesize controlsController=_controlsController - In the implementation block
-(void)setControlsController:(QLControlsController *)arg1 ;
-(QLControlsController *)controlsController;
-(void)updateConstraints;
-(id)hitTest:(CGPoint)arg1 ;
@end

