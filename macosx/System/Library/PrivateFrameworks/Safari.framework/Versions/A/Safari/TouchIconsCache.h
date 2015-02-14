/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/SiteMetadataImageCache.h>

@class NSMutableDictionary, NSMutableSet;

@interface TouchIconsCache : SiteMetadataImageCache {

	NSMutableDictionary* _touchIconsDataForHosts;
	NSMutableSet* _pendingTouchIconRequestHosts;

}
+(id)sharedCache;
+(const char*)_diskAccessQueueName;
+(id)_imageDirectoryURL;
+(id)_cacheForTesting;
-(void)retainTouchIconForHost:(id)arg1 ;
-(void)releaseTouchIconForHost:(id)arg1 ;
-(char)shouldRequestTouchIconForURLString:(id)arg1 allowRefresh:(char)arg2 ;
-(void)cacheFirstAvailableTouchIcon:(id)arg1 forURLString:(id)arg2 ;
-(void)releaseTouchIconsForHosts:(id)arg1 ;
-(void)_notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3 ;
-(void)_didRemoveImageForKeyString:(id)arg1 quality:(int)arg2 ;
-(void)_didFinishLoadingSettings;
-(id)touchIconForURLString:(id)arg1 ;
-(char)hasDeterminedIconAvailabilityForURL:(id)arg1 ;
-(void)saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 ;
-(void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 ;
-(void)_upgradeCacheVersionIfNeeded;
-(void)_removeTouchIconsDataForHost:(id)arg1 ;
-(void)retainTouchIconsForHosts:(id)arg1 ;
-(id)init;
@end

