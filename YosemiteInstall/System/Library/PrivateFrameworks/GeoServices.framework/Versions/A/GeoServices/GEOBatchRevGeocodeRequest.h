/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	SCD_Struct_GE57* _additionalPlaceTypes;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;
	char _splitIntoClusters;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasSplitIntoClusters; 
@property (assign,nonatomic) char splitIntoClusters;                                      //@synthesize splitIntoClusters=_splitIntoClusters - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,retain) NSMutableArray * serviceTags;                                //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addLocation:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceTags;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)locationsCount;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)clearLocations;
-(char)splitIntoClusters;
-(void)setSplitIntoClusters:(char)arg1 ;
-(void)setHasSplitIntoClusters:(char)arg1 ;
-(char)hasSplitIntoClusters;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)locations;
@end

