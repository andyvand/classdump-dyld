/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLDisplayBundleOwner.h>

@class NSScreen, NSURL, QLPreviewDocumentReserved, QLPreviewView, NSString, NSArray, QLDisplayBundle;

@interface QLPreviewDocument : NSObject <QLDisplayBundleOwner> {

	QLPreviewDocumentReserved* _reserved;

}

@property (readonly) id<QLPreviewItem> previewItem; 
@property (readonly) QLPreviewView * previewView; 
@property (readonly) char isLoaded; 
@property (readonly) char isGeneric; 
@property (copy) NSString * password; 
@property (readonly) unsigned long long numberOfPages; 
@property (retain) NSArray * highlightedOccurrences; 
@property (assign) unsigned long long focusedOccurrenceIndex; 
@property (retain) QLDisplayBundle * displayBundle; 
@property (retain) QLDisplayBundle * loadingDisplayBundle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int mode; 
@property (readonly) int flavor; 
@property (readonly) CGRect bounds; 
@property (readonly) NSEdgeInsets visualMargins; 
@property (readonly) char isRemote; 
@property (readonly) char isHostedInWindowServer; 
@property (readonly) char inLiveResize; 
@property (readonly) char shouldUseHardwareCodec; 
@property (readonly) double backingScaleFactor; 
@property (readonly) CGPoint globalOrigin; 
@property (readonly) char isWindowKey; 
@property (readonly) NSScreen * screen; 
@property (readonly) NSURL * currentURL; 
@property (readonly) char allowsAlerts; 
@property (assign) char tracksMouseMovements; 
+(id)keyPathsForValuesAffectingNumberOfPages;
+(id)keyPathsForValuesAffectingIsLoaded;
+(id)keyPathsForValuesAffectingDisplayable;
+(id)keyPathsForValuesAffectingMode;
+(id)keyPathsForValuesAffectingFlavor;
+(id)keyPathsForValuesAffectingBounds;
+(id)keyPathsForValuesAffectingVisualMargins;
+(id)keyPathsForValuesAffectingIsRemote;
+(id)keyPathsForValuesAffectingIsHostedInWindowServer;
+(id)keyPathsForValuesAffectingIsWindowKey;
+(id)keyPathsForValuesAffectingInLiveResize;
+(id)keyPathsForValuesAffectingShouldUseHardwareCodec;
+(id)keyPathsForValuesAffectingAllowsAlerts;
+(id)keyPathsForValuesAffectingCurrentURL;
-(id)displayState;
-(NSString *)password;
-(NSURL *)currentURL;
-(void)startLoading;
-(CGPoint)convertPointToScreen:(CGPoint)arg1 ;
-(CGPoint)convertPointFromScreen:(CGPoint)arg1 ;
-(void)cancelPreview;
-(NSEdgeInsets)visualMargins;
-(char)shouldUseHardwareCodec;
-(QLDisplayBundle *)displayBundle;
-(void)setPreviewView:(QLPreviewView *)arg1 ;
-(void)setExternalDocument:(char)arg1 ;
-(char)isGeneric;
-(id)displayable;
-(char)allowsAlerts;
-(char)isExternalDocument;
-(id)initWithPreviewItem:(id)arg1 forPreviewView:(id)arg2 ;
-(void)startLoadingWithForcedDisplayBundleID:(id)arg1 hints:(id)arg2 ;
-(void)willTimeOut;
-(QLDisplayBundle *)loadingDisplayBundle;
-(id)viewForEvent:(id)arg1 ;
-(char)shouldOpenURL:(id)arg1 ;
-(char)generateThumbnailForPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)isHostedInWindowServer;
-(char)isWindowKey;
-(CGPoint)globalOrigin;
-(CGPoint)locationForEvent:(id)arg1 ;
-(char)tracksMouseMovements;
-(void)setTracksMouseMovements:(char)arg1 ;
-(void)startWatchingURL:(id)arg1 ;
-(void)stopWatchingURL:(id)arg1 ;
-(void)displayBundleDidLoad:(id)arg1 ;
-(void)displayBundleDidMismatchLoading:(id)arg1 withHints:(id)arg2 expectedDisplayBundleID:(id)arg3 ;
-(void)displayBundleFailedToLoad:(id)arg1 withError:(id)arg2 ;
-(void)displayBundleDidDesistRemote:(id)arg1 expectedDisplayBundleID:(id)arg2 ;
-(void)displayBundle:(id)arg1 requestReloadAndFallbackWithError:(id)arg2 ;
-(void)displayBundleSizingUpdated:(id)arg1 ;
-(void)displayBundleCustomTitleUpdated:(id)arg1 ;
-(id)stringForPage:(unsigned long long)arg1 ;
-(id)findOccurrencesOfString:(id)arg1 inPage:(unsigned long long)arg2 withOptions:(unsigned long long)arg3 ;
-(NSArray *)highlightedOccurrences;
-(void)setHighlightedOccurrences:(NSArray *)arg1 ;
-(unsigned long long)focusedOccurrenceIndex;
-(void)setFocusedOccurrenceIndex:(unsigned long long)arg1 ;
-(void)setFocusedOccurrenceIndex:(unsigned long long)arg1 inPage:(unsigned long long)arg2 ;
-(char)drawPage:(unsigned long long)arg1 inRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)_setupPreviewWithURL:(id)arg1 contentType:(id)arg2 hints:(id)arg3 ;
-(void)_loadPreviewFailedDueToPasswordProtection;
-(char)_bundleMustLoadInWindow:(id)arg1 ;
-(id)_hintsWithPreviewViewForWebviewPreloading:(id)arg1 ;
-(void)_loadWithDisplayBundleID:(id)arg1 hints:(id)arg2 remoteMode:(unsigned long long)arg3 ;
-(void)_fallbackLoadWithError:(id)arg1 ;
-(void)setLoadingDisplayBundle:(QLDisplayBundle *)arg1 ;
-(void)_loadPreviewSucceeded;
-(void)_loadPreviewFailedWithError:(id)arg1 ;
-(void)setDisplayBundle:(QLDisplayBundle *)arg1 ;
-(void)_didEndLoading;
-(void)_loadPreviewMismatchedWithExpectedDisplayBundleID:(id)arg1 hints:(id)arg2 ;
-(void)openExternalURL:(id)arg1 ;
-(int)flavor;
-(QLPreviewRef)preview;
-(void)dealloc;
-(CGRect)bounds;
-(NSString *)description;
-(void)invalidate;
-(CGRect)convertRectToScreen:(CGRect)arg1 ;
-(char)accessibilityIsIgnored;
-(void)setState:(unsigned long long)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(unsigned long long)state;
-(NSScreen *)screen;
-(char)isRemote;
-(char)inLiveResize;
-(double)backingScaleFactor;
-(char)isLoaded;
-(int)mode;
-(CGRect)convertRectFromScreen:(CGRect)arg1 ;
-(unsigned long long)numberOfPages;
-(id<QLPreviewItem>)previewItem;
-(QLPreviewView *)previewView;
-(void)setPassword:(NSString *)arg1 ;
@end

