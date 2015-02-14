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

@class NSString;

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {

	NSString* _attributeKey;
	NSString* _attributeValue;

}

@property (nonatomic,retain) NSString * attributeKey;                //@synthesize attributeKey=_attributeKey - In the implementation block
@property (nonatomic,retain) NSString * attributeValue;              //@synthesize attributeValue=_attributeValue - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)attributeKey;
-(void)setAttributeKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)attributeValue;
-(void)setAttributeValue:(NSString *)arg1 ;
@end

