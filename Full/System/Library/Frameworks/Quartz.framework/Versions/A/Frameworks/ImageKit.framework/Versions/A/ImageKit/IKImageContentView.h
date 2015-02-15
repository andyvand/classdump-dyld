/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class CIImage, CIContext, NSDictionary, NSMutableArray, IKImageViewLayerQueue, NSMutableSet, NSTimer, CALayer, NSView, NSURL, CAKeyframeAnimation, IKImageView2, IKCenteringClipView, CIFilter;

@interface IKImageContentView : NSView {

	char _initialized;
	char _loadsImageSynchronously;
	CIImage* _ciImage;
	CIImage* _scaledCIImage;
	CIImage* _flattenedCIImage;
	CIImage* _thumbnailCIImage;
	CIImage* _drawingCIImage;
	CIContext* _flatteningContext;
	char _thumbnailNeedsToUpdateFilters;
	char _drawingCIImageNeedsToUpdate;
	CGImageRef _originalCGImage;
	CGImageRef _thumbnailCGImage;
	NSDictionary* _imageProperties;
	NSDictionary* _displayProperties;
	double _imageWidth;
	double _imageHeight;
	double _zoomedWidth;
	double _zoomedHeight;
	double _zoomFactor;
	double _startingScreenScaleFactor;
	char _stickyZoomToFit;
	char _isAnimatingZoom;
	char _isAnimating;
	double _minNearestNeighborScale;
	CGPoint _startingViewCenter;
	NSMutableArray* _blockCollection;
	NSMutableArray* _lastEnqueuedBlockCollection;
	IKImageViewLayerQueue* _layerRenderingQueue;
	NSMutableSet* _cgContextsUsed;
	NSTimer* _blockCleanupTimer;
	char _canInvalidateBlockCleanupTimer;
	CGRect _lastUpdatedBounds;
	CGRect _loadedRect;
	CALayer* _backgroundThumbnailLayer;
	CALayer* _backgroundThumbnailMask;
	NSView* _contentView;
	CALayer* _oldbgThumbnailLayer;
	CALayer* _contentViewContainerLayer;
	CALayer* _incomingContentViewContainerLayer;
	CALayer* _combinedCurrentTilesAndBGLayer;
	CALayer* _animationLayer;
	CALayer* _flipLayer;
	NSView* _annotationsView;
	CALayer* _annotationsLayer;
	char _inMagnifyGesture;
	NSTimer* _zoomTimer;
	char _completedInitialImageLoading;
	long long _exifOrientation;
	double _rotationAngle;
	char _canAnimateImage;
	NSURL* _imgURL;
	CAKeyframeAnimation* _gifAnimation;
	IKImageView2* _imageView;
	IKCenteringClipView* _clipView;
	CIFilter* _softProofFilter;
	char _usesTiles;
	char _scrollingLoadsTiles;
	unsigned long long _imageIndex;

}

@property (assign) double zoomFactor;                          //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign) char stickyZoomToFit; 
@property (assign) double rotationAngle; 
@property (assign) char loadsSynchronously;                    //@synthesize loadsImageSynchronously=_loadsImageSynchronously - In the implementation block
@property (assign) char usesTiles; 
@property (readonly) NSView * annotationsView; 
@property (readonly) CALayer * annotationsLayer; 
@property (assign) char scrollingLoadsTiles;                   //@synthesize scrollingLoadsTiles=_scrollingLoadsTiles - In the implementation block
@property (assign) unsigned long long imageIndex;              //@synthesize imageIndex=_imageIndex - In the implementation block
+(double)rotationDegreeForExif:(long long)arg1 ;
+(int)_flipTypeForExif:(long long)arg1 ;
+(char)isCompatibleWithResponsiveScrolling;
-(void)commonInit;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)teardown;
-(void)setScrollingLoadsTiles:(char)arg1 ;
-(CGPoint)convertPointToImage:(CGPoint)arg1 ;
-(void)zoomImageToScale:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(void)_redrawExistingBlocks;
-(void)clearBlocksFromBlockCollection:(id)arg1 didCancelDisplay:(char*)arg2 ;
-(void)loadVisibleRect;
-(void)imageViewResized:(id)arg1 ;
-(void)scrollWillStartMagnify:(id)arg1 ;
-(void)scrollDidEndMagnify:(id)arg1 ;
-(double)zoomToFitScaleFactor;
-(char)stickyZoomToFit;
-(void)_setEnclosingScrollViewScrollersCanShow:(char)arg1 ;
-(void)viewDidScroll:(id)arg1 ;
-(void)setSoftProofFilter:(id)arg1 ;
-(void)setImageIndex:(unsigned long long)arg1 ;
-(CGImageRef)_newThumbnailFromUrl:(id)arg1 index:(long long)arg2 withDisplayProperties:(id)arg3 outScale:(double*)arg4 ;
-(double)_initialUnderlyingImageScaleWithImageProperties:(id)arg1 andDisplayProperties:(id)arg2 ;
-(CGImageRef)_newCGImageAtScale:(double)arg1 fromImgSrc:(CGImageSourceRef)arg2 atIndex:(long long)arg3 ;
-(char)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(char)_setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(void)_doFastPathUpdate;
-(void)_clearBackgroundLayer;
-(void)_loadBackgroundThumbnail;
-(void)_setUnderlyingCIImage:(id)arg1 ;
-(void)_resetLayersAndReloadLayersWithImageProperties:(id)arg1 displayProperties:(id)arg2 ;
-(void)_scheduleDeferredCleanupOfUnseenBlocks;
-(void)_resetScaledCIImage;
-(CGPoint)convertPointFromImage:(CGPoint)arg1 ;
-(CALayer *)annotationsLayer;
-(void)_updateAnnotationsView;
-(CGRect)visibleScaledImageRect;
-(void)_clearImageBlocks:(id)arg1 fromCollection:(id)arg2 ;
-(char)usesTiles;
-(void)applyExif:(id)arg1 ;
-(void)setStickyZoomToFit:(char)arg1 ;
-(void)_rotateContent:(double)arg1 aroundPoint:(CGPoint)arg2 ;
-(void)_flipImageDirection:(int)arg1 ;
-(void)_cancelLoadBlocks;
-(char)_hasBeenTornDown;
-(void)_zoomToFit;
-(void)clearUnseenImageBlocks;
-(void)_clearUnseenImageBlocksTimerFired:(id)arg1 ;
-(void)clearFlattenedCIImage;
-(char)scrollingLoadsTiles;
-(void)loadBlocksInScaledSourceRect:(CGRect)arg1 ;
-(void)_cleanUpZoomTimer;
-(CGRect)visibleScaledImageRectForZoomFactor:(double)arg1 ;
-(void)_setZoomFactor:(double)arg1 loadInRect:(CGRect)arg2 ;
-(double)zoomFactorWithScreenScale;
-(double)_scaleFactorForResettingScaledCIImage;
-(id)newFlattenedImageForImage:(id)arg1 ;
-(void)setupFlattenedCIImage;
-(void)_updateUnderlyingCIImageToFullSizeIfNecessaryForScale:(double)arg1 ;
-(void)loadBlocksInScaledSourceRect:(CGRect)arg1 usingBlockCollection:(id)arg2 ;
-(CGRect)viewRectToScaledImageRect:(CGRect)arg1 withZoomFactor:(double)arg2 ;
-(char)_replacingOldThumbnail;
-(CGRect)_rectToLoadForZoomFactor:(double)arg1 withViewCenterPoint:(CGPoint)arg2 ;
-(double)_zoomToFitScaleFactorForImageWithSize:(CGSize)arg1 ;
-(CGPoint)_scrollPointAfterChangingSizeTo:(CGSize)arg1 ;
-(void)_installAnimationLayer;
-(void)setAnchorPointWithoutShift:(CGPoint)arg1 forLayer:(id)arg2 ;
-(void)_uninstallAnimationLayer;
-(CGPoint)_positionAfterZoomAnimationWithScale:(double)arg1 andCenter:(CGPoint)arg2 ;
-(void)pausedInZoomGesture:(id)arg1 ;
-(id)softProofFilter;
-(void)_flipImageDirectionWithAnimation:(int)arg1 ;
-(char)_flipShouldHappenOnOppositeOfRequestedAxis;
-(CGPoint)_rotatedPoint:(CGPoint)arg1 byDegrees:(double)arg2 ;
-(CGSize)_sizeOfRotatedRectOriginal:(CGSize)arg1 byDegrees:(double)arg2 ;
-(void)_shiftContentViewToViewCenter;
-(void)setRotationAngle:(double)arg1 centeredAroundImagePoint:(CGPoint)arg2 ;
-(CGRect)rectVisibleInClipView;
-(CGRect)rectInThisViewForBlock:(id)arg1 ;
-(CGRect)_zoomedImageRectForViewRect:(CGRect)arg1 ;
-(id)_newThumbnailMaskWithBlockWidth:(double)arg1 blockHeight:(double)arg2 ;
-(CGRect)_extendRect:(CGRect)arg1 byRect:(CGRect)arg2 ;
-(void)loadingCompleteForRect:(CGRect)arg1 withBlockCollection:(id)arg2 andThumbnailMask:(id)arg3 ;
-(CGImageRef)_newScaledCGImageFromCGImage:(CGImageRef)arg1 atScale:(double)arg2 rotation:(double)arg3 flipped:(int)arg4 ;
-(void)_backgroundDidFinishLoading;
-(CGRect)convertRectToUpperLeftOrigin:(CGRect)arg1 inBoundingRect:(CGRect)arg2 ;
-(void)finishedDrawingLayer:(id)arg1 ;
-(double)_underlyingCIImageScale;
-(void)_updateUnderlyingCIImageWithScale:(double)arg1 ;
-(unsigned long long)imageIndex;
-(id)initWithFrame:(CGRect)arg1 andImageView:(id)arg2 ;
-(id)borrowContent;
-(void)returnBorrowedContent;
-(void)finishMovingViewToScrollView;
-(char)setImageURL:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(void)setFlattenedDrawingCIImage:(id)arg1 ;
-(NSView *)annotationsView;
-(void)insertOverlayView:(id)arg1 ;
-(CGSize)_imageSizeWithExif:(unsigned long long)arg1 ;
-(id)flattenedUnfilteredCIImage;
-(void)setMinNearestNeighborScale:(double)arg1 ;
-(void)zoomToFullSize;
-(void)setZoomFactor:(double)arg1 centeredAtImagePoint:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(char)isAnimatingTransform;
-(double)defaultTransformAnimationDuration;
-(void)flipImageHorizontal;
-(void)flipImageVertical;
-(void)setRotationAngleWithAnimation:(double)arg1 aroundImagePoint:(CGPoint)arg2 duration:(double)arg3 ;
-(void)setUsesTiles:(char)arg1 ;
-(CGImageRef)newVisibleImageSnapshot;
-(CGSize)imageSizeWithoutRotations;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(CGRect)convertRectFromImage:(CGRect)arg1 ;
-(char)loadsSynchronously;
-(void)setLoadsSynchronously:(char)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeFromSuperview;
-(void)viewDidMoveToWindow;
-(void)viewDidMoveToSuperview;
-(CGSize)imageSize;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)windowDidChangeBackingProperties:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(void)viewDidEndLiveResize;
-(void)_setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
@end
