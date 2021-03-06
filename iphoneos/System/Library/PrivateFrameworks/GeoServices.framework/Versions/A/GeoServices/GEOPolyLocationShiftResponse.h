/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE221* _parameters;
	double _radius;
	int _status;

}

@property (assign,nonatomic) int status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long parametersCount; 
@property (nonatomic,readonly) double* parameters; 
@property (assign,nonatomic) double radius;                                     //@synthesize radius=_radius - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)parametersCount;
-(void)clearParameters;
-(double)parametersAtIndex:(unsigned long long)arg1 ;
-(void)setParameters:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(double*)parameters;
-(void)setStatus:(int)arg1 ;
-(void)addParameters:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

