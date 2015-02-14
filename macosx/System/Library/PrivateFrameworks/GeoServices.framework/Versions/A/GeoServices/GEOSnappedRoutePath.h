/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEOComposedRouteSection, NSArray, GEOMapRequest;

@interface GEOSnappedRoutePath : NSObject {

	GEOComposedRoute* _route;
	GEOComposedRouteSection* _section;
	NSArray* _edges;
	GEOMapRequest* _edgeSearchRequest;
	CFSetRef _observers;
	unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection> >* _mapMatchingSection;
	char _hasCompletedMapMatching;
	unsigned _routeStartIndex;
	unsigned _routeEndIndex;
	unsigned _unsnappedPointCount;
	SCD_Struct_GE92* _unsnappedPoints;

}

@property (readonly) unsigned routeStartIndex;                                       //@synthesize routeStartIndex=_routeStartIndex - In the implementation block
@property (readonly) unsigned routeEndIndex;                                         //@synthesize routeEndIndex=_routeEndIndex - In the implementation block
@property (readonly) char isMapMatching; 
@property (readonly) char isMapMatched; 
@property (readonly) char hasCompletedMapMatching; 
@property (readonly) NSArray * edges;                                                //@synthesize edges=_edges - In the implementation block
@property (readonly) GEOComposedRouteSection * section;                              //@synthesize section=_section - In the implementation block
@property (readonly) const RouteMapMatchingSection* mapMatchingSection; 
-(GEOComposedRouteSection *)section;
-(unsigned)routeStartIndex;
-(unsigned)routeEndIndex;
-(char)hasCompletedMapMatching;
-(char)isMapMatched;
-(NSArray *)edges;
-(const RouteMapMatchingSection*)mapMatchingSection;
-(id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned)arg3 routeEndIndex:(unsigned)arg4 ;
-(char)isMapMatching;
-(void)matchWithDecoder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)_calculateEdgeLengthFrom:(const Matrix<float, 2, 1>*)arg1 to:(const Matrix<float, 2, 1>*)arg2 startCoord:(const PolylineCoordinate*)arg3 endCoord:(const PolylineCoordinate*)arg4 ;
-(void)_debugPrintEdge:(id)arg1 ;
-(char)hasObserver:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

