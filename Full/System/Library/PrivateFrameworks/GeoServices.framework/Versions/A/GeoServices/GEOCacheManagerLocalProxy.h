/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOCacheManaging.h>

@class NSString;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {

	dispatch_queue_sRef _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_invalidationDataHasExpired:(id)arg1 ;
-(long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned)arg3 versionDomains:(id)arg4 ;
-(char)_invalidationDataHasExpiredByVersion:(unsigned)arg1 domains:(id)arg2 ;
-(char)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)invalidationStateForPlace:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

