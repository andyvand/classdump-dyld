/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSScrollView, IKImageContentView, NSTimer, IKImageBackgroundLayer, CALayer, NSView, NSColor;

@interface IKImageView2 : NSView {

	NSScrollView* _scrollView;
	char _restrainsMinZoomToViewSize;
	char _hasImage;
	IKImageContentView* _documentViewInLoading;
	NSTimer* _loadWaitTimer;
	char _backgroundLoaded;
	char _tilesLoaded;
	char _allowsLoadToWaitForFullResolution;
	char _loadWaitTimePassed;
	IKImageBackgroundLayer* _checkerboardLayer;
	CALayer* _backgroundColorLayer;
	double _lastCompletedRotationAngle;
	NSView* _contentOverlayView;

}

@property (assign) char restrainsMinZoomToViewSize;                      //@synthesize restrainsMinZoomToViewSize=_restrainsMinZoomToViewSize - In the implementation block
@property (assign) double zoomFactor; 
@property (assign) NSColor * backgroundColor; 
@property (assign) double rotationAngle; 
@property (readonly) NSScrollView * scrollView;                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign) char stickyZoomToFit; 
@property (assign) double minZoomFactor; 
@property (assign) double maxZoomFactor; 
@property (assign) char loadsSynchronously; 
@property (assign) char allowsLoadToWaitForFullResolution; 
@property (readonly) NSView * contentOverlayView; 
@property (readonly) IKImageContentView * imageContentView; 
+(double)rotationDegreeForEXIFOrientation:(long long)arg1 ;
+(id)keyPathsForValuesAffectingImageRectInView;
+(id)keyPathsForValuesAffectingZoomFactor;
-(void)commonInit;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)rotateImageLeft:(id)arg1 ;
-(void)rotateImageRight:(id)arg1 ;
-(void)flipImageHorizontal:(id)arg1 ;
-(void)flipImageVertical:(id)arg1 ;
-(CGRect)imageRect;
-(id)applyFiltersToImage:(id)arg1 ;
-(CGPoint)convertPointToImage:(CGPoint)arg1 ;
-(void)zoomImageToScale:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(char)restrainsMinZoomToViewSize;
-(char)stickyZoomToFit;
-(void)setSoftProofFilter:(id)arg1 ;
-(char)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(CGPoint)convertPointFromImage:(CGPoint)arg1 ;
-(id)annotationsLayer;
-(char)usesTiles;
-(void)setStickyZoomToFit:(char)arg1 ;
-(double)minZoomFactor;
-(double)maxZoomFactor;
-(void)setupForZoomAnimationCenteredAroundImagePoint:(CGPoint)arg1 ;
-(void)applyZoomAnimationFrom:(double)arg1 to:(double)arg2 ;
-(void)willCompleteZoomAnimation;
-(void)didCompleteZoomAnimation;
-(id)softProofFilter;
-(void)willCompleteFlipAnimation;
-(void)didCompleteFlipAnimation;
-(void)applyFlipAnimation:(int)arg1 ;
-(void)contentRotatingBy:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(void)setupForRotationAnimationCenteredAroundImagePoint:(CGPoint)arg1 ;
-(void)willCompleteRotationAnimation;
-(void)didCompleteRotationAnimation;
-(void)applyRotationAnimationCenteredAroundImagePoint:(CGPoint)arg1 andRotationAngle:(double)arg2 ;
-(void)setRotationAngle:(double)arg1 centeredAroundImagePoint:(CGPoint)arg2 ;
-(CGRect)_insetContentBounds;
-(id)borrowContent;
-(void)returnBorrowedContent;
-(char)setImageURL:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(id)annotationsView;
-(id)flattenedUnfilteredCIImage;
-(void)setMinNearestNeighborScale:(double)arg1 ;
-(void)zoomToFullSize;
-(void)setZoomFactor:(double)arg1 centeredAtImagePoint:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(char)isAnimatingTransform;
-(double)defaultTransformAnimationDuration;
-(void)setRotationAngleWithAnimation:(double)arg1 aroundImagePoint:(CGPoint)arg2 duration:(double)arg3 ;
-(void)setUsesTiles:(char)arg1 ;
-(CGImageRef)newVisibleImageSnapshot;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(CGRect)convertRectFromImage:(CGRect)arg1 ;
-(char)loadsSynchronously;
-(void)setLoadsSynchronously:(char)arg1 ;
-(void)setAllowsGestureElasticity:(char)arg1 ;
-(void)scrollviewFrameChanged:(id)arg1 ;
-(void)setRestrainsMinZoomToViewSize:(char)arg1 ;
-(id)layeredImageDocumentView;
-(void)cancelAndDisposeOfDocumentViewInLoading;
-(id)magnificationInflectionPoints;
-(char)showsCheckerboardBackground;
-(void)_constrainCheckerboardMaskBounds;
-(void)_forceConstrainCheckerboardMaskBounds;
-(CGSize)_imageSizeWithoutRotations;
-(void)redrawVisibleRect;
-(IKImageContentView *)imageContentView;
-(void)contentViewLoadedThumbnail:(id)arg1 ;
-(void)contentViewLoadedTiles:(id)arg1 ;
-(void)loadWaitTimerFired:(id)arg1 ;
-(void)_reinsertContentOverlayView;
-(void)_replaceDocumentView;
-(void)_setupDocumentViewForLoading;
-(CGPoint)_convertDocumentPointToImage:(CGPoint)arg1 ;
-(void)clipviewBoundsChanged:(id)arg1 ;
-(CGRect)imageRectInView;
-(void)redrawTiles;
-(NSView *)contentOverlayView;
-(char)allowsLoadToWaitForFullResolution;
-(void)setAllowsLoadToWaitForFullResolution:(char)arg1 ;
-(void)updateUnderlyingCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 usingFlattenedImage:(char)arg4 ;
-(char)setImageURL:(id)arg1 withDisplayProperties:(id)arg2 ;
-(void)setMinZoomFactor:(double)arg1 ;
-(void)setMaxZoomFactor:(double)arg1 ;
-(void)zoomToFitSticky:(char)arg1 ;
-(void)setZoomFactor:(double)arg1 withCenter:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(void)setShowsCheckerboardBackground:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(CGSize)imageSize;
-(void)awakeFromNib;
-(NSScrollView *)scrollView;
-(void)setAnimates:(char)arg1 ;
-(id)magnificationInflectionPointsForScrollView:(id)arg1 ;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
@end

