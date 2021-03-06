/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface ILMediaBrowserImageManager : NSObject {

	NSRecursiveLock* _imageAccessLock;
	NSString* _uniqueID;
	NSString* _cachedDBasePath;
	NSMutableDictionary* _cachedDBaseDict;
	NSMutableArray* _loadAttributesRequestQueue;
	NSMutableDictionary* _loadAttributesRequestsByPath;
	char _cachedDBaseNeedsSave;

}
+(void)releaseSharedInstance;
+(id)sharedInstance;
-(id)iconImageForFilePath:(id)arg1 ;
-(void)loadCachedAttributesForMediaObject:(id)arg1 ;
-(void)loadCachedAttributesForMediaObject:(id)arg1 updateIfNotFound:(char)arg2 ;
-(void)handleApplicationWillTerminate:(id)arg1 ;
-(void)_writeCachedDBaseDictToFile;
-(id)currentBundle;
-(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(id)defaultFolderImage;
-(id)counterBadgeImageForCount:(unsigned long long)arg1 scaleFactor:(double)arg2 ;
-(id)cachedDBaseDict;
-(void)applyCachedInfo:(id)arg1 toMediaObject:(id)arg2 ;
-(void)loadAttributes:(id)arg1 forMediaObject:(id)arg2 atPath:(id)arg3 ;
-(void)updateThumbnailDataXmlForPath:(id)arg1 info:(id)arg2 ;
-(void)loadAttributes:(id)arg1 forImageMediaObject:(id)arg2 atPath:(id)arg3 ;
-(void)loadAttributes:(id)arg1 forVideoMediaObject:(id)arg2 atPath:(id)arg3 ;
-(void)processLoadAttributesRequest;
-(void)checkForNextRequest;
-(void)addLoadAttributesRequest:(id)arg1 ;
-(id)imageBitmapRep:(id)arg1 ;
-(void)applyRequestedInfoToMediaObject:(id)arg1 ;
-(void)removeRequestFromQueue:(id)arg1 ;
-(void)extractThumbnailAndMetadataFromMovieRequest:(id)arg1 ;
-(id)avAssetWithPath:(id)arg1 ;
-(void)continueProcessingLoadAttributesRequest:(id)arg1 ;
-(id)iconForMediaGroupType:(unsigned long long)arg1 ;
-(id)counterBadgeImageForCount:(unsigned long long)arg1 ;
-(id)defaultOfflineFolderImage;
-(id)iTunesIcon;
-(id)iPhotoIcon;
-(id)apertureIcon;
-(id)iMovieIcon;
-(id)iMovie7Icon;
-(id)garageBandIcon;
-(id)photoBoothIcon;
-(id)attemptToResolveMediaAlias:(id)arg1 moviePath:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
-(id)iconForFile:(id)arg1 ;
@end

