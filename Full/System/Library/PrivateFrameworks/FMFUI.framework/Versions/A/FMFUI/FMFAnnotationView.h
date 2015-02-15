/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class CAShapeLayer, CALayer, NSColor, FMFClickView;

@interface FMFAnnotationView : MKAnnotationView {

	char _isRotating;
	char _wantsRotation;
	long long _annotationSize;
	CAShapeLayer* _shapeLayer;
	CAShapeLayer* _circleLayer;
	CAShapeLayer* _markerOval;
	CAShapeLayer* _markerCenter;
	CAShapeLayer* _tailLayer;
	CALayer* _centerImageLayer;
	double _futureRotationAmount;
	NSColor* _tintColor;
	FMFClickView* _hiddenClickView;

}

@property (assign) long long annotationSize;                    //@synthesize annotationSize=_annotationSize - In the implementation block
@property (retain) CAShapeLayer * shapeLayer;                   //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (retain) CAShapeLayer * circleLayer;                  //@synthesize circleLayer=_circleLayer - In the implementation block
@property (retain) CAShapeLayer * markerOval;                   //@synthesize markerOval=_markerOval - In the implementation block
@property (retain) CAShapeLayer * markerCenter;                 //@synthesize markerCenter=_markerCenter - In the implementation block
@property (retain) CAShapeLayer * tailLayer;                    //@synthesize tailLayer=_tailLayer - In the implementation block
@property (retain) CALayer * centerImageLayer;                  //@synthesize centerImageLayer=_centerImageLayer - In the implementation block
@property (assign) char isRotating;                             //@synthesize isRotating=_isRotating - In the implementation block
@property (assign) char wantsRotation;                          //@synthesize wantsRotation=_wantsRotation - In the implementation block
@property (assign) double futureRotationAmount;                 //@synthesize futureRotationAmount=_futureRotationAmount - In the implementation block
@property (copy) NSColor * tintColor;                           //@synthesize tintColor=_tintColor - In the implementation block
@property (retain) FMFClickView * hiddenClickView;              //@synthesize hiddenClickView=_hiddenClickView - In the implementation block
+(id)circlePath;
-(NSColor *)tintColor;
-(void)setTintColor:(NSColor *)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3 ;
-(void)openInMaps;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(id)smallBezierPath;
-(id)shadowOpacityForSize:(long long)arg1 ;
-(void)setMarkerOval:(CAShapeLayer *)arg1 ;
-(id)markerOvalPathSmall;
-(void)setMarkerCenter:(CAShapeLayer *)arg1 ;
-(id)markerCenterPathSmall;
-(void)setCenterImageLayer:(CALayer *)arg1 ;
-(CGRect)centerImageFrameForSize:(long long)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(id)smallCircle;
-(id)lineWidthForSize:(long long)arg1 ;
-(id)smallTail;
-(FMFClickView *)hiddenClickView;
-(void)setHiddenClickView:(FMFClickView *)arg1 ;
-(void)updateClickView;
-(id)superViewMapView;
-(long long)annotationSize;
-(CALayer *)centerImageLayer;
-(id)fallbackPersonImage;
-(id)clipImageToCircle:(id)arg1 ;
-(void)setAnnotationSize:(long long)arg1 ;
-(void)sizeAnnotationView;
-(id)markerOvalPath;
-(id)shutterCircle;
-(id)shutterLineWidthForSize:(long long)arg1 ;
-(id)largeBezierPath;
-(id)largeTail;
-(id)largeCircle;
-(id)markerCenterPath;
-(CGRect)hitRectForSize;
-(void)setPersonImage:(id)arg1 ;
-(void)setAnnotationSize:(double)arg1 animated:(char)arg2 ;
-(void)updateAnnotationShutter;
-(CAShapeLayer *)shapeLayer;
-(CAShapeLayer *)circleLayer;
-(CAShapeLayer *)markerOval;
-(CAShapeLayer *)markerCenter;
-(char)isRotating;
-(void)setIsRotating:(char)arg1 ;
-(char)wantsRotation;
-(void)setWantsRotation:(char)arg1 ;
-(double)futureRotationAmount;
-(void)setFutureRotationAmount:(double)arg1 ;
-(CAShapeLayer *)tailLayer;
-(void)setTailLayer:(CAShapeLayer *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)removeFromSuperview;
-(id)hitTest:(CGPoint)arg1 ;
-(double)animationDuration;
-(void)prepareForReuse;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end

