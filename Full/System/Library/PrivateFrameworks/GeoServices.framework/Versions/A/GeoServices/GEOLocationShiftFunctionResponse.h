/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOLocationShiftFunctionResponse : NSObject {

	SCD_Struct_GE15 _originalCoordinate;
	SCD_Struct_GE15 _shiftedCoordinate;
	double _creationTime;
	double _params[9];
	double _radius;
	char _isPolyLocationShift;
	char _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE15 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
-(char)needsNewFunctionForCoordinate:(SCD_Struct_GE15)arg1 ;
-(char)wantsNewFunctionForCoordinate:(SCD_Struct_GE15)arg1 ;
-(SCD_Struct_GE15)shiftedCoordinateForCoordinate:(SCD_Struct_GE15)arg1 accuracy:(double*)arg2 ;
-(id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE15)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE15)arg2 ;
-(SCD_Struct_GE15)originalCoordinate;
-(void)setOriginalCoordinate:(SCD_Struct_GE15)arg1 ;
@end

