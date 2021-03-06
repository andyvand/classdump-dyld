/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <Preview/PVMediaUIControl.h>

@protocol MediaUIScrubberDelegate;
@class PVMediaUIValueTiming, NSTimer;

@interface PVMediaUIScrubber : PVMediaUIControl {

	double _minValue;
	double _maxValue;
	PVMediaUIValueTiming* _valueTiming;
	NSTimer* _timer;
	id<MediaUIScrubberDelegate> _delegate;

}

@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (assign,nonatomic) double currentValue; 
@property (copy) PVMediaUIValueTiming * valueTiming; 
@property (assign,nonatomic) id<MediaUIScrubberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id)_QTUIDrawingOptions;
-(PVMediaUIValueTiming *)valueTiming;
-(void)setValueTiming:(PVMediaUIValueTiming *)arg1 ;
-(void)getKnobRect:(CGRect*)arg1 trackRect:(CGRect*)arg2 ;
-(CGRect)knobRect;
-(double)upperBoundForValue:(double)arg1 ;
-(double)lowerBoundForValue:(double)arg1 ;
-(void)setCurrentValue:(double)arg1 ;
-(void)setDelegate:(id<MediaUIScrubberDelegate>)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id<MediaUIScrubberDelegate>)delegate;
-(double)currentValue;
-(char)isFlipped;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(double)maxValue;
-(double)minValue;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(id)exposedBindings;
-(CGRect)trackRect;
@end

