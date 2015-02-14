/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCCache.h>

@class QCCache;

@interface QCProviderImageCache : QCCache {

	QCCache* _imageCache;
	QCCache* _representationCache;

}
-(void)dealloc;
-(void)_removeResourceAtIndex:(unsigned long long)arg1 ;
-(id)_copyCacheWithFunction:(/*function pointer*/void*)arg1 userInfo:(void*)arg2 userInfoReleaseCallback:(/*function pointer*/void*)arg3 md5List:(SCD_Struct_QC4*)arg4 md5Indices:(unsigned long long*)arg5 md5Count:(unsigned long long)arg6 ;
-(id)initWithMaximumSize:(double)arg1 maximumResourceAge:(double)arg2 options:(id)arg3 ;
-(void)addResource:(id)arg1 withSize:(double)arg2 cost:(double)arg3 md5List:(SCD_Struct_QC4*)arg4 count:(unsigned long long)arg5 ;
-(void)_collectResourcesForSize;
@end

