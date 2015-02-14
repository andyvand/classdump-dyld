/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOStructuredAddress, GEOLatLng, NSString;

@interface GEOWaypointID : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned long long _resultProviderId;
	GEOStructuredAddress* _addressHint;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                          //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) unsigned long long resultProviderId;              //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,readonly) char hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                         //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) char hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;               //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) char hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                         //@synthesize placeNameHint=_placeNameHint - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)muid;
-(void)setResultProviderId:(unsigned long long)arg1 ;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(unsigned long long)resultProviderId;
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
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

