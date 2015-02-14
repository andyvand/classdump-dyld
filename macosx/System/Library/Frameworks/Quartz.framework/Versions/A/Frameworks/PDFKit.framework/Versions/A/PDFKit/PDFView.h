/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>
#import <PDFKit/NSAnimationDelegate.h>
#import <PDFKit/NSMenuDelegate.h>

@class PDFViewPrivateVars, NSString;

@interface PDFView : NSView <NSAnimationDelegate, NSMenuDelegate> {

	PDFViewPrivateVars* _pdfPriv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)isCompatibleWithResponsiveScrolling;
-(void)commonInit;
-(void)zoomOut:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(void)goBack:(id)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)history;
-(char)canZoomIn;
-(char)canZoomOut;
-(id)currentSelection;
-(unsigned long long)lastPageIndex;
-(void)goForward:(id)arg1 ;
-(void)goToPreviousPage:(id)arg1 ;
-(void)goToNextPage:(id)arg1 ;
-(char)canGoToNextPage;
-(char)canGoToPreviousPage;
-(void)clipViewBoundsChanged:(id)arg1 ;
-(void)clearSelection;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setDisplaysAsBook:(char)arg1 ;
-(void)goToPage:(id)arg1 ;
-(void)setDisplaysPageBreaks:(char)arg1 ;
-(void)setPageColor:(id)arg1 ;
-(double)autoScaleFactor;
-(void)addTooltipsForVisiblePages;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)performAction:(id)arg1 ;
-(id)delegate;
-(void)startSpeaking:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)updateLayer;
-(void)animationDidEnd:(id)arg1 ;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(id)document;
-(void)stopSpeaking:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)isOpaque;
-(id)backgroundColor;
-(id)documentView;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setBezeled:(char)arg1 ;
-(char)isBezeled;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)print:(id)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(void)printDocument:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(double)animationDuration;
-(void)mouseMoved:(id)arg1 ;
-(id)exposedBindings;
-(char)canGoBack;
-(char)canGoForward;
-(id)currentPage;
-(char)wantsForwardedScrollEventsForAxis:(long long)arg1 ;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(char)displaysTooltips;
-(void)setDisplaysTooltips:(char)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(char)writeSelectionToPasteboard:(id)arg1 types:(id)arg2 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(void)scrollLineUp:(id)arg1 ;
-(void)scrollLineDown:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)didEndScrollInScrollView:(id)arg1 ;
-(void)didScrollInScrollView:(id)arg1 ;
-(void)scrollSelectionToVisible:(id)arg1 ;
-(void)setCurrentSelection:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 ;
-(char)autoScales;
-(void)setAutoScales:(char)arg1 ;
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(void)_searchInDictionary:(id)arg1 ;
-(void)_setActualSize:(id)arg1 ;
-(void)_setAutoSize:(id)arg1 ;
-(void)_setSinglePage:(id)arg1 ;
-(void)_setSinglePageScrolling:(id)arg1 ;
-(void)_setDoublePage:(id)arg1 ;
-(void)_setDoublePageScrolling:(id)arg1 ;
-(void)_searchInSpotlight:(id)arg1 ;
-(void)_searchInGoogle:(id)arg1 ;
-(id)pageForPoint:(CGPoint)arg1 nearest:(char)arg2 ;
-(id)pagesIntersectingRect:(CGRect)arg1 ;
-(void)setShadowMask:(CGPathRef)arg1 ;
-(CGPathRef)shadowMask;
-(void)setDisplaysMarkupAnnotations:(char)arg1 ;
-(void)performAXAnnotationHit:(id)arg1 ;
-(void)goToRect:(CGRect)arg1 onPage:(id)arg2 ;
-(id)visiblePages;
-(id)matteView;
-(void)findVisiblePages;
-(id)PDFLayout;
-(void)goToTopOfNextPage:(id)arg1 ;
-(void)goToBottomOfPreviousPage:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGSize)contentSizeForPage:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(void)printWithInfo:(id)arg1 autoRotate:(char)arg2 pageScaling:(long long)arg3 ;
-(char)suspendRendering;
-(char)inhibitDrawing;
-(char)passwordUIDisplayed;
-(char)doPeriodicFlush;
-(char)doDrawPageContent;
-(long long)displayBox;
-(void)handleInitialContentRenderSkip;
-(void)drawPage:(id)arg1 ;
-(void)drawPagePost:(id)arg1 ;
-(double)gutterOffsetForPageDisplay;
-(char)shouldAntiAlias;
-(double)greekingThreshold;
-(double)lineWidthThreshold;
-(double)periodicFlushInterval;
-(char)usesPageLabels;
-(char)backgroundHasAlpha;
-(id)trueBackgroundColor;
-(void)drawPagePre:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(double)autoScaleFactorForPage:(id)arg1 ;
-(void)slamScaleFactor:(double)arg1 ;
-(CGSize)pageViewSizeForPage:(id)arg1 ;
-(void)visiblePagesChanged:(id)arg1 ;
-(void)setActivePopupAnnotation:(id)arg1 ;
-(id)activePopupAnnotation;
-(void)setAnnotationNeedsDisplay:(id)arg1 padding:(double)arg2 ;
-(double)gutterWidth;
-(char)automaticallyHandleGutter;
-(double)defaultGutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(char)displaysMarkupAnnotations;
-(CGRect)gutterBoundsForPage:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(void)selfDidResize:(id)arg1 ;
-(void)syncPageIndexToScrollView;
-(char)allowsDragging;
-(void)setAllowsDragging:(char)arg1 ;
-(void)initInternalViews;
-(void)layoutDocumentView;
-(char)displaysAsBook;
-(id)pagesView;
-(id)pageColor;
-(char)displaysPageBreaks;
-(char)displaysSoloPagesCentered;
-(double)maxScaleFactor;
-(double)minScaleFactor;
-(id)gutterColor;
-(unsigned long long)animateFlag;
-(id)popupManager;
-(char)scrollingChangesPages;
-(void)resetDocumentState;
-(void)documentWasUnlocked:(id)arg1 ;
-(void)documentAnnotationsChanged:(id)arg1 ;
-(void)appendPasswordUI:(id)arg1 ;
-(char)canGoToFirstPage;
-(id)currentDestination;
-(void)pushDestination:(id)arg1 ;
-(void)goToPageNoPush:(id)arg1 ;
-(void)cancelScheduleSyncPageIndex;
-(char)canGoToLastPage;
-(id)nextPage;
-(id)previousPage;
-(void)goToDestinationNoPush:(id)arg1 ;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(char)isRectVisible:(CGRect)arg1 onPage:(id)arg2 ;
-(void)goToDestination:(id)arg1 ;
-(double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2 ;
-(void)startAnimateZoomToScaleFactor:(double)arg1 ;
-(void)internalSetScaleFactor:(double)arg1 ;
-(void)invalidateSelectionBounds:(id)arg1 ;
-(long long)areaOfInterestForPoint:(CGPoint)arg1 ;
-(void)goToFirstPage:(id)arg1 ;
-(void)goToLastPage:(id)arg1 ;
-(long long)areaOfInterestForMouse:(id)arg1 ;
-(void)setCursorForAreaOfInterest:(long long)arg1 ;
-(void)searchInDictionaryForSelection:(id)arg1 ;
-(void)scrollHorizontalBy:(double)arg1 ;
-(void)setScaleFactor:(double)arg1 anchorPoint:(CGPoint)arg2 ;
-(void)scrollByPage:(char)arg1 ;
-(void)scrollVerticalBy:(double)arg1 ;
-(void)internalClearSelection;
-(id)highlightedSelections;
-(void)drawSelection:(id)arg1 forPage:(id)arg2 ;
-(id)PDFViewPrintJobTitle:(id)arg1 ;
-(void)resizeDisplayView:(id)arg1 ;
-(id)determineCurrentPage;
-(void)resetPDFTooltips;
-(double)pageViewHeight:(id)arg1 ;
-(void)reflectNewPageOn;
-(void)goToSelection:(id)arg1 ;
-(void)setShouldAntiAlias:(char)arg1 ;
-(void)setGreekingThreshold:(double)arg1 ;
-(void)takeBackgroundColorFrom:(id)arg1 ;
-(void)setInterpolationQuality:(long long)arg1 ;
-(long long)interpolationQuality;
-(void)_doNotQueryScaleFactor;
-(void)setCurrentSelection:(id)arg1 animate:(char)arg2 ;
-(void)setHighlightedSelections:(id)arg1 ;
-(void)takePasswordFrom:(id)arg1 ;
-(void)printWithInfo:(id)arg1 autoRotate:(char)arg2 ;
-(void)annotationsChangedOnPage:(id)arg1 ;
-(CGSize)rowSizeForPage:(id)arg1 ;
-(void)setEnableDataDetectors:(char)arg1 ;
-(char)enableDataDetectors;
-(void)startEditingTextWidgetAnnotation:(id)arg1 ;
-(id)annotationControl;
-(Class)layoutClass;
-(long long)currentHistoryIndex;
-(void)setUsesPageLabels:(char)arg1 ;
-(void)setDisplaysSoloPagesCentered:(char)arg1 ;
-(char)displaysRTL;
-(void)setLineWidthThreshold:(double)arg1 ;
-(id)beginEditingAnnotation:(id)arg1 ;
-(void)endEditingAnnotation;
-(id)annotationBeingEdited;
-(char)handleTabInTextWidget:(id)arg1 ;
-(char)handleBackTabInTextWidget:(id)arg1 ;
-(id)textSelectCursor;
-(double)scheduleSyncPageDelay;
-(void)setPopupManager:(id)arg1 ;
-(void)controllerWillRemoveAnnotationControl:(id)arg1 ;
-(char)disableInterpageSpacing;
-(void)setDisableInterpageSpacing:(char)arg1 ;
-(void)setScrollingChangesPages:(char)arg1 ;
-(char)runningWithinInterfaceBuilder;
-(void)loadSamplePDF;
-(void)removePasswordUI:(id)arg1 ;
-(PDFMargins)margins;
-(char)pageIsLeftOfAPair:(id)arg1 ;
-(void)scheduledRedisplay:(id)arg1 ;
-(CGPoint)topOfPage:(id)arg1 ;
-(CGPoint)bottomOfPage:(id)arg1 ;
-(char)shouldAnimateScroll;
-(double)maximumScrollAnimationDistance;
-(void)handleAnimateScrollFromPt:(CGPoint)arg1 toPt:(CGPoint)arg2 ;
-(void)constrainedScrollToPoint:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(void)positionInternalViews:(id)arg1 ;
-(void)drawShadowedRect:(CGRect)arg1 blur:(double)arg2 ;
-(char)selectedTextActive;
-(void)magnificationWillChange:(id)arg1 ;
-(void)magnificationDidChange:(id)arg1 ;
-(void)setupWindowNotifications:(id)arg1 ;
-(void)windowDidChangeKeyState:(id)arg1 ;
-(void)runDataDetectorsOnVisiblePages;
-(CGPoint)scrollOriginForPageTopLeft:(id)arg1 ;
-(void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2 ;
-(void)scheduleSyncPageIndex:(id)arg1 ;
-(void)addTooltipsForPage:(id)arg1 ;
-(void)endPageTransition:(id)arg1 context:(void*)arg2 ;
-(char)page:(id)arg1 isNeighboringPage:(id)arg2 ;
-(char)animateNeighboringPageChangeOnly;
-(unsigned long long)scrollEntryPoint;
-(void)createTransition:(int)arg1 forView:(id)arg2 ;
-(void)stopPDFViewAnimation;
-(CGSize)viewSizeForPage:(id)arg1 ;
-(void)setGutterColor:(id)arg1 ;
-(void)setGutterDefaultsToRightSide:(char)arg1 ;
-(char)gutterDefaultsToRightSide;
-(void)setDoPeriodicFlush:(char)arg1 ;
-(void)setPeriodicFlushInterval:(double)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(void)setMaxScaleFactor:(double)arg1 ;
-(void)setMinScaleFactor:(double)arg1 ;
-(void)setInhibitDrawing:(char)arg1 ;
-(void)setPopupsAreEditable:(char)arg1 ;
-(char)popupsAreEditable;
-(void)hitTestPopupViews:(id)arg1 ;
-(void)scrollToSelection:(id)arg1 ;
-(void)animateLayeredZoomToScaleFactor:(double)arg1 offset:(CGPoint)arg2 origin:(CGPoint)arg3 ;
-(void)setAnimateFlag:(unsigned long long)arg1 ;
-(void)startAnimationToScaleFactor:(double)arg1 finalCenter:(CGPoint)arg2 onPage:(id)arg3 ;
-(void)createCurrentImageFromView:(id)arg1 ;
-(void)handleAnimatePageTransition:(id)arg1 ;
-(void)handleAnimationProgress;
@end

