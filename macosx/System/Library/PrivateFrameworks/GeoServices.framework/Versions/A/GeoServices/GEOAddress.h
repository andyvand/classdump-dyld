/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOURLSerializable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOStructuredAddress, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {

	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	SCD_Struct_GE4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLines;                //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,readonly) char hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (assign,nonatomic) char hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType;                              //@synthesize formattedAddressType=_formattedAddressType - In the implementation block
+(id)geoAddressForPlaceData:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithAddressDictionary:(id)arg1 ;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(NSMutableArray *)formattedAddressLines;
-(char)hasStructuredAddress;
-(GEOStructuredAddress *)structuredAddress;
-(id)initWithAddressString:(id)arg1 ;
-(id)bestName;
-(void)addFormattedAddressLine:(id)arg1 ;
-(unsigned long long)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned long long)arg1 ;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(char)arg1 ;
-(char)hasFormattedAddressType;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(char)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)addressDictionary;
@end

