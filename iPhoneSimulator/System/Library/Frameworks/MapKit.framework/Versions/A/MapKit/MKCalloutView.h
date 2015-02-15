/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSView, NSColor, NSMutableArray, NSTimer, NSVisualEffectView, CAShapeLayer, _MKFlippedView;

@interface MKCalloutView : NSView {

	CGRect _boundary;
	NSTextField* _title;
	NSView* _subtitle;
	NSTextField* _temporary;
	NSView* _leftView;
	NSColor* _leftViewColor;
	NSView* _rightView;
	SCD_Struct_MK19 _anchor;
	CGRect _frame;
	id _delegate;
	struct {
		unsigned animated : 1;
		unsigned didMoveCalled : 1;
		unsigned hasPendingAnimatedLayout : 1;
		unsigned canAnchorFromBottom : 1;
		unsigned reserved : 28;
	}  _flags;
	NSMutableArray* _fadeInViews;
	NSMutableArray* _fadeOutViews;
	NSTimer* _layoutAnimationTimer;
	double _maximumWidth;
	NSVisualEffectView* _backdropView;
	CAShapeLayer* _contentMaskLayer;
	CAShapeLayer* _backdropMaskLayer;
	_MKFlippedView* _contentView;
	NSView* _leftViewBackground;
	NSView* _shadowView;

}

@property (assign,nonatomic) char canAnchorFromBottom; 
@property (getter=isLeftAnchored,nonatomic,readonly) char leftAnchored; 
@property (assign,nonatomic) unsigned long long titleLineBreakMode; 
@property (assign,nonatomic) unsigned long long subtitleLineBreakMode; 
@property (assign,nonatomic) unsigned long long titleTextAlignment; 
@property (assign,nonatomic) unsigned long long subtitleTextAlignment; 
@property (nonatomic,retain) NSView * leftView;                                      //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) NSView * rightView;                                     //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,retain) NSView * detailView; 
@property (assign,nonatomic) double maximumWidth;                                    //@synthesize maximumWidth=_maximumWidth - In the implementation block
+(id)_backgroundImage;
+(id)_bottomAnchorImage;
+(id)_leftCapImage;
+(id)_rightCapImage;
+(id)_topAnchorImage;
+(id)sharedCalloutView;
+(double)defaultHeight;
-(double)maximumWidth;
-(char)isLeftAnchored;
-(void)setSubtitle:(id)arg1 animated:(char)arg2 ;
-(void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(char)arg3 ;
-(void)setLeftView:(id)arg1 animated:(char)arg2 ;
-(void)setRightView:(id)arg1 animated:(char)arg2 ;
-(void)setDetailView:(id)arg1 animated:(char)arg2 ;
-(void)setAnchorPoint:(CGPoint)arg1 boundaryRect:(CGRect)arg2 animate:(char)arg3 ;
-(void)setCanAnchorFromBottom:(char)arg1 ;
-(void)setTitleLineBreakMode:(unsigned long long)arg1 ;
-(void)setSubtitleLineBreakMode:(unsigned long long)arg1 ;
-(void)forceAnchorPosition:(int)arg1 ;
-(void)getActualAnchorPoint:(CGPoint*)arg1 frame:(CGRect*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(CGPoint)arg4 boundaryRect:(CGRect)arg5 ;
-(void)fadeOutWithDuration:(double)arg1 ;
-(void)_setLeftView:(id)arg1 ;
-(void)_layoutSubviews:(char)arg1 ;
-(void)_scheduleViewToFadeOut:(id)arg1 ;
-(void)_scheduleLayoutAnimation;
-(void)_scheduleViewToFadeIn:(id)arg1 ;
-(void)_setRightView:(id)arg1 ;
-(id)_makeSubtitle;
-(void)_setLayoutAnimationTimer:(id)arg1 ;
-(void)_fadeViewsIn:(char)arg1 ;
-(void)_layoutAnimation;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(CGPoint)_originForScale:(double)arg1 ;
-(void)_updateMask;
-(CGPathRef)newMaskCGPath;
-(void)completeBounceAnimation;
-(void)_runBounceAnimation;
-(void)_markDidMoveCalled;
-(id)_accessoryViewReceivingBackgroundMouseEvents;
-(void)_forwardBackgroundMouseAction:(SEL)arg1 toAccessoryViewWithEvent:(id)arg2 ;
-(float)MKCalloutViewCapHeight;
-(float)MKCalloutViewCapPaddingTop;
-(float)MKCalloutViewLayoutDuration;
-(float)MKCalloutViewButtonPadding;
-(float)MKCalloutViewHorizontalMargin;
-(float)MKCalloutViewHorizontalPadding;
-(float)MKCalloutViewVerticalMargin;
-(float)MKCalloutViewMinimumWidth;
-(void)setDetailView:(NSView *)arg1 ;
-(NSView *)detailView;
-(void)setLeftView:(NSView *)arg1 ;
-(void)setRightView:(NSView *)arg1 ;
-(void)setTemporaryTitle:(id)arg1 ;
-(id)temporaryTitle;
-(unsigned long long)titleLineBreakMode;
-(unsigned long long)subtitleLineBreakMode;
-(unsigned long long)titleTextAlignment;
-(void)setTitleTextAlignment:(unsigned long long)arg1 ;
-(unsigned long long)subtitleTextAlignment;
-(void)setSubtitleTextAlignment:(unsigned long long)arg1 ;
-(char)canAnchorFromBottom;
-(void)_setOriginForScale:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(CGPoint)offset;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)removeFromSuperview;
-(id)delegate;
-(char)isFlipped;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(NSView *)leftView;
-(NSView *)rightView;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(id)subtitle;
-(void)setSubtitle:(id)arg1 ;
@end

