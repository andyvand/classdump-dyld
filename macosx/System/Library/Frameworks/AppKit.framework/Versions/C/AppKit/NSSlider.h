/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <AppKit/NSAccessibilitySlider.h>

@class NSString;

@interface NSSlider : NSControl <NSAccessibilitySlider>

@property (assign) unsigned long long sliderType; 
@property (assign) double minValue; 
@property (assign) double maxValue; 
@property (assign) double altIncrementValue; 
@property (readonly) double knobThickness; 
@property (getter=isVertical,readonly) long long vertical; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)sizeToFit;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformIncrement;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(long long)isVertical;
-(char)isFlipped;
-(id)titleFont;
-(void)setTitleFont:(id)arg1 ;
-(id)titleCell;
-(NSEdgeInsets)alignmentRectInsets;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(double)baselineOffsetFromBottom;
-(double)maxValue;
-(double)minValue;
-(double)knobThickness;
-(void)setKnobThickness:(double)arg1 ;
-(void)setAltIncrementValue:(double)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)setTitleColor:(id)arg1 ;
-(CGRect)rectOfTickMarkAtIndex:(long long)arg1 ;
-(long long)numberOfTickMarks;
-(unsigned long long)tickMarkPosition;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(void)setTickMarkPosition:(unsigned long long)arg1 ;
-(void)setNumberOfTickMarks:(long long)arg1 ;
-(double)tickMarkValueAtIndex:(long long)arg1 ;
-(unsigned long long)sliderType;
-(void)setSliderType:(unsigned long long)arg1 ;
-(double)altIncrementValue;
-(void)setTitleCell:(id)arg1 ;
-(id)titleColor;
-(id)setTitleNoCopy:(id)arg1 ;
-(void)_moveInDirection:(unsigned long long)arg1 ;
-(void)setAllowsTickMarkValuesOnly:(char)arg1 ;
-(char)allowsTickMarkValuesOnly;
-(long long)indexOfTickMarkAtPoint:(CGPoint)arg1 ;
-(double)closestTickMarkValueToValue:(double)arg1 ;
-(char)tickMarkIsProminentAtIndex:(long long)arg1 ;
-(void)setTickMarkIsProminent:(char)arg1 atIndex:(long long)arg2 ;
-(id)ns_widgetType;
@end

