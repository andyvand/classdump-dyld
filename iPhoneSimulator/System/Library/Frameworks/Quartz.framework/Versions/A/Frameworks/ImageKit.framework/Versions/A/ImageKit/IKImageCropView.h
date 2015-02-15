/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKImageWrapper, IKImageCropPRS, NSColor, NSProgressIndicator, NSImage, IKImageCropViewEffect, IKImageCropViewSlider, NSButton, NSString, NSAttributedString, CIContext, NSMutableArray, IKSFCropElement, CIImage, QCRenderer, NSUndoManager, NSTimer, IKMipmapImage;

@interface IKImageCropView : NSView {

	IKImageWrapper* _originalImage;
	IKImageCropPRS* _cropPRS;
	CGSize _sourceSize;
	float _zoomValue;
	float _cropFrameZoomValue;
	float _zoomFactorMinResolution;
	float _zoomFactorMaxResolution;
	id _delegate;
	NSColor* _backgroundColor;
	NSColor* _cropBackgroundColor;
	NSColor* _dimmedLayerColor;
	NSColor* _alphaFrameColor;
	NSColor* _borderColor;
	CGSize _cropSize;
	int _cropZoneBehavior;
	char _allowEdit;
	int _constraintMode;
	char _allowRotations;
	char _showZoomSlider;
	char _showZoomMinMax;
	char _showValidateButton;
	char _acceptsDrop;
	int _borderType;
	NSProgressIndicator* _progressIndicator;
	char _defaultCropIsZoomToFit;
	char _useOverlayMask;
	NSImage* _overlayMaskImage;
	CGPoint _dragOrigin;
	IKImageCropPRS* _dragInitialCropPRS;
	float _dragOriginRotation;
	CGPoint _dragOriginGizmoPosition;
	float _dragCurrentRotation;
	float _dragLastRotation;
	char _inImageDrag;
	int _clockwiseRotation;
	IKImageCropViewEffect* _draggedGizmo;
	char _mouseInside;
	long long _trackingRect;
	char _keepFocusMode;
	CGPoint _focus;
	char _focusValid;
	char _nicestDrawingMode;
	char _nicestDrawPosted;
	IKImageCropViewSlider* _zoomSlider;
	NSButton* _zoomMinButton;
	NSButton* _zoomMaxButton;
	char _centeredVerticalAlignment;
	NSString* _informationalString;
	NSAttributedString* _informationalAttributedString;
	char _datasourceStable;
	char _preloadThreadLaunched;
	CIContext* _context;
	NSMutableArray* _ciEffects;
	IKSFCropElement* _imageAffineTransform;
	IKSFCropElement* _imageAffineRotation;
	IKSFCropElement* _viewAffineTransform;
	IKSFCropElement* _cameraElement;
	char _inCameraMode;
	CIImage* _lastRenderedCIImage;
	IKImageCropViewEffect* _qcEffect;
	CGSize _offscreeQCCacheSize;
	CGContextRef _offscreenCGContext;
	QCRenderer* _offscreenQCRenderer;
	IKImageWrapper* _qcBuffer;
	NSUndoManager* _undoManager;
	NSTimer* _animatedGifsTimer;
	int _currentAnimatedImageFrame;
	int _onAnimatedImageTimerCount;
	char _animates;
	char _isDirty;
	IKMipmapImage* _mipmap;
	CGImageRef _ciInputCache;
	char _drawContent;
	char _usesCircularCrop;

}
+(id)imageFromContext:(CGContextRef)arg1 withComposition:(id)arg2 fxCenter:(CGPoint)arg3 qcRenderer:(id)arg4 ;
+(CGRect)cropRegionBoundingRectForCropSize:(CGSize)arg1 cropPRS:(id)arg2 originalImageSize:(CGSize)arg3 ;
+(id)cropPRSFromCropRegion:(CGRect)arg1 cropSize:(CGSize)arg2 originalImageSize:(CGSize)arg3 ;
+(id)croppedImageFromOriginalImage:(id)arg1 cropInfo:(id)arg2 cropSize:(CGSize)arg3 outputSize:(CGSize)arg4 bgColor:(id)arg5 ;
-(void)drawImage:(CGRect)arg1 ;
-(char)acceptsDrop;
-(void)setZoomValue:(float)arg1 ;
-(float)zoomValue;
-(void)cropElementDidLiveUpdate:(id)arg1 ;
-(void)updateComponentState;
-(void)resizeComponents;
-(CGSize)sourceSize;
-(CGRect)boundingRectOfOrientedRect:(CGRect)arg1 rotation:(float)arg2 pivot:(CGPoint)arg3 ;
-(CGSize)_originalImageBoundingBoxSizeIncludingRotation;
-(float)zoomValueRelativeToZoomRange;
-(CGRect)imageBoundingRect;
-(CGRect)cropRect;
-(CGSize)cropSize;
-(void)setAllowEdit:(char)arg1 ;
-(char)allowEdit;
-(void)setConstrainMode:(int)arg1 ;
-(int)constrainMode;
-(char)keepFocusMode;
-(void)setKeepFocusMode:(char)arg1 ;
-(char)allowRotations;
-(void)setAllowRotations:(char)arg1 ;
-(char)showZoomSlider;
-(void)setShowZoomSlider:(char)arg1 ;
-(char)showZoomMinMax;
-(void)setShowZoomMinMax:(char)arg1 ;
-(void)setAcceptsDrop:(char)arg1 ;
-(char)showValidateButton;
-(void)setShowValidateButton:(char)arg1 ;
-(char)showLoadingIndicator;
-(void)setShowLoadingIndicator:(char)arg1 ;
-(CGSize)noHolesZoomRange;
-(CGSize)keepAtLeastOnePixelZoomRange;
-(void)checkZoomBoundaries;
-(void)checkBoundaries;
-(char)currentImageIsAnimated;
-(char)usesCircularCrop;
-(void)keepLastRenderedCIImage:(id)arg1 ;
-(id)qcComposition;
-(char)hasEffect;
-(CGRect)roundedImageRectWithoutRotations;
-(void)renderImageWithCIPipeline:(id)arg1 inRect:(CGRect)arg2 ;
-(CGRect)roundSubRect:(CGRect)arg1 ;
-(CGContextRef)initQCContextWithSize:(CGSize)arg1 ;
-(float)rotationGizmoRadius;
-(float)snapRotation:(float)arg1 ;
-(id)cropPRS;
-(id)effects;
-(void)drawRotationGizmo;
-(void)drawEffectGizmo;
-(CGRect)cropRectWithoutZoom;
-(void)postNicestDraw;
-(void)_nicestDraw;
-(void)_prepareNicestDraw:(id)arg1 ;
-(void)_postNicestDraw;
-(void)drawBack:(CGRect)arg1 ;
-(void)drawAlphaFrame:(CGRect)arg1 ;
-(char)needPostNicestDraw;
-(void)drawGizmo;
-(void)drawBorder:(CGRect)arg1 ;
-(CGRect)gizmoBoundingBoxForRadius:(float)arg1 ;
-(char)drawContent;
-(void)setDrawContent:(char)arg1 ;
-(void)drawInCell:(id)arg1 withRect:(CGRect)arg2 inLiveResize:(char)arg3 ;
-(void)setQCComposition:(id)arg1 ;
-(void)_prepareEffectsUndo:(id)arg1 ;
-(void)_unlinkCIEffect:(id)arg1 ;
-(void)reloadContext;
-(id)addEffectWithName:(id)arg1 type:(id)arg2 position:(CGPoint)arg3 ;
-(void)removeEffect:(id)arg1 ;
-(void)removeAllEffects;
-(id)resourceImageNamed:(id)arg1 ;
-(void)invalidateFocusPoint;
-(void)updateFocusPoint;
-(float)rotationForEvent:(id)arg1 ;
-(id)gizmoHitTest:(CGPoint)arg1 ;
-(void)_prepareGizmoPositionUndo:(CGPoint)arg1 ;
-(void)_prepareCropPRSUndo:(id)arg1 ;
-(void)editedImageDidChanged;
-(void)_mouseDragged:(id)arg1 ;
-(char)isLiveCapturing;
-(float)yTranslation;
-(CGRect)imageRectWithoutRotations;
-(CGPoint)convertScreenPositionToPRSPosition:(CGPoint)arg1 ;
-(void)privateSliderDidChanged:(id)arg1 ;
-(void)zoomMinCallback:(id)arg1 ;
-(void)zoomMaxCallback:(id)arg1 ;
-(void)initComponent;
-(void)onResize:(id)arg1 ;
-(void)setCropSize:(CGSize)arg1 ;
-(void)stopCapture;
-(void)preload;
-(void)onAnimatedImageTimer;
-(void)setCropPRS:(id)arg1 ;
-(float)zoomValueRelativeToZoomRange:(float)arg1 ;
-(void)preloadThread;
-(void)_undoableSetGizmoPositionWithDisplay:(CGPoint)arg1 ;
-(void)_undoableSetEffectsWithDisplay:(id)arg1 ;
-(void)_undoableSetCropPRSWithDisplay:(id)arg1 ;
-(void)setInformationalAttributedString:(id)arg1 ;
-(id)croppedImageWithSize:(CGSize)arg1 ;
-(id)cropInfo;
-(void)_resetTrackingRect;
-(CGSize)zoomRange;
-(int)cropZoneBehavior;
-(void)setCropZoneBehavior:(int)arg1 ;
-(id)cropBackgroundColor;
-(void)setCropBackgroundColor:(id)arg1 ;
-(id)dimmedLayerColor;
-(void)setDimmedLayerColor:(id)arg1 ;
-(id)alphaFrameColor;
-(void)setAlphaFrameColor:(id)arg1 ;
-(CGSize)originalCropSize;
-(char)centeredVerticalAlignment;
-(void)setCenteredVerticalAlignment:(char)arg1 ;
-(id)informationalString;
-(void)setInformationalString:(id)arg1 ;
-(id)informationalAttributedString;
-(char)defaultCropIsZoomToFit;
-(void)setDefaultCropIsZoomToFit:(char)arg1 ;
-(void)setUseOverlayMask:(char)arg1 ;
-(void)setUsesCircularCrop:(char)arg1 ;
-(CGRect)imageCroppedRect;
-(id)croppedImage;
-(char)inputImageIsModified;
-(id)originalImage;
-(id)cropParameters;
-(void)grabCapture;
-(void)startCapture;
-(void)grabFocusIfNeeded;
-(void)setCropInfo:(id)arg1 ;
-(void)_setZoomValueWithDisplay:(float)arg1 ;
-(void)_setZoomValue:(float)arg1 ;
-(void)onSliderMouseDown:(id)arg1 event:(id)arg2 ;
-(void)onSliderMouseUp:(id)arg1 event:(id)arg2 ;
-(void)limitZoomToMinFactor:(float)arg1 maxFactor:(float)arg2 ;
-(void)zoomMin:(float*)arg1 andMax:(float*)arg2 ;
-(float)scaleValue;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(char)isDirty;
-(id)context;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)delegate;
-(id)borderColor;
-(void)setFrameSize:(CGSize)arg1 ;
-(int)borderType;
-(void)setBorderColor:(id)arg1 ;
-(void)setBorderType:(int)arg1 ;
-(id)backgroundColor;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(CGRect)_opaqueRect;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)undoManager;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(void)windowDidMiniaturize:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(void)setRotation:(float)arg1 ;
@end

