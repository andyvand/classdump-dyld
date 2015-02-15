/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCResource.h>

@class QCPixelFormat;

@interface QCImageBuffer : QCResource {

	unsigned long long _identifier;
	int _status;
	CGColorSpaceRef _colorspace;
	QCPixelFormat* _format;
	unsigned long long _width;
	unsigned long long _height;
	char _flipped;
	void* _backing;
	/*function pointer*/void* _backingCallback;
	void* _backingInfo;
	double _cost;
	unsigned long long _cacheRetainCount;
	CFArrayRef _caches;
	opaque_pthread_mutex_t _cachesMutex;
	void** _unused1[4];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(unsigned long long)identifier;
-(char)isFlipped;
-(unsigned long long)pixelsHigh;
-(CGColorSpaceRef)colorSpace;
-(unsigned long long)pixelsWide;
-(int)status;
-(char)writeToFile:(id)arg1 ;
-(id)pixelFormat;
-(void)cacheRelease:(id)arg1 ;
-(id)cacheRetain:(id)arg1 ;
-(void)removeFromAllCachesExcept:(id)arg1 ;
-(char)didRecycleResource:(id)arg1 ;
-(unsigned long long)cacheRetainCount;
-(void)willRecycleResource:(id)arg1 ;
-(void)clearBuffer;
-(void*)backingReleaseInfo;
-(unsigned long long)byteSize;
-(id)copyWithZone_GCCacheResource:(NSZone*)arg1 ;
-(void)_finalize_QCImageBuffer;
-(char)beginUpdateBuffer:(char)arg1 ;
-(id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4 ;
-(char)beginUpdateBuffer:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(void)endUpdateBuffer:(char)arg1 ;
-(void)setBacking:(void*)arg1 releaseCallback:(/*function pointer*/void*)arg2 releaseInfo:(void*)arg3 ;
-(void*)backing;
-(/*function pointer*/void*)backingReleaseCallback;
-(id)pixelBufferRepresentation;
-(void)setCost:(double)arg1 ;
-(double)cost;
-(void)_invalidateData;
@end
