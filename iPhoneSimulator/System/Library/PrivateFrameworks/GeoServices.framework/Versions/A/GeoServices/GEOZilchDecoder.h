/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol GEOMapAccessRestrictions;
@interface GEOZilchDecoder : GEOMapRequestManager {

	dispatch_queue_sRef _decoderQueue;
	dispatch_queue_sRef _requestQueue;
	mutex _lock;
	id<GEOMapAccessRestrictions> _mapAccessRestrictions;

}

@property (nonatomic,readonly) dispatch_queue_sRef decoderQueue;                              //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (assign,nonatomic) id<GEOMapAccessRestrictions> mapAccessRestrictions;              //@synthesize mapAccessRestrictions=_mapAccessRestrictions - In the implementation block
+(char)decodingSupported;
-(void)setMapAccessRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(void)setRequestQueue:(dispatch_queue_sRef)arg1 ;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
-(dispatch_queue_sRef)requestQueue;
-(id)decodeZilchMessage:(shared_ptr<zilch::Message>*)arg1 pathHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(dispatch_queue_sRef)decoderQueue;
-(id<GEOMapAccessRestrictions>)mapAccessRestrictions;
-(id)init;
-(void)dealloc;
@end

