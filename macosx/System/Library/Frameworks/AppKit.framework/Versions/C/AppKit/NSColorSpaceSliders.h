/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSSliderViewRequiredMethods.h>

@class NSColorPickerSliders, NSColorSpace;

@interface NSColorSpaceSliders : NSObject <NSSliderViewRequiredMethods> {

	id colorPanel;
	NSColorPickerSliders* controllingPicker;
	NSColorSpace* activeColorSpace;

}
+(id)genericColorSpace;
-(void)dealloc;
-(void)setColor:(id)arg1 ;
-(void)takeColorSpaceFrom:(id)arg1 ;
-(id)provideNewSubview:(id)arg1 ;
-(void)setActiveColorSpace:(id)arg1 ;
-(id)activeColorSpace;
-(id)regularColorIfPossible:(id)arg1 ;
-(void)setMatchedColor:(id)arg1 ;
-(void)_adjustControls:(id)arg1 andSetColor:(char)arg2 ;
-(void)adjustControls:(id)arg1 ;
-(id)fieldEditableControl;
-(void)finishProvideNewSubviewSetup;
-(CGSize)requiredMinSize;
@end

