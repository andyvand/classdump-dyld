/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOStructuredAddress, GEOLatLng, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {

	unsigned long long _muid;
	GEOStructuredAddress* _addressHint;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _resultProviderId;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                            //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                         //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) char hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                        //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) char hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;              //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) char hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                        //@synthesize placeNameHint=_placeNameHint - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)muid;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(int)resultProviderId;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(char)hasLocationHint;
-(char)hasAddressHint;
-(char)hasPlaceNameHint;
-(GEOLatLng *)locationHint;
-(GEOStructuredAddress *)addressHint;
-(NSString *)placeNameHint;
-(id)initWithMuid:(unsigned long long)arg1 addressHint:(id)arg2 locationHint:(SCD_Struct_GE15)arg3 placeNameHint:(id)arg4 resultProviderId:(int)arg5 ;
-(id)initWithMapItemToRefine:(id)arg1 ;
-(id)initWithCoordinateHint:(SCD_Struct_GE15)arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

