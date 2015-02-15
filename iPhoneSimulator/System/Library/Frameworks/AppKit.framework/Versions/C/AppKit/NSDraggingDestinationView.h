/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface NSDraggingDestinationView : NSView {

	NSColor* _color;
	long long _feedbackStyle;
	long long _draggingDestinationStyle;
	long long _backgroundStyle;

}

@property (copy) NSColor * color;                                   //@synthesize color=_color - In the implementation block
@property (assign) long long feedbackStyle;                         //@synthesize feedbackStyle=_feedbackStyle - In the implementation block
@property (assign) long long draggingDestinationStyle;              //@synthesize draggingDestinationStyle=_draggingDestinationStyle - In the implementation block
@property (assign) long long backgroundStyle;                       //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(void)setDraggingDestinationStyle:(long long)arg1 ;
-(long long)draggingDestinationStyle;
-(long long)feedbackStyle;
-(void)setFeedbackStyle:(long long)arg1 ;
@end

