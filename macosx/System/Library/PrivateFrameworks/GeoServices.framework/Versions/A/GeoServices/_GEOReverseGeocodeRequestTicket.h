/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <GeoServices/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion;

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {

	char _shiftLocationsIfNeeded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSString *)searchQuery;
-(id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(char)arg2 traits:(id)arg3 ;
@end

