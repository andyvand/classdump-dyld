/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>

@protocol AVSlowMotionSliderDelegate;
@class NSView, NSMutableArray;

@interface AVSlowMotionSlider : NSView {

	double _minValue;
	double _maxValue;
	id<AVSlowMotionSliderDelegate> _delegate;
	SCD_Struct_AV5 _delegateRespondsTo;
	NSView* _trackView;
	NSView* _minHandleView;
	NSView* _maxHandleView;
	unsigned _needsUpdateTrackAndHandles : 1;
	NSMutableArray* _layoutConstraints;

}

@property (assign) double minValue; 
@property (assign) double maxValue; 
@property (__weak) id<AVSlowMotionSliderDelegate> delegate; 
+(char)automaticallyNotifiesObserversOfMinValue;
+(char)automaticallyNotifiesObserversOfMaxValue;
-(void)_setNeedsUpdateTrackAndHandles;
-(void)_updateTrackAndHandlesIfNeeded;
-(void)_updateTrackAndHandles;
-(void)setDelegate:(id<AVSlowMotionSliderDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<AVSlowMotionSliderDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)allowsVibrancy;
-(void)mouseDown:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(double)maxValue;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
@end

