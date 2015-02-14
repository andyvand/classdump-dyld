/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextView, NSTextField, NSView, NSColor;

@interface SHKShareWindowBackgroundView : NSView {

	NSTextView* _messageTextView;
	NSTextField* _charactersCountTextField;
	NSView* _partsSeparatorTopView;
	NSView* _partsSeparatorBottomView;
	int _textureStyle;
	char _hasLinesOfNonDefaultHeight;
	NSColor* _backgroundFillColor;

}

@property (assign) int textureStyle;                         //@synthesize textureStyle=_textureStyle - In the implementation block
@property (copy) NSColor * backgroundFillColor; 
+(id)defaultAnimationForKey:(id)arg1 ;
-(void)commonInit;
-(int)textureStyle;
-(void)setTextureStyle:(int)arg1 ;
-(char)isInNotificationCenter;
-(void)setBackgroundFillColor:(NSColor *)arg1 ;
-(id)SHKBackgroundFillColor;
-(id)_bezierPath;
-(void)_beginClip;
-(void)_endClip;
-(void)drawBevelInRect:(CGRect)arg1 ;
-(void)drawScalableImage:(id)arg1 scaleTopLeft:(CGPoint)arg2 scaleBottomRight:(CGPoint)arg3 inFrame:(CGRect)arg4 ;
-(NSColor *)backgroundFillColor;
-(void)drawTexture;
-(void)drawBevel;
-(void)drawHorizontalSeparationLineAtHeight:(double)arg1 ;
-(char)drawGrid;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

