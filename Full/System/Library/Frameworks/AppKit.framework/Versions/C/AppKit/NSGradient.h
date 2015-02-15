/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSArray, NSColorSpace;

@interface NSGradient : NSObject <NSCopying, NSCoding> {

	NSArray* _colorArray;
	NSColorSpace* _colorSpace;
	void* _functionRef;
	void* _componentArray;
	void* _reserved1;
	void* _reserved2;
	void* _reserved3;

}

@property (readonly) NSColorSpace * colorSpace; 
@property (readonly) long long numberOfColorStops; 
+(id)cannedGradientPlist;
+(id)cannedGradientWithTag:(int)arg1 ;
+(void)_logColorAsSRGB:(id)arg1 ;
+(void)_logColorAsHSB:(id)arg1 ;
+(id)gradientFromBalloonColor:(id)arg1 ;
+(id)highlightGradientForColor:(id)arg1 ;
+(void)initialize;
+(id)_windowBorderGradientFromGrayValue:(int)arg1 toGrayValue:(int)arg2 colorSpace:(id)arg3 ;
-(id)startColor;
-(id)endColor;
-(id)init;
-(void)dealloc;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSColorSpace *)colorSpace;
-(id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 ;
-(void)drawInBezierPath:(id)arg1 angle:(double)arg2 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 ;
-(id)initWithColors:(id)arg1 atLocations:(const double*)arg2 colorSpace:(id)arg3 ;
-(CGFunctionRef)_interpolationFunctionRefWithCallbacks:(CGFunctionCallbacks*)arg1 ;
-(id)_colorSpaceForColorArray:(id)arg1 ;
-(void)_commonInitWithColorArray:(id)arg1 colorSpace:(id)arg2 padStart:(char)arg3 padEnd:(char)arg4 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 ;
-(void)drawFromCenter:(CGPoint)arg1 radius:(double)arg2 toCenter:(CGPoint)arg3 radius:(double)arg4 options:(unsigned long long)arg5 ;
-(long long)numberOfColorStops;
-(void)getColor:(id*)arg1 location:(double*)arg2 atIndex:(long long)arg3 ;
-(id)_initWithColorSpace:(id)arg1 callbacks:(CGFunctionCallbacks*)arg2 data:(void*)arg3 ;
-(id)initWithColors:(id)arg1 ;
-(id)initWithColorsAndLocations:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 ;
-(void)drawInBezierPath:(id)arg1 relativeCenterPosition:(CGPoint)arg2 ;
-(id)interpolatedColorAtLocation:(double)arg1 ;
@end

