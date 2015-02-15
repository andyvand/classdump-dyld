/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorSpaceSliders.h>

@interface NSCMYKSliders : NSColorSpaceSliders {

	id cyanSlider;
	id yellowSlider;
	id magentaSlider;
	id blackSlider;
	id cyanText;
	id yellowText;
	id magentaText;
	id blackText;
	id cmykView;

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

