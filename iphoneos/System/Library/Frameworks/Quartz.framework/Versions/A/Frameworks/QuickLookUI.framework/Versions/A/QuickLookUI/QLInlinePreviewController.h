/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLPreviewOverlayDataSource.h>
#import <QuickLookUI/QLPreviewViewDelegate.h>

@protocol QLPreviewItem;
@class NSView, CALayer, QLPreviewPanel, QLPreviewView, QLPreviewOverlayController, NSString;

@interface QLInlinePreviewController : NSObject <QLPreviewOverlayDataSource, QLPreviewViewDelegate> {

	id<QLPreviewItem> _inlinePreviewItem;
	NSView* _hostingView;
	CALayer* _hostingLayer;
	id _delegate;
	QLPreviewPanel* _sharingPreviewPanel;
	QLPreviewView* _previewView;
	QLPreviewOverlayController* _overlayController;
	int _mode;
	int _iconFlavor;
	char _lazyLoading;
	char _autoplay;
	char _crossfade;
	int _state;
	char _observing;
	char _playAfterLoading;
	unsigned long long _pageAfterLoading;
	char _hostingLayerIsInWindowServer;
	double _backingScaleFactor;

}

@property (assign) NSView * hostingView;                              //@synthesize hostingView=_hostingView - In the implementation block
@property (assign) CALayer * hostingLayer;                            //@synthesize hostingLayer=_hostingLayer - In the implementation block
@property (retain) id<QLPreviewItem> inlinePreviewItem; 
@property (assign) id<QLInlinePreviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) QLPreviewPanel * sharingPreviewPanel;              //@synthesize sharingPreviewPanel=_sharingPreviewPanel - In the implementation block
@property (assign) char autoplay;                                     //@synthesize autoplay=_autoplay - In the implementation block
@property (assign) char crossfade;                                    //@synthesize crossfade=_crossfade - In the implementation block
@property (assign) char playing; 
@property (readonly) int status; 
@property (assign) int inlinePreviewState; 
@property (readonly) char shouldKeepThumbnail; 
@property (readonly) CALayer * contentLayer; 
@property (readonly) QLPreviewView * previewView;                     //@synthesize previewView=_previewView - In the implementation block
@property (assign) char hostingLayerIsInWindowServer;                 //@synthesize hostingLayerIsInWindowServer=_hostingLayerIsInWindowServer - In the implementation block
@property (assign) double backingScaleFactor; 
@property (readonly) char useLayers; 
@property (assign) char lazyLoading;                                  //@synthesize lazyLoading=_lazyLoading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSView * overlayParentView; 
@property (readonly) CALayer * overlayParentLayer; 
@property (readonly) CGRect overlayFrame; 
@property (readonly) CGRect rolloverFrame; 
@property (readonly) char showControls; 
@property (readonly) char shouldAlwaysHandleMultiClicks; 
@property (readonly) char needsPlayControl; 
@property (readonly) char needsTimeControl; 
@property (readonly) float progress; 
@property (readonly) char needsPageControl; 
@property (readonly) unsigned long long numberOfPages; 
@property (assign) unsigned long long currentPage; 
@property (readonly) double rolloverActivationDelay; 
+(id)keyPathsForValuesAffectingNumberOfPages;
+(double)inlinePreviewMinimumSupportedSize;
+(int)specialInlinePreviewModeForPreviewItem:(id)arg1 ;
+(unsigned long long)inlinePreviewTrackingAreaOptions;
-(char)playing;
-(char)autoplay;
-(char)sharedPreviewView:(id)arg1 shouldHaveContinuousTransitionWithPreviewView:(id)arg2 ;
-(char)needsPlayControl;
-(char)needsPageControl;
-(void)sharedPreviewView:(id)arg1 willStartSharingWithPreviewPanel:(id)arg2 ;
-(void)sharedPreviewView:(id)arg1 failedToStartSharingWithPreviewPanel:(id)arg2 ;
-(void)sharedPreviewView:(id)arg1 didStartSharingWithPreviewPanel:(id)arg2 ;
-(void)sharedPreviewView:(id)arg1 willStopSharingWithPreviewPanel:(id)arg2 ;
-(void)sharedPreviewView:(id)arg1 didStopSharingWithPreviewPanel:(id)arg2 ;
-(char)needsTimeControl;
-(char)showControls;
-(char)previewView:(id)arg1 shouldBypassLoadingOfPreviewItem:(id)arg2 ;
-(char)isPreviewHostedInWindowServer:(id)arg1 ;
-(int)flavorForPreviewView:(id)arg1 ;
-(double)previewViewBackingScaleFactor:(id)arg1 ;
-(char)isPreviewViewVisible:(id)arg1 ;
-(id)overlayControllerForPreviewView:(id)arg1 ;
-(CGRect)contentFrameForPreviewView:(id)arg1 ;
-(CGRect)rolloverFrameForPreviewView:(id)arg1 ;
-(char)shouldAlwaysHandleMultiClicksForPreviewView:(id)arg1 ;
-(NSView *)overlayParentView;
-(CALayer *)overlayParentLayer;
-(CGRect)rolloverFrame;
-(char)shouldAlwaysHandleMultiClicks;
-(char)useLayers;
-(void)setInlinePreviewState:(int)arg1 ;
-(void)_setInlinePreviewItem:(id)arg1 ;
-(void)setLazyLoading:(char)arg1 ;
-(void)_createInlinePreviewIfNeeded;
-(void)_updateInlinePreview;
-(CGRect)_itemFrame;
-(char)_shouldOpenInlinePreview;
-(char)_shouldShowInlinePreviewControlsOfPreviewView:(id)arg1 ;
-(char)_shouldShowInlinePreviewContentOfPreviewView:(id)arg1 ;
-(void)_openInlinePreview;
-(char)_shouldCrossfade;
-(void)_setInlinePreviewVisible:(char)arg1 animate:(char)arg2 ;
-(void)_closeInlinePreview;
-(void)_startObserving;
-(NSView *)hostingView;
-(void)_stopObserving;
-(char)crossfade;
-(char)_shouldKeepThumbnail;
-(char)_boolValueFromObject:(id)arg1 ;
-(void)_inlinePreviewDidChangePlaying:(char)arg1 ;
-(unsigned long long)_integerValueFromObject:(id)arg1 ;
-(void)_inlinePreviewDidChangePage:(unsigned long long)arg1 ;
-(char)mouseDownAtPoint:(CGPoint)arg1 ;
-(void)previewView:(id)arg1 didFailLoadingPreviewItem:(id)arg2 ;
-(void)setHostingView:(NSView *)arg1 ;
-(CALayer *)hostingLayer;
-(char)hostingLayerIsInWindowServer;
-(void)setHostingLayerIsInWindowServer:(char)arg1 ;
-(char)lazyLoading;
-(int)inlinePreviewState;
-(char)shouldKeepThumbnail;
-(void)setBackingScaleFactor:(double)arg1 ;
-(void)mouseExited;
-(void)setInlinePreviewItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)inlinePreviewItem;
-(char)mouseDownAtPoint:(CGPoint)arg1 clickCount:(long long)arg2 dequeue:(char)arg3 ;
-(void)setHostingLayer:(CALayer *)arg1 ;
-(void)setCrossfade:(char)arg1 ;
-(void)mouseEntered;
-(void)setAutoplay:(char)arg1 ;
-(void)updatePreviewFrame;
-(void)setSharingPreviewPanel:(QLPreviewPanel *)arg1 ;
-(QLPreviewPanel *)sharingPreviewPanel;
-(char)mouseDownAtPoint:(CGPoint)arg1 clickCount:(long long)arg2 ;
-(id)init;
-(void)setDelegate:(id<QLInlinePreviewDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<QLInlinePreviewDelegate>)delegate;
-(double)backingScaleFactor;
-(int)status;
-(float)progress;
-(unsigned long long)currentPage;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPages;
-(void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2 ;
-(void)previewView:(id)arg1 willShowPreviewItem:(id)arg2 ;
-(void)previewView:(id)arg1 didShowPreviewItem:(id)arg2 ;
-(QLPreviewView *)previewView;
-(CGRect)overlayFrame;
-(CALayer *)contentLayer;
-(void)setPlaying:(char)arg1 ;
@end

