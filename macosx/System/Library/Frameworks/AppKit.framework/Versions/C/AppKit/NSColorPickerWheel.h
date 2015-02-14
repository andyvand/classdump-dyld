/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSColorPicker.h>
#import <AppKit/NSColorPickingCustom.h>

@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom> {

	id wheelView;
	id containerView;
	id brightnessSlider;
	char previouslyTracking;

}
-(long long)currentMode;
-(char)worksWhenModal;
-(void)setColor:(id)arg1 ;
-(char)supportsMode:(long long)arg1 ;
-(id)provideNewView:(char)arg1 ;
-(void)viewSizeChanged:(id)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 ;
-(id)buttonToolTip;
-(double)_insertionOrder;
-(void)brightnessSlider:(id)arg1 ;
@end

