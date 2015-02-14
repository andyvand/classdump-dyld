/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface QLTransitionView : NSView {

	NSImage* _transitionImage;
	CGRect _transitionFrame;

}

@property (retain) NSImage * transitionImage;              //@synthesize transitionImage=_transitionImage - In the implementation block
@property (assign) CGRect transitionFrame;                 //@synthesize transitionFrame=_transitionFrame - In the implementation block
-(void)setTransitionImage:(NSImage *)arg1 ;
-(NSImage *)transitionImage;
-(CGRect)transitionFrame;
-(void)setTransitionFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
@end

