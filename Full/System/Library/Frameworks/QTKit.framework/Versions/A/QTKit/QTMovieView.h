/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>
#import <QTKit/NSCoding.h>
#import <QTKit/NSUserInterfaceValidations.h>

@class QTMovie, NSColor, QTMovieViewInternal, NSView, QTMovieControllerView;

@interface QTMovieView : NSView <NSCoding, NSUserInterfaceValidations> {

	QTMovie* _movie;
	NSColor* _fillColor;
	char _controllerVisible;
	char _preservesAspectRatio;
	unsigned long long _viewFlags;
	QTMovieViewInternal* _internal;
	long long _reserved3;
	id _delegate;
	int _proxy;
	int _delegateProxy;
	char _useVisualContext;
	NSView* _rendererView;
	QTMovieControllerView* _movieControllerView;

}
+(void)initialize;
+(unsigned long long)defaultFocusRingType;
-(void)zoomOut:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(char)shouldDrawFocusRing;
-(void)showAll:(id)arg1 ;
-(void)setPreservesAspectRatio:(char)arg1 ;
-(void)doEditOperation:(unsigned)arg1 ;
-(void)boundsDidChange:(id)arg1 ;
-(void)_setVisible:(char)arg1 forControllerButton:(long long)arg2 ;
-(char)isBackButtonVisible;
-(void)setBackButtonVisible:(char)arg1 ;
-(char)isCustomButtonVisible;
-(void)setCustomButtonVisible:(char)arg1 ;
-(char)isHotSpotButtonVisible;
-(void)setHotSpotButtonVisible:(char)arg1 ;
-(char)areStepButtonsVisible;
-(void)setStepButtonsVisible:(char)arg1 ;
-(char)isTranslateButtonVisible;
-(void)setTranslateButtonVisible:(char)arg1 ;
-(char)isVolumeButtonVisible;
-(void)setVolumeButtonVisible:(char)arg1 ;
-(char)areZoomButtonsVisible;
-(void)setZoomButtonsVisible:(char)arg1 ;
-(void)setScrollXEnabled:(char)arg1 ;
-(void)setScrollYEnabled:(char)arg1 ;
-(void)setScrollZEnabled:(char)arg1 ;
-(void)setImagingModeAllowsGWorld:(char)arg1 ;
-(char)isControllerVisible;
-(char)preservesAspectRatio;
-(void)setDragHighlight:(char)arg1 ;
-(void)_detachFromMovie;
-(void)_applyDelegateHelperToRenderer;
-(char)isPrinting;
-(CGRect)movieBounds;
-(id)_currentFrameImage;
-(char)_movieIsOpaque;
-(void)_updateMovieIsOpaque;
-(void)_setDrawFocusRing:(char)arg1 ;
-(CGRect)movieControllerBounds;
-(void)_windowDidChangeMainOrKey:(id)arg1 ;
-(id)movieControllerView;
-(void)_unregisterWindowNotifications;
-(void)_registerWindowNotifications;
-(void)_windowFrameDidChange:(id)arg1 ;
-(char)drawSynchronously;
-(char)imagingModeAllowsGWorld;
-(char)imagingModeForcedToGWorld;
-(char)drawsWithFinalCutStudioCompatibleColors;
-(void)_applyFinalCutStudioCompatibleColorsToRenderer;
-(void)_updateRendererToPreferredRendererViewClass;
-(void)_addQTIMAVManagerImageConsumerIfRequired;
-(void)movieWouldUseVisualContextDidChange:(id)arg1 ;
-(void)_updateRenderer;
-(void)_syncViewProxyWithMovieProxy;
-(void)_movieBoxIsOpaqueDidChange:(id)arg1 ;
-(void)_movieControllerDidChange:(id)arg1 ;
-(void)_mediaHelperDidChange:(id)arg1 ;
-(void)_movieNaturalSizeDidChange:(id)arg1 ;
-(void)_attachToMediaHelper;
-(void)_attachToMovieController;
-(void)_applyControllerButtonVisibilitySettings;
-(void)_removeQTIMAVManagerImageConsumerIfRequired;
-(void)setImagingModeForcedToGWorld:(char)arg1 ;
-(void)setDrawSynchronously:(char)arg1 ;
-(char)_controllerButtonVisibility:(long long)arg1 ;
-(void)_trackVisibility:(char)arg1 forControllerButton:(long long)arg2 ;
-(char)isButtonVisible:(long long)arg1 ;
-(CGRect)_dragHighlightOverlayPanelContentRect;
-(void)_updateServerGeometry;
-(void)restoreMovieEditState:(id)arg1 ;
-(void)mouseDownSetup:(id)arg1 ;
-(char)scrollXEnabled;
-(char)scrollYEnabled;
-(void)toggleLoops:(id)arg1 ;
-(void)gotoBeginning:(id)arg1 ;
-(void)stepForward:(id)arg1 ;
-(void)stepBackward:(id)arg1 ;
-(void)selectNone:(id)arg1 ;
-(id)dragImage;
-(id)dragMovie;
-(void)drop:(id)arg1 ;
-(void)dropMovie:(id)arg1 ;
-(void)gotoEnd:(id)arg1 ;
-(void)gotoNextSelectionPoint:(id)arg1 ;
-(void)gotoPreviousSelectionPoint:(id)arg1 ;
-(void)gotoPosterFrame:(id)arg1 ;
-(void)trim:(id)arg1 ;
-(void)addScaled:(id)arg1 ;
-(char)focusRingEnabled;
-(id)_rendererView;
-(void)setImagingModeAllowsVisualContext:(char)arg1 ;
-(void)setImagingModeForcedToVisualContext:(char)arg1 ;
-(char)drawWithCGImage;
-(void)setDrawWithCGImage:(char)arg1 ;
-(void)setDrawsWithFinalCutStudioCompatibleColors:(char)arg1 ;
-(void)hideButton:(long long)arg1 ;
-(void)showButton:(long long)arg1 ;
-(void)toggleButton:(long long)arg1 ;
-(void)showCustomButton:(id)arg1 ;
-(char)scrollZEnabled;
-(void)enableFocusRing:(char)arg1 ;
-(id)_alteredImageForImage:(id)arg1 ;
-(id)movie;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)isEditable;
-(void)add:(id)arg1 ;
-(id)fillColor;
-(void)setEditable:(char)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysWhileDragging;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)_commonInit;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(unsigned)windowID;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)hasMarkedText;
-(NSRange)selectedRange;
-(char)mouseDownCanMoveWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)helpRequested:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)delete:(id)arg1 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(void)unmarkText;
-(id)validAttributesForMarkedText;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(NSRange)markedRange;
-(long long)conversationIdentifier;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)viewDidEndLiveResize;
-(unsigned)surfaceID;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)setShowsResizeIndicator:(char)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)updateFrame;
-(void)renewGState;
-(void)setMovie:(id)arg1 ;
-(void)setControllerVisible:(char)arg1 ;
-(float)controllerBarHeight;
-(char)handleEvent:(id)arg1 ;
-(char)showsResizeIndicator;
-(void)beginDocument;
-(void)endDocument;
-(char)handleKeyDown:(id)arg1 ;
-(char)handleKeyUp:(id)arg1 ;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
@end

