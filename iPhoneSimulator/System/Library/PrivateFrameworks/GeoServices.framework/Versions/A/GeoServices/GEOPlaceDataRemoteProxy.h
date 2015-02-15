/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOPlaceDataProxy.h>

@class NSString;

@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy> {

	dispatch_queue_sRef _requestQ;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)requestMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 requesterHandler:(/*^block*/id)arg4 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 requesterHandler:(/*^block*/id)arg4 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 requesterHandler:(/*^block*/id)arg3 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

