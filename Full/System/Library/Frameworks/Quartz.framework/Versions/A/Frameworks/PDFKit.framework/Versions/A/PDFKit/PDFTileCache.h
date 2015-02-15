/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class CALayer, PDFBaseLayer, NSMutableDictionary, PDFDocument, PDFLayerController, NSTimer, PDFTileRenderer;

@interface PDFTileCache : NSObject {

	CALayer* _containingLayer;
	PDFBaseLayer* _scrollLayer;
	PDFBaseLayer* _backgroundLayer;
	PDFBaseLayer* _hudLayer;
	PDFBaseLayer* _passwordLayer;
	PDFBaseLayer* _coachMarkLayer;
	CGRect _coachMarkRectInLayoutSpace;
	char _wantsFindOverlay;
	NSMutableDictionary* _tiles;
	PDFDocument* _document;
	CGRect _visibleRect;
	CGRect _tileCoverageRect;
	double _scaleFactor;
	double _deviceScaleFactor;
	double _fluidZoomScaleFactor;
	CGPoint _scrollOffset;
	PDFLayerController* _delegate;
	NSTimer* _zoomTimer;
	CGPathRef _shadowMask;
	PDFTileRenderer* _tr;

}

@property (retain) PDFDocument * document;                     //@synthesize document=_document - In the implementation block
@property (assign) double scaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) double deviceScaleFactor;                   //@synthesize deviceScaleFactor=_deviceScaleFactor - In the implementation block
@property (retain) PDFLayerController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)setDeviceScaleFactor:(double)arg1 ;
-(void)snapshotInContext:(CGContextRef)arg1 ;
-(void)magnifyWithMagnification:(double)arg1 atPoint:(CGPoint)arg2 immediately:(char)arg3 ;
-(CGPoint)scrollOffset;
-(void)setDelegate:(PDFLayerController *)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)layout;
-(PDFLayerController *)delegate;
-(PDFDocument *)document;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGRect)visibleRect;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)pagesIntersectingRect:(CGRect)arg1 ;
-(void)setShadowMask:(CGPathRef)arg1 ;
-(void)drawShadowedRectInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 ;
-(CGPathRef)shadowMask;
-(void)setHUDNeedsDisplay;
-(id)tileForPointInLayoutSpace:(CGPoint)arg1 ;
-(CGPoint)tileGridPointForPointInLayoutSpace:(CGPoint)arg1 ;
-(id)tileAtX:(int)arg1 Y:(int)arg2 ;
-(CGRect)tileCoverageRectForPointInLayoutSpace:(CGPoint)arg1 ;
-(CGRect)rectForTileAtX:(int)arg1 Y:(int)arg2 ;
-(char)wantsFindOverlay;
-(CGRect)rectForCoachMark;
-(void)updateTileFrames;
-(id)makeLayerForX:(int)arg1 Y:(int)arg2 ;
-(double)automaticScaleFactor;
-(CGRect)hudRect;
-(CGRect)passwordRect;
-(void)drawPageContentInContext:(CGContextRef)arg1 ;
-(void)drawPageSelectionsInContext:(CGContextRef)arg1 usingLayer:(char)arg2 ;
-(id)tilesCoveredForRectInLayoutSpace:(CGRect)arg1 ;
-(void)setCoachMarkNeedsDisplay;
-(void)showCoachMark:(CGRect)arg1 ;
-(void)revalidateTiles;
-(void)zoomTimerFired:(id)arg1 ;
-(void)setPasswordNeedsDisplay;
-(void)scrollWithDelta:(CGSize)arg1 ;
-(void)commitFluidZoomScaleFactor;
-(void)drawHUDInContext:(CGContextRef)arg1 ;
-(void)drawFindOverlayInContext:(CGContextRef)arg1 ;
-(void)drawCoachMarkInContext:(CGContextRef)arg1 ;
-(void)drawPasswordInContext:(CGContextRef)arg1 ;
-(void)drawPagePostWithContext:(CGContextRef)arg1 onPage:(id)arg2 ;
-(void)setFindOverlayNeedsDisplay;
-(void)drawFindOverlayInContext:(CGContextRef)arg1 onPage:(id)arg2 ;
-(void)fadeOutCoachMark;
-(void)fadeOutCoachMarkTimerFired:(id)arg1 ;
-(void)drawSelectionInContext:(CGContextRef)arg1 withSelection:(id)arg2 forPage:(id)arg3 ofType:(int)arg4 ;
-(id)tileForPointInWindowSpace:(CGPoint)arg1 ;
-(CGPoint)pointInLayoutSpaceForPointInWindowSpace:(CGPoint)arg1 ;
-(CGRect)tileCoverageRectForPointInWindowSpace:(CGPoint)arg1 ;
-(CGRect)tileCoverageRectForTile:(id)arg1 ;
-(id)initWithContainingLayer:(id)arg1 ;
-(void)drawPreviewForPage:(unsigned)arg1 inContext:(CGContextRef)arg2 ;
-(void)setSelectionNeedsDisplay;
-(void)setSelectionNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInRects:(id)arg1 ;
-(void)updateCoachMark;
-(void)fadeInFindOverlay;
-(void)fadeOutFindOverlay;
-(CGRect)scrolledVisibleRect;
-(void)easeInHUD;
-(void)easeOutHUD;
-(void)easeInPassword;
-(void)easeOutPassword;
-(double)deviceScaleFactor;
@end

