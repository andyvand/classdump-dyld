/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class CALayer, NSImage;

@interface QLTransitionCrossFadeView : NSView {

	CALayer* _sourceLayer;
	CALayer* _destinationLayer;

}

@property (retain) NSImage * sourceImage; 
@property (retain) NSImage * destinationImage; 
@property (assign) double progress; 
-(NSImage *)destinationImage;
-(void)setDestinationImage:(NSImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isOpaque;
-(double)progress;
-(void)setSourceImage:(NSImage *)arg1 ;
-(unsigned)_CAViewFlags;
-(NSImage *)sourceImage;
-(void)setProgress:(double)arg1 ;
@end

