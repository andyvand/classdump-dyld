/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol GEOMapAccessRestrictions;
@interface GEOMapAccess : GEOMapRequestManager {

	dispatch_queue_sRef _callbackQueue;
	id<GEOMapAccessRestrictions> _restrictions;
	/*^block*/id _tileErrorHandler;

}

@property (nonatomic,readonly) char allowsNetworkTileLoad; 
@property (assign,nonatomic) id<GEOMapAccessRestrictions> restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                      //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
+(id)realisticMap;
+(char)supportsRealisticMap;
-(void)setRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id)findRoadTilesWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 tileHander:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)allowsNetworkTileLoad;
-(dispatch_queue_sRef)callbackQueue;
-(void)setCallbackQueue:(dispatch_queue_sRef)arg1 ;
-(id<GEOMapAccessRestrictions>)restrictions;
-(id)findRoadEdgesWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findClosestNamedFeaturesAtCoordinate:(SCD_Struct_GE15)arg1 roadHandler:(/*^block*/id)arg2 pointHandler:(/*^block*/id)arg3 polygonHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findClosestRoadAtCoordinate:(SCD_Struct_GE15)arg1 roadHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)buildMapEdgeFrom:(const SCD_Struct_GE178*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(id)tileErrorHandler;
-(void)setTileErrorHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

