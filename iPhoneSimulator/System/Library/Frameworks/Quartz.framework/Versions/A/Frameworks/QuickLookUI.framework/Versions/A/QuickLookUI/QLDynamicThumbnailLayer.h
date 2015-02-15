/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol QLPreviewItem;
@class NSURL, CALayer, NSConditionLock, NSString;

@interface QLDynamicThumbnailLayer : CALayer {

	NSURL* _url;
	unsigned long long _requestIndex;
	QLThumbnailRef _thumbnail;
	CALayer* _backLayer;
	CALayer* _frontLayer;
	CGRect _thumbnailContentRect;
	char _subthumbnailNeedsDisplayRequested;
	char _isPaused;
	NSConditionLock* _pauseLock;
	char _hasSubthumbnailToRemove;
	char _hasSubthumbnailToShow;
	char _loaded;
	CGSize _maxThumbnailSize;
	CGSize _minThumbnailSize;
	NSString* _contentTypeUTIHint;
	id<QLPreviewItem> _previewItem;
	char _needsPlaceHolder;
	char _showPlaceholderAfterTimeout;

}

@property (retain) id<QLPreviewItem> previewItem;                 //@synthesize previewItem=_previewItem - In the implementation block
@property (copy) NSURL * URL; 
@property (copy) NSString * contentTypeUTIHint;                   //@synthesize contentTypeUTIHint=_contentTypeUTIHint - In the implementation block
@property (readonly) char loaded; 
@property (assign) char showPlaceholderAfterTimeout;              //@synthesize showPlaceholderAfterTimeout=_showPlaceholderAfterTimeout - In the implementation block
@property (assign) CGSize minThumbnailSize;                       //@synthesize minThumbnailSize=_minThumbnailSize - In the implementation block
@property (readonly) CGSize thumbnailSize; 
@property (readonly) CGRect thumbnailContentFrame; 
@property (readonly) CGImageRef thumbnailImage; 
-(char)loaded;
-(id)_subthumbnailLayers;
-(void)_reallyRemoveOldestSubthumbnail;
-(void)_ql_layoutSublayers;
-(void)_removeOldestSubthumbnail;
-(void)_showNewestSubthumbnail;
-(void)appendSubThumbnail:(CGImageRef)arg1 ;
-(void)_setPlaceHolder;
-(void)_updatePauseLock;
-(void)_updateSubthumbnails;
-(void)recomputeThumbnailIfNeeded;
-(void)_appendSubThumbnail:(id)arg1 ;
-(void)_blockAndWaitIfNecessaryWithRequestIndex:(unsigned long long)arg1 ;
-(void)_thumbnailDone:(id)arg1 ;
-(void)_computeFolderContentsThumbnailsContinuously:(CFURLRef)arg1 requestIndex:(unsigned long long)arg2 ;
-(CGSize)minThumbnailSize;
-(NSString *)contentTypeUTIHint;
-(CGSize)_optimalThumbnailSize;
-(void)_computeThumbnail:(QLThumbnailRef)arg1 forURL:(id)arg2 withUTIHint:(id)arg3 requestIndex:(unsigned long long)arg4 ;
-(void)_dispatchRequestInfo;
-(CGSize)_realThumbnailSize;
-(void)handleMouseDownAtPoint:(CGPoint)arg1 ;
-(CGRect)thumbnailContentFrame;
-(char)showPlaceholderAfterTimeout;
-(void)setShowPlaceholderAfterTimeout:(char)arg1 ;
-(void)setMinThumbnailSize:(CGSize)arg1 ;
-(void)setContentTypeUTIHint:(NSString *)arg1 ;
-(CGSize)thumbnailSize;
-(CGImageRef)thumbnailImage;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(NSURL *)URL;
-(id)hitTest:(CGPoint)arg1 ;
-(void)resume;
-(void)setURL:(NSURL *)arg1 ;
-(void)pause;
-(char)isPaused;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)previewItem;
@end

