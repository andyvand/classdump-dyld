/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class NSSlider, NSButton;

@interface QCTrackBallUI : QCInspector {

	NSSlider* sensibilitySlider;
	NSButton* autorotationButton;
	NSSlider* inertiaSlider;
	NSSlider* frictionSlider;

}
+(id)viewNibName;
-(void)setupViewForPatch:(id)arg1 ;
-(void)updateTracking:(id)arg1 ;
-(void)updateAutorotation:(id)arg1 ;
@end

