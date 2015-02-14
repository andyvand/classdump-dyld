/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QFilterCell.h>

@class NSBox, NSPopUpButton, NSSlider, NSTextField, QFilterIntermediateView;

@interface QFilterCellIntermediate : QFilterCell {

	NSBox* IntermediateBox;
	NSPopUpButton* IntermediateColorModels;
	NSPopUpButton* IntermediateObjects;
	NSPopUpButton* IntermediateProfiles;
	NSSlider* IntermediateSlider0;
	NSSlider* IntermediateSlider1;
	NSSlider* IntermediateSlider2;
	NSSlider* IntermediateSlider3;
	NSSlider* IntermediateSlider4;
	NSSlider* IntermediateSlider5;
	NSSlider* IntermediateSlider6;
	NSTextField* IntermediateText1;
	NSPopUpButton* IntermediateTypes;
	QFilterIntermediateView* IntermediateView;

}
+(char)needsToRemainInViewHierarchy;
-(void)instantiateView;
-(void)sliderCallback:(id)arg1 ;
-(void)activateSliderTimer;
-(void)IntermediateTypeAction:(id)arg1 ;
-(void)IntermediateColorModelObjectAction:(id)arg1 ;
-(void)IntermediateBrightnessSliderAction:(id)arg1 ;
-(void)IntermediateTintSliderAction:(id)arg1 ;
-(void)IntermediateHueSliderAction:(id)arg1 ;
-(void)IntermediateSaturationSliderAction:(id)arg1 ;
-(void)IntermediateBWLevelAction:(id)arg1 ;
-(void)IntermediateProfileAction:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)updateUI;
@end

