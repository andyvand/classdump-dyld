/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor, NSTableView, NSImage, NSGradient;

@interface NSTableBackgroundView : NSView {

	NSColor* _firstAlternatingColor;
	NSColor* _secondAlternatingColor;
	NSTableView* _tableView;
	NSImage* _backgroundImage;
	NSGradient* _gradient;
	CGSize _cachedSize;
	char _isOpaque;
	char _shouldDrawVerticalGrid;
	char _forRubberBanding;

}

@property (retain) NSImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign) NSTableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSColor * firstAlternatingColor;               //@synthesize firstAlternatingColor=_firstAlternatingColor - In the implementation block
@property (retain) NSColor * secondAlternatingColor;              //@synthesize secondAlternatingColor=_secondAlternatingColor - In the implementation block
@property (getter=isOpaque) char opaque; 
@property (retain) NSGradient * gradient;                         //@synthesize gradient=_gradient - In the implementation block
@property (assign) char shouldDrawVerticalGrid;                   //@synthesize shouldDrawVerticalGrid=_shouldDrawVerticalGrid - In the implementation block
@property (assign) char forRubberBanding;                         //@synthesize forRubberBanding=_forRubberBanding - In the implementation block
+(id)defaultAnimationForKey:(id)arg1 ;
-(void)dealloc;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSTableView *)tableView;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(char)isOpaque;
-(void)_setTrackingAreasDirty:(int)arg1 ;
-(int)_trackingAreasDirty;
-(void)setTableView:(NSTableView *)arg1 ;
-(NSImage *)backgroundImage;
-(void)setFirstAlternatingColor:(NSColor *)arg1 ;
-(void)setSecondAlternatingColor:(NSColor *)arg1 ;
-(void)setForRubberBanding:(char)arg1 ;
-(void)setShouldDrawVerticalGrid:(char)arg1 ;
-(void)setBackgroundImage:(NSImage *)arg1 ;
-(NSColor *)firstAlternatingColor;
-(void)setGradient:(NSGradient *)arg1 ;
-(NSGradient *)gradient;
-(void)_drawRect:(CGRect)arg1 inTableCoordsWithHandler:(/*^block*/id)arg2 ;
-(char)forRubberBanding;
-(void)_callPublicDrawBackground:(char)arg1 drawGrid:(char)arg2 inRect:(CGRect)arg3 ;
-(void)_drawVerticalGridInDirtyRect:(CGRect)arg1 ;
-(void)_drawGradientBackground;
-(void)_drawAlternatingBackgroundAndGridInRect:(CGRect)arg1 ;
-(NSColor *)secondAlternatingColor;
-(char)shouldDrawVerticalGrid;
@end

