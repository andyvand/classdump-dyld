/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLDisplayBundle.h>

@class NSString, CALayerHost, NSDictionary, NSMapTable;

@interface QLRemoteDisplayBundle : QLDisplayBundle {

	NSString* _displayBundleID;
	CALayerHost* _layer;
	unsigned _remotePort;
	dispatch_source_sRef _callbackSource;
	char _updatingFromRemoteDisplayBundle;
	NSDictionary* _remotePropertiesBeingUpdated;
	NSMapTable* _pageThumbnailsGenerationTable;
	int _displayFlags;
	char _highlighted;
	char _canBeReused;
	char _prefersLocalEventLoop;
	char _playing;
	double _duration;
	double _currentTime;
	char _hasAudio;
	char _muted;
	float _volume;
	unsigned long long _numberOfPages;
	unsigned long long _currentPage;
	int _pageDisplay;
	double _defaultPageThumbnailRatio;
	char _showScrollerToChangePages;
	double _totalScroll;
	double _currentScroll;
	double _totalHorizontalScroll;
	double _currentHorizontalScroll;
	CGRect _contentFrame;
	CGRect _opaqueFrame;
	CGRect _borderFrame;
	int _backgroundStyle;
	NSDictionary* _openingApplicationInfo;
	NSDictionary* _axElements;
	NSDictionary* _uiElements;

}

@property (retain) NSString * displayBundleID;                        //@synthesize displayBundleID=_displayBundleID - In the implementation block
@property (assign) char updatingFromRemoteDisplayBundle;              //@synthesize updatingFromRemoteDisplayBundle=_updatingFromRemoteDisplayBundle - In the implementation block
+(id)remoteDisplayBundleWithPreview:(QLPreviewRef)arg1 displayBundleID:(id)arg2 owner:(id)arg3 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(CGImageRef)copyImageRepresentationWithFrame:(CGRect*)arg1 ;
-(id)sizingConstraints;
-(int)displayFlags;
-(void)setMuted:(char)arg1 ;
-(char)playing;
-(char)hasAudio;
-(void)willOpen;
-(char)autoplay;
-(char)muted;
-(id)launchURL;
-(void)didOpen;
-(NSString *)displayBundleID;
-(id)openingApplicationInfo;
-(char)showScrollerToChangePages;
-(int)pageDisplay;
-(char)scalable;
-(void)refreshSynchronously;
-(char)canBeReused;
-(CGRect)borderFrame;
-(void)backingScaleFactorDidChange;
-(id)quickLookLayer;
-(id)quickLookView;
-(void)globalOriginDidChange;
-(void)windowKeyDidChange;
-(double)totalScroll;
-(double)currentScroll;
-(void)setCurrentScroll:(double)arg1 ;
-(double)totalHorizontalScroll;
-(double)currentHorizontalScroll;
-(void)setCurrentHorizontalScroll:(double)arg1 ;
-(char)isClickablePoint:(CGPoint)arg1 ;
-(void)setQuickLookFrame:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(CGRect)opaqueFrame;
-(void)hostedInWindowServerDidChange;
-(void)willStartLiveResize;
-(void)didEndLiveResize;
-(char)generateThumbnailForPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)customDisplayName;
-(void)_startObserving;
-(void)_stopObserving;
-(char)keepThumbnailUnderInlinePreview;
-(void)modeDidChange;
-(char)prefersLocalEventLoop;
-(id)initWithPreview:(QLPreviewRef)arg1 owner:(id)arg2 ;
-(int)loadWithHints:(id)arg1 ;
-(unsigned long long)overlayVisibilityOptions;
-(double)defaultPageThumbnailRatio;
-(id)accessibilityUIElements;
-(id)accessibilityAttributeValue:(id)arg1 forUIElementWithIdentifier:(id)arg2 ;
-(id)accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:(id)arg1 ;
-(void)setDisplayBundleID:(NSString *)arg1 ;
-(void)performBlockOnMainThread:(/*^block*/id)arg1 ;
-(id)_serializedObject:(id)arg1 ;
-(void)_helperProcessDidDie;
-(void)_updatePropertiesFromRemote:(id)arg1 ;
-(void)resetAccessibility;
-(id)_propertiesToForward;
-(void)_setRemoteProperty:(id)arg1 value:(id)arg2 async:(char)arg3 ;
-(void)_updateActivationState:(int)arg1 ;
-(void)_forwardAction:(SEL)arg1 ;
-(char)_forwardEvent:(id)arg1 ;
-(id)_remotePropertyValueForKey:(id)arg1 ;
-(void)_generatedThumbnail:(CGImageRef)arg1 forPage:(unsigned long long)arg2 ;
-(void)_remotePreviewDidLoadWithContextID:(unsigned)arg1 properties:(id)arg2 ;
-(void)_remotePreviewSizingUpdated;
-(void)_remotePreviewDesistedWithHints:(id)arg1 ;
-(void)_showPasswordUI;
-(char)updatingFromRemoteDisplayBundle;
-(void)setUpdatingFromRemoteDisplayBundle:(char)arg1 ;
-(char)highlighted;
-(void)dealloc;
-(double)duration;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(void)deactivate;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(int)backgroundStyle;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(unsigned long long)currentPage;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(char)smartMagnifyWithEvent:(id)arg1 ;
-(char)beginGestureWithEvent:(id)arg1 ;
-(char)endGestureWithEvent:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(float)volume;
-(unsigned long long)numberOfPages;
-(id)contentLayer;
-(void)discard;
-(void)cleanup;
-(void)setPlaying:(char)arg1 ;
@end

