/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLAccessibilityUIElementDelegate.h>
#import <QuickLookUI/QLDisplayable.h>
#import <QuickLookUI/NSPasteboardWriting.h>

@protocol QLDisplayBundleOwner;
@class NSView, CALayer, NSResponder, NSDictionary, NSMutableArray, NSString, NSURL, NSArray;

@interface QLDisplayBundle : NSObject <QLAccessibilityUIElementDelegate, QLDisplayable, NSPasteboardWriting> {

	QLPreviewRef _previewRef;
	id<QLDisplayBundleOwner> _owner;
	NSMutableArray* _accessoryControllers;
	int _activation;
	int _visibility;
	int _activationCount;
	char _isObservingOwner;
	NSString* _initialOperationCategory;

}

@property (readonly) NSDictionary * accessibilityUIElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) QLPreviewRef preview; 
@property (readonly) NSString * displayBundleID; 
@property (retain,readonly) id<QLPreviewItem> previewItem; 
@property (readonly) NSURL * URL; 
@property (retain) id<QLDisplayBundleOwner> owner;                             //@synthesize owner=_owner - In the implementation block
@property (readonly) char isLoaded; 
@property (readonly) char isRemote; 
@property (readonly) char isHostedInWindowServer; 
@property (readonly) char isWindowKey; 
@property (readonly) char canBeReused; 
@property (readonly) int activationState; 
@property (readonly) char activated; 
@property (readonly) char deactivated; 
@property (readonly) int displayFlags; 
@property (readonly) int additionalDisplayFlags; 
@property (readonly) int disabledDisplayFlags; 
@property (readonly) NSString * customDisplayName; 
@property (readonly) NSString * displayNameComplement; 
@property (readonly) char canShowTitleInBubble; 
@property (readonly) char canShowOpenButton; 
@property (readonly) char isDisplayingError; 
@property (readonly) char opaque; 
@property (readonly) char viewUsesLayer; 
@property (retain) id displayState; 
@property (assign) char highlighted; 
@property (readonly) int mode; 
@property (readonly) int flavor; 
@property (readonly) int backgroundStyle; 
@property (readonly) unsigned long long overlayVisibilityOptions; 
@property (readonly) char shouldShowInlinePreviewControls; 
@property (readonly) char shouldShowInlinePreviewContent; 
@property (readonly) char keepThumbnailUnderInlinePreview; 
@property (readonly) char inLiveResize; 
@property (readonly) char hasHorizontalScroller; 
@property (assign) int visibility;                                             //@synthesize visibility=_visibility - In the implementation block
@property (readonly) CALayer * contentLayer; 
@property (readonly) NSView * contentView; 
@property (readonly) char shouldDrawBubbleBackground; 
@property (readonly) double backingScaleFactor; 
@property (readonly) CGPoint globalOrigin; 
@property (readonly) CGRect contentFrame; 
@property (readonly) CGRect opaqueFrame; 
@property (readonly) CGRect contentFrameForSeamlessOpening; 
@property (readonly) NSDictionary * sizingConstraints; 
@property (readonly) char scalable; 
@property (readonly) char delegatesControls; 
@property (readonly) char hasTime; 
@property (readonly) char autoplay; 
@property (assign) char playing; 
@property (readonly) double duration; 
@property (assign) double currentTime; 
@property (readonly) char playedToTheEnd; 
@property (readonly) char hasAudio; 
@property (assign) char muted; 
@property (assign) float volume; 
@property (readonly) char hasPages; 
@property (readonly) unsigned long long numberOfPages; 
@property (assign) unsigned long long currentPage; 
@property (readonly) int pageDisplay; 
@property (readonly) char showScrollerToChangePages; 
@property (readonly) double defaultPageThumbnailRatio; 
@property (readonly) char hasScrolling; 
@property (readonly) double totalScroll; 
@property (assign) double currentScroll; 
@property (readonly) double totalHorizontalScroll; 
@property (assign) double currentHorizontalScroll; 
@property (readonly) char hasZooming; 
@property (readonly) double maxZoomFactor; 
@property (readonly) double zoomFactorToFitWidth; 
@property (assign) CGPoint focusPoint; 
@property (assign) double zoomFactor; 
@property (assign) char autoZooms; 
@property (assign) char tracksMouseMovements; 
@property (readonly) unsigned long long observedEvents; 
@property (readonly) char prefersLocalEventLoop; 
@property (retain) NSArray * highlightedOccurrences; 
@property (assign) unsigned long long focusedOccurrenceIndex; 
@property (readonly) NSURL * launchURL; 
@property (readonly) NSDictionary * openingApplicationInfo; 
@property (readonly) char allowsAlerts; 
@property (readonly) char shouldPreserveAspectRatioWhenResizing; 
@property (readonly) char allowsNetworkAccess; 
@property (readonly) char allowsJavascript; 
@property (readonly) char allowsPlugIns; 
@property (readonly) char allowsFileAccess; 
@property (readonly) char allowsOpeningFileURLs; 
@property (readonly) NSView * quickLookView; 
@property (readonly) CALayer * quickLookLayer; 
@property (assign) CGRect quickLookFrame; 
@property (readonly) NSResponder * responder; 
@property (readonly) CGRect borderFrame; 
@property (readonly) id accessibilityFocusedUIElement; 
@property (assign) int inputFocusType; 
+(id)keyPathsForValuesAffectingDisplayState;
+(id)keyPathsForValuesAffectingPlayedToTheEnd;
+(char)generateThumbnail:(QLThumbnailRequestRef)arg1 withData:(id)arg2 contentTypeUTI:(id)arg3 previewProperties:(id)arg4 properties:(id)arg5 ;
+(char)generateThumbnail:(QLThumbnailRequestRef)arg1 withURL:(id)arg2 contentTypeUTI:(id)arg3 previewProperties:(id)arg4 properties:(id)arg5 ;
+(id)_pathOfScreenshotWithKey:(id)arg1 ;
+(id)potentialExpectedDisplayBundleIDsForPreview:(QLPreviewRef)arg1 ;
+(id)keyPathsForValuesAffectingContentFrame;
+(id)keyPathsForValuesAffectingContentFrameForSeamlessOpening;
+(id)keyPathsForValuesAffectingBorderFrame;
+(id)keyPathsForValuesAffectingHasTime;
+(id)keyPathsForValuesAffectingHasScrolling;
+(id)keyPathsForValuesAffectingHasZooming;
+(id)imageForScreenshotKey:(id)arg1 ;
+(id)newPreviewDocumentDisplayBundleForPreview:(QLPreviewRef)arg1 ;
-(char)activated;
-(id)displayState;
-(CGImageRef)copyImageRepresentationWithFrame:(CGRect*)arg1 ;
-(char)deactivated;
-(NSDictionary *)sizingConstraints;
-(int)displayFlags;
-(CGPoint)focusPoint;
-(int)visibility;
-(void)setVisibility:(int)arg1 ;
-(void)cancelLoading;
-(void)setMuted:(char)arg1 ;
-(char)playing;
-(char)hasAudio;
-(void)willOpen;
-(char)allowsPlugIns;
-(char)autoplay;
-(char)muted;
-(char)hasTime;
-(NSURL *)launchURL;
-(void)didOpen;
-(char)hasDisplayFlag:(int)arg1 ;
-(NSString *)displayBundleID;
-(void)didShow;
-(void)willHide;
-(NSDictionary *)openingApplicationInfo;
-(char)canShowOpenButton;
-(char)hasScrolling;
-(char)hasPages;
-(char)showScrollerToChangePages;
-(int)pageDisplay;
-(char)scalable;
-(void)debugPreview:(id)arg1 ;
-(char)mustHandleEvent:(id)arg1 ;
-(unsigned long long)observedEvents;
-(char)allowsAlerts;
-(char)isValidInPreviewMode:(int)arg1 ;
-(id)customDisplayNameWithLongForm:(char)arg1 ;
-(NSString *)displayNameComplement;
-(char)isDisplayingError;
-(void)refreshSynchronously;
-(void)willTimeOut;
-(char)canBeReused;
-(CGRect)borderFrame;
-(void)backingScaleFactorDidChange;
-(CALayer *)quickLookLayer;
-(void)discardAccessoryControllers;
-(NSView *)quickLookView;
-(char)viewUsesLayer;
-(char)shouldShowInlinePreviewControls;
-(char)shouldShowInlinePreviewContent;
-(void)globalOriginDidChange;
-(void)windowKeyDidChange;
-(char)playedToTheEnd;
-(double)totalScroll;
-(double)currentScroll;
-(void)setCurrentScroll:(double)arg1 ;
-(double)totalHorizontalScroll;
-(double)currentHorizontalScroll;
-(void)setCurrentHorizontalScroll:(double)arg1 ;
-(char)hasZooming;
-(double)zoomFactorToFitWidth;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(char)autoZooms;
-(void)setAutoZooms:(char)arg1 ;
-(char)delegatesControls;
-(id)viewForEvent:(id)arg1 ;
-(char)prefersLocalEventLoopForEvent:(id)arg1 ;
-(char)canSelectText;
-(char)isClickablePoint:(CGPoint)arg1 ;
-(NSResponder *)responder;
-(CGRect)quickLookFrame;
-(void)setQuickLookFrame:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(CGRect)opaqueFrame;
-(CGRect)contentFrameForSeamlessOpening;
-(void)hostedInWindowServerDidChange;
-(void)willStartLiveResize;
-(void)didEndLiveResize;
-(char)allowsOpeningFileURLs;
-(char)generateThumbnailForPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)customDisplayName;
-(char)isHostedInWindowServer;
-(char)isWindowKey;
-(CGPoint)globalOrigin;
-(CGPoint)locationForEvent:(id)arg1 ;
-(char)tracksMouseMovements;
-(void)setTracksMouseMovements:(char)arg1 ;
-(char)keepThumbnailUnderInlinePreview;
-(void)_unbindWindowController:(id)arg1 ;
-(void)_bindedWindowWillClose:(id)arg1 ;
-(void)_discardBoundWindowControllers;
-(void)modeDidChange;
-(void)reloadAndFallbackWithError:(id)arg1 ;
-(void)_saveScreenshotWithKey:(id)arg1 ;
-(void)_startObservingOwner;
-(void)_stopObservingOwner;
-(int)additionalDisplayFlags;
-(int)disabledDisplayFlags;
-(char)responder:(id)arg1 shouldHandleEvent:(id)arg2 ;
-(char)_dispatchEvent:(id)arg1 selector:(SEL)arg2 ;
-(char)prefersLocalEventLoop;
-(char)allowsNetworkAccess;
-(char)allowsFileAccess;
-(id)_operationCategory;
-(id)initWithPreview:(QLPreviewRef)arg1 owner:(id)arg2 ;
-(char)showAccessoryController:(id)arg1 ;
-(int)loadWithHints:(id)arg1 ;
-(void)didLoad;
-(void)didMismatchLoadingWithHints:(id)arg1 expectedDisplayBundleID:(id)arg2 ;
-(void)didFailLoadingWithError:(id)arg1 ;
-(void)didDesistRemoteWithExpectedDisplayBundleID:(id)arg1 ;
-(void)sizingUpdated;
-(void)customTitleUpdated;
-(int)activationState;
-(char)canShowTitleInBubble;
-(char)opaque;
-(unsigned long long)overlayVisibilityOptions;
-(void)drawFlavorInBackgroundLayer:(id)arg1 foregroundLayer:(id)arg2 contentSize:(CGSize)arg3 maxSize:(CGSize)arg4 parts:(CGRect*)arg5 ;
-(void)drawHighlights:(id)arg1 inContext:(CGContextRef)arg2 style:(int)arg3 ;
-(char)shouldDrawBubbleBackground;
-(void)drawBubbleBackgroundInFrame:(CGRect)arg1 contentFrame:(CGRect)arg2 ;
-(double)defaultPageThumbnailRatio;
-(id)stringForPage:(unsigned long long)arg1 ;
-(NSRange)stringRangeForPage:(unsigned long long)arg1 ;
-(id)rectsForStringRange:(NSRange)arg1 inPage:(unsigned long long)arg2 ;
-(id)findOccurrencesOfString:(id)arg1 inPage:(unsigned long long)arg2 withOptions:(unsigned long long)arg3 ;
-(NSArray *)highlightedOccurrences;
-(void)setHighlightedOccurrences:(NSArray *)arg1 ;
-(unsigned long long)focusedOccurrenceIndex;
-(void)setFocusedOccurrenceIndex:(unsigned long long)arg1 ;
-(void)setFocusedOccurrenceIndex:(unsigned long long)arg1 inPage:(unsigned long long)arg2 ;
-(char)shouldOpenExternalURL:(id)arg1 ;
-(char)drawPage:(unsigned long long)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(char)shouldPreserveAspectRatioWhenResizing;
-(char)shouldShowPagesOnLeft;
-(char)allowsJavascript;
-(char)validateURLSecureAccess:(id)arg1 ;
-(void)beginOperation:(id)arg1 ;
-(void)endOperation:(id)arg1 ;
-(NSDictionary *)accessibilityUIElements;
-(CGRect)frameForUIElementWithIdentifier:(id)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 forUIElementWithIdentifier:(id)arg2 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 forUIElementWithIdentifier:(id)arg2 ;
-(void)openExternalURL:(id)arg1 ;
-(char)highlighted;
-(int)flavor;
-(QLPreviewRef)preview;
-(void)setPreview:(QLPreviewRef)arg1 ;
-(double)maxZoomFactor;
-(void)dealloc;
-(double)duration;
-(NSString *)description;
-(NSURL *)URL;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(NSView *)contentView;
-(void)activate;
-(void)deactivate;
-(char)isRemote;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(char)inLiveResize;
-(double)backingScaleFactor;
-(char)hasHorizontalScroller;
-(char)isLoaded;
-(char)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(int)mode;
-(void)setHighlighted:(char)arg1 ;
-(int)backgroundStyle;
-(void)copy:(id)arg1 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(char)mouseMoved:(id)arg1 ;
-(void)setDisplayState:(id)arg1 ;
-(void)setOwner:(id<QLDisplayBundleOwner>)arg1 ;
-(id<QLDisplayBundleOwner>)owner;
-(unsigned long long)currentPage;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(char)rotateWithEvent:(id)arg1 ;
-(char)cursorUpdate:(id)arg1 ;
-(char)smartMagnifyWithEvent:(id)arg1 ;
-(char)beginGestureWithEvent:(id)arg1 ;
-(char)endGestureWithEvent:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(float)volume;
-(unsigned long long)numberOfPages;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(CALayer *)contentLayer;
-(void)discard;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(char)isSafe;
-(void)willShow;
-(void)didHide;
-(void)cleanup;
-(void)setPlaying:(char)arg1 ;
@end

