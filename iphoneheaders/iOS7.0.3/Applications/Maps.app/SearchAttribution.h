/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class AttributionInfo;

@interface SearchAttribution : PBCodable <NSCopying> {

	unsigned _attributionIndex;
	unsigned _businessIndex;
	AttributionInfo* _key;

}

@property (nonatomic,retain) AttributionInfo * key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned businessIndex;                 //@synthesize businessIndex=_businessIndex - In the implementation block
@property (assign,nonatomic) unsigned attributionIndex;              //@synthesize attributionIndex=_attributionIndex - In the implementation block
-(unsigned)businessIndex;
-(unsigned)attributionIndex;
-(void)setBusinessIndex:(unsigned)arg1 ;
-(void)setAttributionIndex:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)key;
-(id)dictionaryRepresentation;
-(void)setKey:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
