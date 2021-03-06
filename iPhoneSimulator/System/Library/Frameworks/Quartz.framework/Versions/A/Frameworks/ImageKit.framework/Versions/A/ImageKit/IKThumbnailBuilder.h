/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKCacheManager, NSString, IKImageWrapper, NSDictionary, NSURL, IKCacheDatabaseEntry;

@interface IKThumbnailBuilder : NSObject {

	IKCacheManager* _cache;
	NSString* _uid;
	int _modelSize;
	unsigned long long _version;
	id _cell;
	IKImageWrapper* _image;
	IKImageWrapper* _thumbnail;
	char _modelIsOriginalImage;
	char _thumbnailAlreadyExistInCache;
	char _supportsConcurrent;
	char _completed;
	char _requiresQuicklook;
	NSDictionary* _quicklookOptions;
	NSURL* _quicklookURL;
	double _thumbnailSize;
	int _quality;
	IKCacheDatabaseEntry* _cacheEntry;

}
+(void)splitBuilders:(id)arg1 intoSequentialList:(id)arg2 andConcurrentList:(id)arg3 ;
+(id)thumbnailBuilderQueueWithThumbnails:(id)arg1 withDelegate:(id)arg2 didEndSelector:(SEL)arg3 ;
-(int)quality;
-(char)needComputeThumbnail;
-(void)computeThumbnail;
-(id)cacheEntry;
-(double)thumbnailSize;
-(void)prepareComputeWithCache:(id)arg1 uid:(id)arg2 version:(unsigned long long)arg3 size:(double)arg4 quality:(int)arg5 ;
-(id)cache;
-(char)requiresQuicklook;
-(char)supportsConcurrent;
-(void)unlockCache;
-(void)tagImage;
-(int)modelSize;
-(id)quicklookOptions;
-(id)quicklookURL;
-(void)dealloc;
-(void)clear;
-(id)image;
-(id)cell;
-(void)setCell:(id)arg1 ;
-(unsigned long long)version;
-(void)setThumbnail:(id)arg1 ;
-(id)thumbnail;
-(id)uid;
-(char)completed;
@end

