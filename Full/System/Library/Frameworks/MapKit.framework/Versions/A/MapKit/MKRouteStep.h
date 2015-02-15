/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOStep* _geoStep;
	NSString* _instructions;
	unsigned long long _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (nonatomic,readonly) NSString * instructions;                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                          //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned long long transportType;               //@synthesize transportType=_transportType - In the implementation block
@property (getter=_geoStep,nonatomic,readonly) GEOStep * geoStep;              //@synthesize geoStep=_geoStep - In the implementation block
-(id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4 ;
-(id)_geoStep;
-(MKPolyline *)polyline;
-(unsigned long long)transportType;
-(double)distance;
-(NSString *)instructions;
-(NSString *)notice;
@end

