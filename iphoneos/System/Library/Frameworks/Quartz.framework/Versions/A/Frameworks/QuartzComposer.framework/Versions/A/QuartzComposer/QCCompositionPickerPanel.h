/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSPanel.h>

@interface QCCompositionPickerPanel : NSPanel {

	void* _private;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCompositionPickerPanel;
-(void)close;
-(char)canBecomeKeyWindow;
-(id)initWithContentRect:(CGRect)arg1 ;
-(void)_willSelectComposition:(id)arg1 ;
-(void)_didSelectComposition:(id)arg1 ;
-(id)compositionPickerView;
@end

