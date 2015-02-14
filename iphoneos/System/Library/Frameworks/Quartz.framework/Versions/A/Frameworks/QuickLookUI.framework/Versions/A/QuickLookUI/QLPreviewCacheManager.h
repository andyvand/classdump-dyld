/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QLPreviewView, NSMutableArray, NSSet, NSMapTable, NSArray;

@interface QLPreviewCacheManager : NSObject {

	QLPreviewView* _previewView;
	unsigned long long _maxRecents;
	NSMutableArray* _recentDocuments;
	NSSet* _preloadedItems;
	NSMapTable* _preloadedDocuments;

}

@property (assign) QLPreviewView * previewView;                //@synthesize previewView=_previewView - In the implementation block
@property (assign) unsigned long long maxRecents;              //@synthesize maxRecents=_maxRecents - In the implementation block
@property (retain) NSArray * preloadedItems; 
-(void)setPreloadedItems:(NSArray *)arg1 ;
-(void)flushCache;
-(void)setPreviewView:(QLPreviewView *)arg1 ;
-(void)preloadItemsNow;
-(id)cachedDocumentForItem:(id)arg1 ;
-(void)setMaxRecents:(unsigned long long)arg1 ;
-(unsigned long long)maxRecents;
-(char)hasCachedDocumentForItem:(id)arg1 ;
-(char)cacheRecentDocument:(id)arg1 ;
-(id)cachedDocumentForURL:(id)arg1 ;
-(NSArray *)preloadedItems;
-(void)_invalidateRecentDocuments;
-(id)_documentForItem:(id)arg1 url:(id)arg2 remove:(char)arg3 ;
-(void)_invalidatePreloadedDocuments;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(QLPreviewView *)previewView;
@end

