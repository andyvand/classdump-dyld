/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@interface NSBezierPath : NSObject <NSCopying, NSCoding> {

	long long _elementCount;
	long long _elementMax;
	PATHSEGMENT* _head;
	long long _lastSubpathIndex;
	void* _extraSegments;
	double _lineWidth;
	CGRect _controlPointBounds;
	double _miterLimit;
	double _flatness;
	double* _dashedLinePattern;
	unsigned long long _dashedLineCount;
	double _dashedLinePhase;
	void* _path;
	long long _extraSegmentCount;
	long long _extraSegmentMax;
	aSettings _bpFlags;

}

@property (assign) double lineWidth; 
@property (assign) unsigned long long lineCapStyle; 
@property (assign) unsigned long long lineJoinStyle; 
@property (assign) unsigned long long windingRule; 
@property (assign) double miterLimit; 
@property (assign) double flatness; 
@property (copy,readonly) NSBezierPath * bezierPathByFlatteningPath; 
@property (copy,readonly) NSBezierPath * bezierPathByReversingPath; 
@property (getter=isEmpty,readonly) char empty; 
@property (readonly) CGPoint currentPoint; 
@property (readonly) CGRect controlPointBounds; 
@property (readonly) CGRect bounds; 
@property (readonly) long long elementCount; 
+(id)bezierPathWithRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(int)arg2 cornerRadii:(CGSize)arg3 ;
+(id)roundedBezierPathWithRect:(CGRect)arg1 radius:(float)arg2 ;
+(void)initialize;
+(id)bezierPath;
+(unsigned long long)windingRule;
+(void)setWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)lineCapStyle;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(double)lineWidth;
+(void)setLineWidth:(double)arg1 ;
+(double)miterLimit;
+(void)setMiterLimit:(double)arg1 ;
+(double)flatness;
+(void)setFlatness:(double)arg1 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)drawPackedGlyphs:(const char*)arg1 atPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(double)arg1 ;
+(double)defaultMiterLimit;
+(void)setDefaultFlatness:(double)arg1 ;
+(double)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 roundedTopLeftCorner:(char)arg4 roundedTopRightCorner:(char)arg5 roundedBottomLeftCorner:(char)arg6 roundedBottomRightCorner:(char)arg7 ;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(char)arg5 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)appendPath:(id)arg1 ;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)linearGradientFillWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(void)customVerticalFillWithCallbacks:(CGFunctionCallbacks*)arg1 firstColor:(id)arg2 secondColor:(id)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)elementCount;
-(unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)transformUsingAffineTransform:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithRoundedRect:(CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 ;
-(void)appendBezierPath:(id)arg1 ;
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
-(unsigned long long)lineCapStyle;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(unsigned long long)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(char)isEmpty;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(CGPoint)currentPoint;
-(void)_doPath;
-(void)addClip;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(CGRect)controlPointBounds;
-(void)_appendToPath:(id)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(char)arg5 ;
-(void)appendBezierPathWithNativeGlyphs:(const unsigned short*)arg1 advances:(CGSize*)arg2 count:(unsigned long long)arg3 inFont:(id)arg4 ;
-(void)removeAllPoints;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(CGPathRef)CGPath;
-(void)stroke;
-(void)fill;
-(void)setClip;
-(NSBezierPath *)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(NSBezierPath *)bezierPathByReversingPath;
-(unsigned long long)elementAtIndex:(long long)arg1 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(void)appendBezierPathWithGlyph:(unsigned)arg1 inFont:(id)arg2 ;
-(void)appendBezierPathWithGlyphs:(unsigned*)arg1 count:(long long)arg2 inFont:(id)arg3 ;
-(void)appendBezierPathWithPackedGlyphs:(const char*)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(char)cachesBezierPath;
-(void)setCachesBezierPath:(char)arg1 ;
-(void)_appendBezierPathWithRoundRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(void)appendBezierPathWithRoundedRect:(CGRect)arg1 xRadius:(double)arg2 yRadius:(double)arg3 roundedTopLeftCorner:(char)arg4 roundedTopRightCorner:(char)arg5 roundedBottomLeftCorner:(char)arg6 roundedBottomRightCorner:(char)arg7 ;
-(void)_appendBezierPathWithTopRoundRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(void)_appendBezierPathWithBottomRoundRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
@end

