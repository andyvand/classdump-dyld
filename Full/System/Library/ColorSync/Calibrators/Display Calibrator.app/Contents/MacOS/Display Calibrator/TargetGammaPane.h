/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/ColorSync/Calibrators/Display Calibrator.app/Contents/MacOS/Display Calibrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Display Calibrator/PaneController.h>

@class NSSlider, NSMatrix, NSButton, NSTextField;

@interface TargetGammaPane : PaneController {

	id _viewExpert;
	NSSlider* _slider;
	NSMatrix* _matrix;
	NSButton* _check;
	NSTextField* _info;
	float _startGamma;

}
-(void)paneDidUnload:(char)arg1 ;
-(void)paneDidLoad:(char)arg1 ;
-(void)sliderHit:(id)arg1 ;
-(void)matrixHit:(id)arg1 ;
-(void)buttonHit:(id)arg1 ;
-(void)checkHit:(id)arg1 ;
-(void)gammaChanged:(float)arg1 ;
-(id)view;
-(void)awakeFromNib;
-(void)updateUI;
@end

