/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSColorSpaceSliders.h>

@interface NSRGBSliders : NSColorSpaceSliders {

	id redSlider;
	id greenSlider;
	id blueSlider;
	id rgbView;
	id redText;
	id greenText;
	id blueText;
	id rgbText;
	id hexText;

}
+(id)genericColorSpace;
-(char)worksWhenModal;
-(id)provideNewSubview:(id)arg1 ;
-(id)regularColorIfPossible:(id)arg1 ;
-(void)setMatchedColor:(id)arg1 ;
-(void)_adjustControls:(id)arg1 andSetColor:(char)arg2 ;
-(void)adjustControls:(id)arg1 ;
-(id)fieldEditableControl;
-(void)hexAction:(id)arg1 ;
@end

