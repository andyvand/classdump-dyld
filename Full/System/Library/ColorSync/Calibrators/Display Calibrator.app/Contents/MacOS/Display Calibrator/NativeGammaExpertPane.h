/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/ColorSync/Calibrators/Display Calibrator.app/Contents/MacOS/Display Calibrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Display Calibrator/PaneController.h>

@class NSTextField, CompareView, XYControl, NSString;

@interface NativeGammaExpertPane : PaneController {

	NSTextField* _instruct;
	CompareView* _compare;
	XYControl* _slider;
	XYControl* _sliderRB;
	NSString* _instructFormat;

}
-(char)shouldSkip;
-(void)paneDidUnload:(char)arg1 ;
-(void)paneDidLoad:(char)arg1 ;
-(void)sliderHit:(id)arg1 ;
-(void)sliderHitRB:(id)arg1 ;
-(void)awakeFromNib;
@end

