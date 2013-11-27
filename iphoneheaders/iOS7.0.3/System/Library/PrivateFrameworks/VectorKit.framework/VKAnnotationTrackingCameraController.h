/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;
@class , VKAnimation;

@interface VKAnnotationTrackingCameraController : VKCameraController {

	<VKTrackableAnnotation>* _annotation;
	<VKTrackableAnnotationPresentation>* _annotationPresentation;
	VKAnimation* _currentAnimation;
	VKPoint _currentAnimationStartPoint;
	VKPoint _currentAnimationStartCameraPosition;
	VKPoint _currentAnimationEndPoint;
	VKPoint _currentAnimationEndCameraPosition;
	double _pendingChangeDuration;
	VKAnimation* _currentHeadingAnimation;
	double _pendingHeadingChangeDuration;
	float _headingAnimationCompletedAngle;
	VKEdgeInsets _edgeInsets;
	int _annotationMarkersAnimatingInCount;
	int _zoomStyle;
	struct {
		unsigned hasPendingChange : 1;
		unsigned paused : 1;
		unsigned trackingHeading : 1;
		unsigned hasPendingHeadingChange : 1;
		unsigned isInitialRegionChange : 1;
		unsigned annotationImplementsAccuracy : 1;
		unsigned annotationImplementsHeading : 1;
		unsigned annotationImplementsExpectedCoordinateUpdateInterval : 1;
		unsigned annotationImplementsExpectedHeadingUpdateInterval : 1;
	}  _flags;

}

@property (assign,nonatomic) VKEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) int zoomStyle;                                                //@synthesize zoomStyle=_zoomStyle - In the implementation block
@property (nonatomic,readonly) <VKTrackableAnnotation> * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
-(void)dealloc;
-(VKEdgeInsets)edgeInsets;
-(BOOL)isAnimating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(id)annotation;
-(void)setGesturing:(BOOL)arg1 ;
-(BOOL)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)willAnimateInAnnotationMarkers:(id)arg1 ;
-(void)didAnimateInAnnotationMarkers:(id)arg1 ;
-(void)setZoomStyle:(int)arg1 ;
-(void)resumeAnimation;
-(void)pauseAnimation;
-(void)updateFramerate;
-(double)_minTrackingCameraDistance;
-(double)_zoomLevelForCameraPosition:(VKPoint)arg1 ;
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(int)zoomStyle;
@end
