/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSString;

@interface SpeedoView : NSView {

	double _minValue;
	double _maxValue;
	double _value;
	double _fontSize;
	NSString* _label;
	char _drawsBackground;

}

@property (assign,nonatomic) double minValue;                   //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                   //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double fontSize;                   //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char drawsBackground;              //@synthesize drawsBackground=_drawsBackground - In the implementation block
+(id)stringAttributesWithFont:(id)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(void)setDrawsBackground:(char)arg1 ;
-(char)drawsBackground;
-(void)setValue:(double)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(double)maxValue;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(NSString *)label;
-(double)value;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setMin:(double)arg1 ;
-(void)setMax:(double)arg1 ;
@end

