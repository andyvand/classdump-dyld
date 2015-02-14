/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOComposedRouteSection : NSObject {

	unsigned _startPointIndex;
	unsigned _pointCount;
	SCD_Struct_GE92* _points;
	SCD_Struct_GE54 _bounds;
	int _transportType;

}

@property (nonatomic,readonly) unsigned startPointIndex;              //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount;                   //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE92* points;               //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE54 bounds;                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) int transportType;                     //@synthesize transportType=_transportType - In the implementation block
-(unsigned)startPointIndex;
-(SCD_Struct_GE92*)points;
-(unsigned)pointCount;
-(unsigned)endPointIndex;
-(int)transportType;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 bounds:(SCD_Struct_GE54)arg4 transportType:(int)arg5 ;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 transportType:(int)arg4 fallbackStartCoordinate:(SCD_Struct_GE15)arg5 fallbackEndCoordinate:(SCD_Struct_GE15)arg6 ;
-(void)dealloc;
-(SCD_Struct_GE54)bounds;
-(id)description;
@end

