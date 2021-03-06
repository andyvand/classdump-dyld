/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorSpaceSliders.h>

@class NSColor;

@interface NSHSBSliders : NSColorSpaceSliders {

	id hueSlider;
	id saturationSlider;
	id brightnessSlider;
	id hueText;
	id saturationText;
	id brightnessText;
	id hsbView;
	NSColor* currColor;
	NSColor* backgroundColor;
	id sliderMatrix;

}
+(id)genericColorSpace;
-(char)worksWhenModal;
-(void)viewSizeChanged:(id)arg1 ;
-(id)provideNewSubview:(id)arg1 ;
-(id)regularColorIfPossible:(id)arg1 ;
-(void)setMatchedColor:(id)arg1 ;
-(void)_adjustControls:(id)arg1 andSetColor:(char)arg2 ;
-(void)adjustControls:(id)arg1 ;
-(id)fieldEditableControl;
-(CGSize)requiredMinSize;
@end

