/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOLocation, NSMutableArray;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	double _distance;
	NSMutableArray* _sortedETAs;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                   //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned responseETASeconds;                    //@synthesize responseETASeconds=_responseETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned baselineETASeconds;                    //@synthesize baselineETASeconds=_baselineETASeconds - In the implementation block
@property (nonatomic,readonly) double distance;                                //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedETAs;                    //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(double)distance;
-(NSMutableArray *)sortedETAs;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(GEOLocation *)destinationLocation;
-(unsigned)responseETASeconds;
-(unsigned)baselineETASeconds;
-(void)dealloc;
@end

