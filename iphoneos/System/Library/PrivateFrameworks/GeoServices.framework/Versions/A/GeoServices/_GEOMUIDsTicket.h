/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapServiceTicket.h>

@class NSArray, GEOMapServiceTraits, NSString, GEOMapRegion;

@interface _GEOMUIDsTicket : NSObject <GEOMapServiceTicket> {

	NSArray* _muids;
	GEOMapServiceTraits* _traits;
	char _includeETA;
	char _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) char canceled;                  //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                     //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(GEOMapServiceTraits *)traits;
-(GEOMapRegion *)resultBoundingRegion;
-(id)initWithMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(char)isCanceled;
-(void)dealloc;
-(NSString *)description;
-(void)cancel;
@end

