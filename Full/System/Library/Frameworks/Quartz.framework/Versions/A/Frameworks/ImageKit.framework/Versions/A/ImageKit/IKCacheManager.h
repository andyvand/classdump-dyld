/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKVRamManagerDelegateProtocol.h>
#import <ImageKit/IKRamManagerDelegateProtocol.h>

@class IKVRamManager, IKRamManager, IKCacheData, NSString;

@interface IKCacheManager : NSObject <IKVRamManagerDelegateProtocol, IKRamManagerDelegateProtocol> {

	IKVRamManager* _vramManager;
	IKRamManager* _ramManager;
	IKCacheData* _cache;
	char _openGLEnabled;
	unsigned _cacheTimeoutReferenceSessionID;
	int _cacheTimeoutNotificationPosted;
	id _cacheTimeoutLauncher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)database;
-(void)purge;
-(void)freeCache;
-(id)ramManager;
-(id)vramManager;
-(id)bindEntryInVRam:(unsigned long long)arg1 size:(int)arg2 ;
-(void)unshareIconIfNeeded:(id)arg1 ;
-(void)unbindEntryAtIndex:(unsigned long long)arg1 size:(int)arg2 ;
-(char)addThumbnail:(id)arg1 atUID:(id)arg2 ;
-(void)flushGLOperations;
-(id)bindEntryInRam:(unsigned long long)arg1 size:(int)arg2 ;
-(id)initWithVRAMSupport:(char)arg1 sharedContext:(id)arg2 pixelFormat:(id)arg3 ;
-(void)bumpSessionOfEntry:(unsigned long long)arg1 size:(int)arg2 ;
-(void)bumpSession;
-(void)makeReadyForSharedContext:(id)arg1 pixelFormat:(id)arg2 ;
-(void)invalidateEntryAtUID:(id)arg1 ;
-(char)alreadyHasIconInCache:(OpaqueIconRefRef)arg1 atSize:(int)arg2 validForUID:(id)arg3 ;
-(id)iconCache;
-(void)_stopCacheTimeOutTimerIfNeeded;
-(void)_startCacheTimeOutTimer;
-(void)unbindEntriesAtIndex:(unsigned long long)arg1 ;
-(void)freeVRamCache;
-(void)freeRamCache;
-(unsigned long long)unshareEntriesWithUIDIfNeeded:(id)arg1 ;
-(void)resetInternalCacheVersionForUID:(id)arg1 ;
-(void)compressEntryIfNeeded:(unsigned long long)arg1 size:(int)arg2 ;
-(void)unbindEntriedOlderThanSessionID:(unsigned)arg1 ;
-(void)vramManagerDidUnbindEntry:(unsigned long long)arg1 withSize:(int)arg2 ;
-(void)ramManagerDidUnbindEntry:(unsigned long long)arg1 withSize:(int)arg2 ;
-(id)imageAtIndex:(unsigned long long)arg1 size:(int)arg2 ;
-(void)freeCacheForUID:(id)arg1 ;
-(unsigned long long)countOfBoundSizesAtIndex:(unsigned long long)arg1 ;
-(int)bestThumbnailSizeWithIndex:(id)arg1 renderingSize:(CGSize)arg2 glRendering:(char)arg3 lowFrameRateMode:(char)arg4 ;
-(void)IKCleanTimedOutCache;
-(void)finalize;
-(void)dealloc;
-(unsigned)sessionID;
-(void)cleanup;
@end

