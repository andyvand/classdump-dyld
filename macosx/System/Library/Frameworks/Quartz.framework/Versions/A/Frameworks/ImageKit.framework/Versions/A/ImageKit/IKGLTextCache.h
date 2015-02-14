/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableDictionary, IKLinkedList, IKLinkedListNodePool;

@interface IKGLTextCache : NSObject {

	NSMutableDictionary* _cachedStrings;
	CFDictionaryRef _perSizeCaches;
	CGSize _size;
	double _scaleFactor;
	IKLinkedList* _listOfCachedInfo;
	IKLinkedListNodePool* _nodePool;
	unsigned _session;

}
-(void)empty;
-(void)bumpSession;
-(void)storeText:(id)arg1 ;
-(long long)segmentHeightForFontSize:(int)arg1 ;
-(id)cachesForSize:(int)arg1 ;
-(id)cacheForSize:(int)arg1 page:(unsigned)arg2 ;
-(void)_cleanupCacheStackWithSize:(int)arg1 page:(unsigned)arg2 ;
-(void)removeTextNode:(id)arg1 ;
-(id)_generateCachePageForSize:(int)arg1 pageIndex:(unsigned*)arg2 ;
-(char)purgeItemsOutOfDate;
-(id)initWithSize:(CGSize)arg1 scaleFactor:(double)arg2 ;
-(id)cachedTextForText:(id)arg1 ;
-(unsigned long long)cacheStringCount;
-(void)finalize;
-(void)dealloc;
-(CGSize)size;
-(unsigned long long)pageCount;
@end

