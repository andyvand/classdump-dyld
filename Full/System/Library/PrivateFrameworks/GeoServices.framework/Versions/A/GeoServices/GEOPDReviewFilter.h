/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDReviewFilter : PBCodable <NSCopying> {

	SCD_Struct_GE82* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) SCD_Struct_GE82* photoSizeFilters; 
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearPhotoSizeFilters;
-(unsigned long long)photoSizeFiltersCount;
-(SCD_Struct_GE82)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoSizeFilter:(SCD_Struct_GE82)arg1 ;
-(SCD_Struct_GE82*)photoSizeFilters;
-(void)setPhotoSizeFilters:(SCD_Struct_GE82*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

