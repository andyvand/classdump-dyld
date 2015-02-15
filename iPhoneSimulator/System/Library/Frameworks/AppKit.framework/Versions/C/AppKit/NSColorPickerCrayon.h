/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorPicker.h>
#import <AppKit/NSColorPickingCustom.h>

@interface NSColorPickerCrayon : NSColorPicker <NSColorPickingCustom> {

	id crayonView;
	id colorTextField;
	id containerView;

}
-(long long)currentMode;
-(void)setColor:(id)arg1 ;
-(char)supportsMode:(long long)arg1 ;
-(id)provideNewView:(char)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 ;
-(id)buttonToolTip;
-(CGSize)minContentSize;
-(double)_insertionOrder;
-(void)changeColor:(id)arg1 ;
-(void)changeDisplayedColorName:(id)arg1 ;
@end

