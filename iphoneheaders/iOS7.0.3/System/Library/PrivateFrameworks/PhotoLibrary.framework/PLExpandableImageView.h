/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLExpandableView.h>

@class PLImageView, PLManagedAsset, NSString, PLVideoView;

@interface PLExpandableImageView : PLExpandableView {

	PLImageView* _imageView;
	int _imageID;
	CGSize _originalSize;
	float _originalWidth;
	float _originalAngle;
	CGPoint _anchorPoint;
	float _imageRotationAngle;
	float _pinchWidth;
	float _pinchAngle;
	float _pinchScale;
	CGRect _initialExpandingFrame;
	CGRect _originalBounds;
	float _currentAngle;
	CGSize _centerOffset;
	PLManagedAsset* _photo;
	struct {
		unsigned isRotating : 1;
		unsigned didTrack : 1;
		unsigned updateFrame : 1;
		unsigned didLayout : 1;
		unsigned alwaysDoLayout : 1;
		unsigned didComputeCenterOffset : 1;
		unsigned imageIsFullScreen : 1;
	}  _exImageFlags;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) PLVideoView * videoView; 
@property (nonatomic,readonly) BOOL showsPlaceholder; 
@property (assign,getter=isBorderAndAccessoriesVisible,nonatomic) BOOL borderAndAccessoriesVisible; 
@property (nonatomic,retain) PLManagedAsset * photo;                                                             //@synthesize photo=_photo - In the implementation block
+(float)imageBorderWidth;
-(id)videoView;
-(void)setVideoView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_contentView;
-(id)image;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(CGSize)imageSize;
-(id)imageView;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
-(id)photo;
-(void)stateDidChangeFrom:(int)arg1 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(float)continueTrackingPinch:(id)arg1 ;
-(float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3 ;
-(void)finishTransition;
-(float)_expansionFraction;
-(void)setBorderAndAccessoriesVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 withBorder:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 ;
-(void)_setOriginalSize:(CGSize)arg1 ;
-(float)_borderAlphaForExpansionFraction:(float)arg1 ;
-(void)_updatePinchWidthAndScaleWithLeftPoint:(CGPoint)arg1 rightPoint:(CGPoint)arg2 ;
-(void)_updateBorderAndAccessoriesAlpha;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(CGSize)_newSizeFromSize:(CGSize)arg1 ;
-(float)_expandedScale;
-(CGRect)_snappedExpandedFrame;
-(void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setTransformAndCenterForFrame:(CGRect)arg1 ;
-(BOOL)isBorderAndAccessoriesVisible;
-(void)setImage:(id)arg1 isFullscreen:(BOOL)arg2 ;
-(void)setPosterImage:(id)arg1 regionOfInterest:(CGRect)arg2 ;
-(BOOL)showsPlaceholder;
-(void)setShowsPlaceholder:(BOOL)arg1 withOpaqueState:(BOOL)arg2 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)isShadowEnabled;
-(void)setTextBadgeString:(id)arg1 ;
-(void)renderSnapshotInContext:(CGContextRef)arg1 ;
-(CGRect)frameOfImage;
-(float)imageRotationAngle;
-(BOOL)isBeingManipulated;
-(void)setPhoto:(id)arg1 ;
-(float)_currentScale;
@end
