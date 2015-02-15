/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, CIFilter, NSColor;

@interface IKImageView : NSView {

	void* _privateData;

}

@property (assign) id delegate; 
@property (assign) double zoomFactor; 
@property (assign) double rotationAngle; 
@property (copy) NSString * currentToolMode; 
@property (assign) char autoresizes; 
@property (assign) char hasHorizontalScroller; 
@property (assign) char hasVerticalScroller; 
@property (assign) char autohidesScrollers; 
@property (assign) char supportsDragAndDrop; 
@property (assign) char editable; 
@property (assign) char doubleClickOpensImageEditPanel; 
@property (assign) CIFilter * imageCorrection; 
@property (assign) NSColor * backgroundColor; 
+(CGImageRef)imageFromURL:(id)arg1 imageState:(id)arg2 options:(id)arg3 ;
+(CGImageRef)imageFromCGImage:(CGImageRef)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4 ;
+(void)initialize;
-(void)commonInit;
-(void)zoomOut:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(id)imageURL;
-(void)_willInitWithCoder;
-(void)setSelectionRect:(CGRect)arg1 ;
-(id)imageProperties;
-(id)filterArray;
-(void)setFilterArray:(id)arg1 ;
-(id)filter:(id)arg1 valueForKey:(id)arg2 ;
-(void)filter:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)crop:(id)arg1 ;
-(void)selectionRectRemoved;
-(void)selectionRectAdded;
-(CGImageRef)createThumbnailWithMaximumSize:(CGSize)arg1 ;
-(void)filterAdded:(id)arg1 filterChain:(id)arg2 ;
-(void)filterRemoved:(id)arg1 filterChain:(id)arg2 ;
-(void)filterChainChanged:(id)arg1 ;
-(int)annotationType;
-(void)setAnnotationType:(int)arg1 ;
-(char)registerLayer:(id)arg1 ;
-(id)composer;
-(void)addLayer:(id)arg1 linkedTo:(id)arg2 ;
-(id)imageLayer;
-(id)layerOfType:(id)arg1 ;
-(void)removeLayer:(id)arg1 ;
-(void)setImageWithURL:(id)arg1 ;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 ;
-(void)rotateImageLeft:(id)arg1 ;
-(void)rotateImageRight:(id)arg1 ;
-(char)autoresizes;
-(void)autoResizeToRect:(CGRect)arg1 ;
-(void)setRotationAngle:(double)arg1 centerPoint:(CGPoint)arg2 ;
-(void)flipImageHorizontal:(id)arg1 ;
-(void)flipImageVertical:(id)arg1 ;
-(void)setImageWithURL:(id)arg1 imageState:(id)arg2 options:(id)arg3 ;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4 ;
-(void)zoomImageToFit:(id)arg1 ;
-(void)zoomImageToRect:(CGRect)arg1 ;
-(void)setImageZoomFactor:(double)arg1 centerPoint:(CGPoint)arg2 ;
-(void)centerImage;
-(void)scrollToRect:(CGRect)arg1 ;
-(CGRect)selectionRect;
-(id)backgroundLayer;
-(char)editable;
-(char)embedded;
-(void)setEmbedded:(char)arg1 ;
-(void)setAutoresizes:(char)arg1 ;
-(char)supportsDragAndDrop;
-(void)setSupportsDragAndDrop:(char)arg1 ;
-(void)ibSetSampleURL;
-(void)_didInitWithCoder:(id)arg1 ;
-(void)setCurrentToolMode:(NSString *)arg1 ;
-(void)setDoubleClickOpensImageEditPanel:(char)arg1 ;
-(NSString *)currentToolMode;
-(char)doubleClickOpensImageEditPanel;
-(void)dumpLayer:(id)arg1 prefix:(id)arg2 verbose:(char)arg3 ;
-(void)dumpLayer:(id)arg1 prefix:(id)arg2 ;
-(void)handleViewDidMoveToSuperView;
-(void)invalidateCursorRects;
-(void)preZoom;
-(void)turnoffAutoresizes;
-(void)postZoom;
-(CGPoint)convertViewPointToImagePoint:(CGPoint)arg1 ;
-(CGRect)convertViewRectToImageRect:(CGRect)arg1 ;
-(CGPoint)convertImagePointToViewPoint:(CGPoint)arg1 ;
-(CGRect)convertImageRectToViewRect:(CGRect)arg1 ;
-(void)updateBackgroundColor;
-(void)setOverlay:(id)arg1 forType:(id)arg2 ;
-(id)overlayForType:(id)arg1 ;
-(void)_didInitWithCoder;
-(void)debugLayerTree:(id)arg1 ;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(void)setValueURL:(id)arg1 ;
-(id)valueURL;
-(void)zoomImageToActualSize:(id)arg1 ;
-(CIFilter *)imageCorrection;
-(void)setImageCorrection:(CIFilter *)arg1 ;
-(void)imageState:(id*)arg1 image:(CGImage*)arg2 options:(id)arg3 ;
-(void)connectToBackgroundLayer;
-(void)updateImageEditPanelIfNeeded;
-(CGImageRef)imageWithOptions:(id)arg1 ;
-(void)setImageWithCGImageSource:(CGImageSourceRef)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(void)setImageWithData:(id)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(void)setImageWithURL:(id)arg1 imageState:(id)arg2 ;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 imageState:(id)arg3 ;
-(void)setImageWithCGImageSource:(CGImageSourceRef)arg1 ;
-(void)setImageWithData:(id)arg1 ;
-(void)setNSImage:(id)arg1 imageProperties:(id)arg2 ;
-(void)setCIImage:(id)arg1 imageProperties:(id)arg2 ;
-(CGImageRef)createThumbnailOfSize:(unsigned long long)arg1 ;
-(void)writeImageAtIndex:(unsigned long long)arg1 toFile:(id)arg2 options:(id)arg3 ;
-(void)setReuseImageLayer:(char)arg1 ;
-(id)filterChain;
-(void)setFilterChain:(id)arg1 ;
-(void)selectionRectDidChange:(CGRect)arg1 ;
-(void)closeInspector:(id)arg1 ;
-(void)saveScrollInfo:(CGSize)arg1 scaling:(CGPoint)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGImageRef)image;
-(void)setImage:(id)arg1 ;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setNeedsDisplay:(char)arg1 ;
-(id)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(char)isFlipped;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)setEditable:(char)arg1 ;
-(char)isOpaque;
-(NSColor *)backgroundColor;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(char)hasHorizontalScroller;
-(void)setHasHorizontalScroller:(char)arg1 ;
-(void)setAutohidesScrollers:(char)arg1 ;
-(char)autohidesScrollers;
-(void)setHasVerticalScroller:(char)arg1 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(id)enclosingScrollView;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)setImageFrameStyle:(unsigned long long)arg1 ;
-(void)setImageAlignment:(unsigned long long)arg1 ;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(CGSize)imageSize;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(char)hasVerticalScroller;
-(void)_finishedMakingConnections;
-(void)flagsChanged:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(id)exposedBindings;
-(void)setRotation:(id)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)showInspector:(id)arg1 ;
-(void)dump;
-(void)cleanup;
@end

