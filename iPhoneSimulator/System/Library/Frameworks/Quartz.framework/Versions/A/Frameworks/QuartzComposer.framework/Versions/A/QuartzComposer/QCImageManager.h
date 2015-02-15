/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QCCache;
#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSDictionary, QCCGLContext, NSMutableDictionary, QCResourcePool, GFList;

@interface QCImageManager : NSObject {

	NSDictionary* _options;
	QCCGLContext* _context;
	NSMutableDictionary* _userInfo;
	CFBagRef _clients;
	opaque_pthread_mutex_t _managerMutex;
	QCResourcePool* _pixelBufferPool;
	QCResourcePool* _textureBufferPool;
	QCResourcePool* _texturePool;
	id<QCCache> _providerImageCache;
	id<QCCache> _representationCache;
	id<QCCache> _conversionCache;
	id<QCCache> _sequenceCache;
	id<QCCache> _imageCache;
	double _ageConfidence;
	double _requestedRAM;
	double _maximumAvailableRAM;
	double _requestedVRAM[8];
	double _maximumAvailableVRAM[8];
	long long _rendererID[8];
	double _reclaimResourcesTimestamp;
	double _GCReclaimResourcesTimestamp;
	GFList* _converterCache;
	unsigned long long _converterCacheTimestamp;
	opaque_pthread_mutex_t _converterCacheMutex;
	NSMutableDictionary* _exporterClassCache;
	NSMutableDictionary* _exporterTypeCache;
	unsigned long long _exporterCacheTimestamp;
	opaque_pthread_mutex_t _exporterCacheMutex;
	NSMutableDictionary* _convertersList;
	opaque_pthread_mutex_t _convertersListMutex;
	opaque_pthread_cond_t _convertersListCondition;
	NSMutableDictionary* _exportersList;
	opaque_pthread_mutex_t _exportersListMutex;
	opaque_pthread_cond_t _exportersListCondition;
	void* _cvTextureCache;
	QCCacheProfileInfo* _cacheProfileInfo;
	void** _unused[1];

}
+(void)initialize;
+(id)sharedSoftwareImageManager;
+(id)createUniqueImageManagerForQCCGLContext:(id)arg1 options:(id)arg2 ;
+(void)registerImageBufferConverterClass:(Class)arg1 priority:(float)arg2 ;
+(double)_maximumAvailableMemoryForRendererID:(long long)arg1 ;
+(id)imageBufferConverterClasses;
+(float)priorityForBufferConverterClass:(Class)arg1 ;
+(id)unregisterBufferConverterClass:(Class)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(id)options;
-(id)openGLContext;
-(id)listResources;
-(void)reclaimResources;
-(void)purgeResources;
-(id)createPixelBufferFromProvider:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)createImageWithSource:(id)arg1 options:(id)arg2 ;
-(id)openGLContextForCurrentThread;
-(id)initWithOpenGLContext:(id)arg1 options:(id)arg2 ;
-(id)performanceCountersForVirtualScreen:(unsigned long long)arg1 purgeable:(char)arg2 ;
-(id)ageStatisticsForIndex:(unsigned long long)arg1 ;
-(id)createTextureBufferFromImageBuffer:(id)arg1 target:(unsigned)arg2 sourceBounds:(CGRect)arg3 options:(id)arg4 ;
-(id)createTextureBufferWithFormat:(id)arg1 target:(unsigned)arg2 pixelsWide:(unsigned long long)arg3 pixelsHigh:(unsigned long long)arg4 options:(id)arg5 ;
-(id)createTextureBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(id)createPixelBufferFromImageBuffer:(id)arg1 sourceBounds:(CGRect)arg2 options:(id)arg3 ;
-(id)createPixelBufferWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4 ;
-(id)createPixelBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(CVOpenGLTextureCacheRef)CVOpenGLTextureCache;
-(id)createTextureBufferFromProvider:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(id)createSurfaceBufferFromProvider:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)registeredClients;
-(void)setUserInfo:(id)arg1 forKey:(id)arg2 ;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(id)userInfoForKey:(id)arg1 ;
-(id)createRepresentationFromProvider:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 ;
-(void)_finalize_QCImageManager;
-(double)availableMemoryForRequestedMemory:(double)arg1 ofType:(int)arg2 virtualScreen:(unsigned long long)arg3 ;
-(void)optimizeCaches;
-(id)_createImageBufferFromProvider:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(char)copyPixelsFromImage:(id)arg1 toBaseAddress:(void*)arg2 withBytesPerRow:(unsigned)arg3 ;
-(id)_createPixelBufferFromImageBuffer:(id)arg1 bounds:(CGRect)arg2 needsClipping:(char)arg3 flippedState:(long long)arg4 options:(id)arg5 ;
-(id)_createTextureBufferFromImageBuffer:(id)arg1 target:(unsigned)arg2 bounds:(CGRect)arg3 needsClipping:(char)arg4 flippedState:(long long)arg5 options:(id)arg6 ;
-(id)_createImageBufferFromImageBuffer:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(id)initWithQCCGLContext:(id)arg1 options:(id)arg2 ;
-(id)QCCGLContext;
-(void)_setProfileCache:(char)arg1 ;
-(QCCacheProfileInfo*)_cacheProfileInfo;
-(id)createFlattenedImage:(id)arg1 withFormat:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(id)createSurfaceBufferWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4 ;
-(id)_convertersList;
-(opaque_pthread_mutex_t*)_convertersListMutex;
-(opaque_pthread_cond_t*)_convertersListCondition;
-(id)createSurfaceBufferFromPixelBuffer:(id)arg1 bounds:(CGRect)arg2 flip:(char)arg3 options:(id)arg4 ;
-(id)createPixelBufferFromPixelBuffer:(id)arg1 bounds:(CGRect)arg2 flip:(char)arg3 options:(id)arg4 ;
-(id)createPixelBufferFromTextureBuffer:(id)arg1 bounds:(CGRect)arg2 options:(id)arg3 ;
-(id)createTextureBufferFromPixelBuffer:(id)arg1 target:(unsigned)arg2 bounds:(CGRect)arg3 options:(id)arg4 ;
-(id)createTextureBufferFromTextureBuffer:(id)arg1 target:(unsigned)arg2 bounds:(CGRect)arg3 flip:(char)arg4 options:(id)arg5 ;
-(char)_computeImageBufferParametersForProvider:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 outSrcFormat:(id*)arg5 outSrcTarget:(unsigned*)arg6 outSrcColorSpace:(CGColorSpace*)arg7 outDstFormat:(id*)arg8 outDstTarget:(unsigned*)arg9 outDstColorSpace:(CGColorSpace*)arg10 relaxedFormat:(char)arg11 softwareOnly:(char)arg12 ;
-(id)createSurfaceBufferFromTextureBuffer:(id)arg1 bounds:(CGRect)arg2 options:(id)arg3 ;
-(id)copyPixelBufferFromImageBuffer:(id)arg1 sourceBounds:(CGRect)arg2 options:(id)arg3 ;
@end

