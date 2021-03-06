/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QLDisplayBundle.h>

@protocol QLDisplayable, QLPreviewItem;
@interface QLCustomDisplayBundle : QLDisplayBundle {

	id<QLDisplayable> _displayable;
	id<QLPreviewItem> _previewItem;

}

@property (retain) id<QLDisplayable> displayable;              //@synthesize displayable=_displayable - In the implementation block
@property (retain) id<QLPreviewItem> previewItem;              //@synthesize previewItem=_previewItem - In the implementation block
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingNumberOfPages;
+(id)keyPathsForValuesAffectingCurrentPage;
+(id)keyPathsForValuesAffectingTotalScroll;
+(id)keyPathsForValuesAffectingCurrentScroll;
+(id)keyPathsForValuesAffectingTotalHorizontalScroll;
+(id)keyPathsForValuesAffectingCurrentHorizontalScroll;
+(id)customDisplayBundleForPreviewItem:(id)arg1 owner:(id)arg2 displayable:(id)arg3 ;
+(id)keyPathsForValuesAffectingAutoplay;
+(id)keyPathsForValuesAffectingHasAudio;
-(void)setMuted:(char)arg1 ;
-(char)playing;
-(char)hasAudio;
-(char)allowsPlugIns;
-(char)autoplay;
-(char)muted;
-(id)displayBundleID;
-(void)didShow;
-(void)willHide;
-(id<QLDisplayable>)displayable;
-(char)isValidInPreviewMode:(int)arg1 ;
-(id)quickLookLayer;
-(id)quickLookView;
-(double)totalScroll;
-(double)currentScroll;
-(void)setCurrentScroll:(double)arg1 ;
-(double)totalHorizontalScroll;
-(double)currentHorizontalScroll;
-(void)setCurrentHorizontalScroll:(double)arg1 ;
-(char)allowsOpeningFileURLs;
-(char)allowsNetworkAccess;
-(char)allowsFileAccess;
-(int)loadWithHints:(id)arg1 ;
-(char)allowsJavascript;
-(void)setDisplayable:(id<QLDisplayable>)arg1 ;
-(void)_updatePreviewItem;
-(void)dealloc;
-(double)duration;
-(id)URL;
-(unsigned long long)currentPage;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(float)volume;
-(unsigned long long)numberOfPages;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(void)willShow;
-(void)didHide;
-(void)cleanup;
-(void)setPlaying:(char)arg1 ;
@end

