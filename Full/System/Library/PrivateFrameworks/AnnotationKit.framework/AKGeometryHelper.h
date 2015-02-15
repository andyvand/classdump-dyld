/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController;

@interface AKGeometryHelper : NSObject {

	AKPageController* _pageController;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
+(long long)inverseExifOrientation:(long long)arg1 ;
+(CGRect)adjustRect:(CGRect)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3 ;
+(unsigned long long)draggableArea:(unsigned long long)arg1 convertedForExif:(long long)arg2 ;
+(CGPoint)projectPoint:(CGPoint)arg1 ontoRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3 ;
+(CGPoint)normalizeVectorPoint:(CGPoint)arg1 ;
+(char)isPointOnLeft:(CGPoint)arg1 ofRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3 ;
+(char)exifOrientationHasFlip:(long long)arg1 ;
+(CGPoint)compareVectorDirectionsFirstVector:(CGPoint)arg1 secondVector:(CGPoint)arg2 ;
+(CGPoint)adjustPoint:(CGPoint)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3 ;
+(char)isUnpresentableRect:(CGRect)arg1 ;
+(CGAffineTransform)affineTransformForExifOrientation:(long long)arg1 aboutCenter:(CGPoint)arg2 ;
+(CGRect)renderingStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(char)exifOrientationHasReversedAxes:(long long)arg1 ;
+(CGRect)convertModelToScreenOrientationForRect:(CGRect)arg1 withPageController:(id)arg2 ;
+(CGPoint)convertModelToScreenOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3 ;
+(CGPoint)convertScreenToModelOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3 ;
+(CGAffineTransform)affineTransformRecenteringAboutOriginForExifOrientation:(long long)arg1 withOriginalSize:(CGSize)arg2 ;
+(double)lengthOfVector:(CGVector)arg1 ;
+(CGVector)normalizeVector:(CGVector)arg1 ;
+(double)angleOfVector:(CGVector)arg1 ;
+(CGRect)rectForSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
+(CGPoint)snapVector:(CGPoint)arg1 toDiagonalForAspectRatio:(double)arg2 ignoreWidth:(char)arg3 ignoreHeight:(char)arg4 ;
+(CGPoint)projectVector:(CGPoint)arg1 ontoAspectVector:(CGPoint)arg2 ;
+(id)verticesOfPolygonWithPointCount:(unsigned long long)arg1 inRect:(CGRect)arg2 rotation:(double)arg3 flippedVertically:(char)arg4 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withAnotherSegmentStartingAt:(CGPoint)arg3 ending:(CGPoint)arg4 ;
+(CGAffineTransform)ellipseToCenteredCircleTransform:(CGRect)arg1 ;
+(double)radiusOfCenteredCircleFor:(CGRect)arg1 ;
+(CGPoint)flipPointVertically:(CGPoint)arg1 inRect:(CGRect)arg2 ;
+(CGAffineTransform)centeredCircleToEllipseTransform:(CGRect)arg1 ;
+(CGRect)expandCGRect:(CGRect)arg1 toContainPoint:(CGPoint)arg2 ;
+(CGRect)effectiveDrawingBoundsForAnnotation:(id)arg1 forDisplay:(char)arg2 pageControllerOrNil:(id)arg3 ;
+(double)distanceBetweenPoints:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
+(CGPoint)snapVectorTo45Degrees:(CGPoint)arg1 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withRect:(CGRect)arg3 andRoundedCornerRadius:(double)arg4 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(char)arg5 ;
+(CGRect)renderingAlignedTextRectForRect:(CGRect)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(CGContextRef)arg3 usingAnnotation:(id)arg4 ;
+(CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(char)arg4 ;
+(CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(char)arg4 ;
+(CGRect)stableIntegralRectForRect:(CGRect)arg1 ;
+(CGRect)integralRect:(CGRect)arg1 withOptions:(unsigned long long)arg2 ;
+(CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(char)arg5 ;
+(void)_checkIntersectionOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCircleAt:(CGPoint)arg3 andRadius:(double)arg4 results:(id)arg5 ;
+(void)_collectIntersectionsOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCornerCirclesOfRoundedRect:(CGRect)arg3 withRadius:(double)arg4 results:(id)arg5 ;
+(CGPoint)_farthestPointFrom:(CGPoint)arg1 inArray:(id)arg2 ;
+(void)intersectCircleAtPoint:(CGPoint)arg1 withRadius:(double)arg2 withCircleAtPoint:(CGPoint)arg3 withRadius:(double)arg4 firstOutPoint:(CGPoint*)arg5 secondOutPoint:(CGPoint*)arg6 ;
+(CGAffineTransform)_rawAffineTransformForExifOrientation:(long long)arg1 ;
+(CGPoint)_alignedPointForPoint:(CGPoint)arg1 alignToContent:(char)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(CGRect)_alignedStableRectForRect:(CGRect)arg1 alignToContent:(char)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 ;
+(CGRect)_strokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 shouldAlignStrictlyToScreen:(char)arg3 alignToScreenUsingPageController:(id)arg4 orAlignToBitmapContext:(CGContextRef)arg5 usingAnnotation:(id)arg6 ;
+(CGRect)_rectForRect:(CGRect)arg1 alignToContent:(char)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef)arg4 usingAnnotation:(id)arg5 withAlignmentBlock:(/*^block*/id)arg6 ;
+(char)isUnpresentablePoint:(CGPoint)arg1 ;
+(double)scaleOfTransform:(CGAffineTransform)arg1 ;
+(char)isPoint:(CGPoint)arg1 onEllipse:(CGRect)arg2 ;
+(void)tangentPointsToEllipse:(CGRect)arg1 fromPoint:(CGPoint)arg2 firstOutPoint:(CGPoint*)arg3 secondOutPoint:(CGPoint*)arg4 ;
+(CGPoint)tangentOfEllipse:(CGRect)arg1 throughRayWithFirstPoint:(CGPoint)arg2 goingThrough:(CGPoint)arg3 ;
+(long long)exifOrientationWithConversionBlock:(/*^block*/id)arg1 ;
+(CGRect)convertScreenToModelOrientationForRect:(CGRect)arg1 withPageController:(id)arg2 ;
+(double)angleBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
+(CGPoint)pointAtAngle:(double)arg1 inCircleWithCenter:(CGPoint)arg2 andRadius:(double)arg3 ;
-(CGPoint)screenPixelAlignedPointForPoint:(CGPoint)arg1 ;
-(CGRect)screenPixelAlignedRectForRect:(CGRect)arg1 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(CGRect)contentAlignedRectForRect:(CGRect)arg1 ;
-(double)scaleFromScreenToModel;
-(CGRect)screenStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromModelToLayer:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
-(CGRect)adornmentLayerFrameForAnnotation:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromModelToLayer:(id)arg2 ;
-(CGRect)annotationLayerFrameForAnnotation:(id)arg1 ;
-(CGPoint)contentAlignedPointForPoint:(CGPoint)arg1 ;
-(CGRect)_smartAlignedRectForRect:(CGRect)arg1 ;
-(char)_shouldAlignToContent;
-(char)_shouldAlignToScreen;
-(id)_rootLayer;
@end
