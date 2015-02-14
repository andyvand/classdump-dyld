/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THInteractiveCanvasControllerDelegate.h>

@protocol TSDCanvasLayerHosting, THWZoomableCanvasControllerDelegate, NSObject;
@class THDocumentRoot, TSKScrollView, TSDInteractiveCanvasController, THWClippingLayerHost, TSWPLongPressGestureRecognizer, NSString, TSKDocumentRoot;

@interface THWZoomableCanvasController : NSObject <THInteractiveCanvasControllerDelegate> {

	char _inResize;
	THDocumentRoot* _documentRoot;
	TSKScrollView* _scrollView;
	TSDInteractiveCanvasController* _interactiveCanvasController;
	id<TSDCanvasLayerHosting> _layerHost;
	THWClippingLayerHost* _clippingLayerHost;
	id<THWZoomableCanvasControllerDelegate> _delegate;
	TSWPLongPressGestureRecognizer* _immediatePressGesture;
	id<NSObject> _instanceData;
	NSRange _loadedPageRange;
	CGRect _targetVisibleRect;

}

@property (nonatomic,retain) TSKScrollView * scrollView;                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (nonatomic,retain) id<TSDCanvasLayerHosting> layerHost;                                       //@synthesize layerHost=_layerHost - In the implementation block
@property (nonatomic,retain) THWClippingLayerHost * clippingLayerHost;                                  //@synthesize clippingLayerHost=_clippingLayerHost - In the implementation block
@property (assign,nonatomic) id<THWZoomableCanvasControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TSWPLongPressGestureRecognizer * immediatePressGesture;                    //@synthesize immediatePressGesture=_immediatePressGesture - In the implementation block
@property (assign,nonatomic) char inResize;                                                             //@synthesize inResize=_inResize - In the implementation block
@property (nonatomic,copy) id<NSObject> instanceData;                                                   //@synthesize instanceData=_instanceData - In the implementation block
@property (assign,nonatomic) NSRange loadedPageRange;                                                   //@synthesize loadedPageRange=_loadedPageRange - In the implementation block
@property (assign,nonatomic) CGRect targetVisibleRect;                                                  //@synthesize targetVisibleRect=_targetVisibleRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) char isCanvasInteractive; 
@property (nonatomic,readonly) char isPrintingCanvas; 
@property (nonatomic,readonly) char spellCheckingSupported; 
@property (nonatomic,readonly) char spellCheckingSuppressed; 
@property (nonatomic,readonly) char shouldResizeCanvasToScrollView; 
@property (nonatomic,readonly) char shouldClipToScrollViewBoundsInVisibleBounds; 
@property (nonatomic,readonly) char shouldShowTextOverflowGlyphs; 
@property (nonatomic,readonly) char shouldShowInstructionalText; 
@property (nonatomic,readonly) char shouldPopKnobsOutsideEnclosingScrollView; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (nonatomic,readonly) char allowEditMenuToAppear; 
@property (nonatomic,readonly) char allowTextEditingToBegin; 
@property (nonatomic,readonly) char interactiveCanvasControllerAllowsHyperlinkInteraction; 
-(char)inResize;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(void)p_updateInfosToDisplay;
-(void)didAddView;
-(void)p_rebuildInfos;
-(char)isZoomedOut;
-(NSRange)loadedPageRange;
-(void)setImmediatePressGesture:(TSWPLongPressGestureRecognizer *)arg1 ;
-(void)setLoadedPageRange:(NSRange)arg1 ;
-(TSWPLongPressGestureRecognizer *)immediatePressGesture;
-(void)setClippingLayerHost:(THWClippingLayerHost *)arg1 ;
-(void)screenScaleDidChange;
-(void)setupImmediatePressGesture;
-(void)p_rebuildContentSize;
-(void)setInResize:(char)arg1 ;
-(void)setTargetVisibleRect:(CGRect)arg1 ;
-(void)p_updateContentsScale;
-(THWClippingLayerHost *)clippingLayerHost;
-(CGRect)targetVisibleRect;
-(void)invalidateLayers;
-(void)setInstanceData:(id<NSObject>)arg1 ;
-(id<NSObject>)instanceData;
-(void)setUnscaledFrame:(CGRect)arg1 viewScale:(double)arg2 ;
-(CGPoint)contentOffsetForAnchor:(CGPoint)arg1 ;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 ;
-(void)p_updateWithDelegate;
-(void)teardownController;
-(char)isCanvasInteractive;
-(void)teardownView;
-(id<TSDCanvasLayerHosting>)layerHost;
-(id)initWithDocumentRoot:(id)arg1 ;
-(TSKDocumentRoot *)documentRoot;
-(void)setViewScale:(double)arg1 contentOffset:(CGPoint)arg2 anchor:(CGPoint)arg3 ;
-(CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1 anchor:(CGPoint)arg2 viewScale:(double)arg3 scrollViewBoundsSize:(CGSize)arg4 ;
-(char)createLayerHostIfNeededWithUnscaledFrame:(CGRect)arg1 viewScale:(double)arg2 ;
-(char)createViewIfNeededWithUnscaledFrame:(CGRect)arg1 viewScale:(double)arg2 ;
-(id)interactiveCanvasController:(id)arg1 primaryTargetForGesture:(id)arg2 ;
-(char)interactiveCanvasController:(id)arg1 allowsEditMenuForRep:(id)arg2 ;
-(id)interactiveCanvasController:(id)arg1 layoutGeometryProviderForLayout:(id)arg2 ;
-(char)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1 ;
-(char)shouldResizeCanvasToScrollView;
-(CGPoint)interactiveCanvasController:(id)arg1 clampContentOffset:(CGPoint)arg2 forViewScale:(double)arg3 scrollViewBoundsSize:(CGSize)arg4 ;
-(id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3 ;
-(void)interactiveCanvasControllerDidScroll:(id)arg1 ;
-(void)interactiveCanvasController:(id)arg1 willAnimateScrollToVisibleUnscaledRect:(CGRect)arg2 ;
-(void)interactiveCanvasControllerDidEndScrollingAnimation:(id)arg1 stillAnimating:(char)arg2 ;
-(void)interactiveCanvasControllerDidZoom:(id)arg1 ;
-(char)spellCheckingSuppressed;
-(CGRect)interactiveCanvasController:(id)arg1 expandBoundsForHitTesting:(CGRect)arg2 ;
-(void)setDelegate:(id<THWZoomableCanvasControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<THWZoomableCanvasControllerDelegate>)delegate;
-(TSKScrollView *)scrollView;
-(void)setScrollView:(TSKScrollView *)arg1 ;
@end

