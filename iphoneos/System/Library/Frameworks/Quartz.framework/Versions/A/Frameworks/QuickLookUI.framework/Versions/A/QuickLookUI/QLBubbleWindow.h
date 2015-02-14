/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSPanel.h>

@class QLBubble;

@interface QLBubbleWindow : NSPanel {

	double _absolutePosition;
	QLBubble* _bubble;

}

@property (assign) QLBubble * bubble;              //@synthesize bubble=_bubble - In the implementation block
-(QLBubble *)bubble;
-(void)setBubble:(QLBubble *)arg1 ;
-(char)_presenterOnly;
-(void)mouseDown:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
-(void)mouseDragged:(id)arg1 ;
-(id)standardWindowButton:(unsigned long long)arg1 ;
-(void)endEditingFor:(id)arg1 ;
-(id)fieldEditor:(char)arg1 forObject:(id)arg2 ;
-(char)_ownerOnly;
-(char)_canBecomeSecondaryKeyWindow;
@end

