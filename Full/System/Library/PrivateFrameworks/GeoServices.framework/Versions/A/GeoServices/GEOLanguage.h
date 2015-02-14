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

@interface GEOLanguage : PBCodable <NSCopying> {

	unsigned _identifier;
	NSMutableArray* _languages;

}

@property (assign,nonatomic) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * languages;              //@synthesize languages=_languages - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)languages;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(void)addLanguage:(id)arg1 ;
-(unsigned long long)languagesCount;
-(void)clearLanguages;
-(id)languageAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

