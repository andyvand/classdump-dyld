/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying> {

	NSMutableArray* _pointCharacteristics;

}

@property (nonatomic,retain) NSMutableArray * pointCharacteristics;              //@synthesize pointCharacteristics=_pointCharacteristics - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPointCharacteristics:(NSMutableArray *)arg1 ;
-(void)addPointCharacteristic:(id)arg1 ;
-(unsigned long long)pointCharacteristicsCount;
-(void)clearPointCharacteristics;
-(id)pointCharacteristicAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pointCharacteristics;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

